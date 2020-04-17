import os
import urllib3
from gtts import gTTS
from bs4 import BeautifulSoup
from gensim.summarization import summarize
from fire import Fire


def fetch_article(link) -> (str, str):
    http = urllib3.PoolManager()
    req = http.request("GET", link)
    soup = BeautifulSoup(req.data, features="html.parser")
    title = soup.article.h1.get_text()
    paragraphs = soup.article.find(
        "div", recursive=False).find_all(["p", "h1"])
    body = "\n\n".join([p.get_text() for p in paragraphs])
    return (title, body)


def text_to_speech(title, body):
    text = title + ". " + body
    tts = gTTS(text=text)
    filename = f'{title}.mp3'
    tts.save(filename)
    os.system(f'mpg123 "{filename}"')


def save_to_file(title, body):
    with open(f'{title}.md', "w") as file:
        file.write(f'# {title}\n\n{body}')


def medium_reader(url, read=False, text=False, summary=False):
    print("fetching article...")
    title, body = fetch_article(url)
    if(summary):
        body = summarize(body)
        title = title + " - Summary"
    if(read):
        print("generating speech...")
        text_to_speech(title, body)
    if(text):
        print("generating text...")
        save_to_file(title, body)


if __name__ == "__main__":
    Fire(medium_reader)
