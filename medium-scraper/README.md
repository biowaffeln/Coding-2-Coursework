# Medium Post Scraper

A command line tool for scraping medium articles, summarizing them and reading them with text-to-speech.

## Installation

This project uses `pipenv`. To install the dependencies, run `pipenv install`. Then execute the script with `pipenv run python medium_reader.py`.

## Usage

The medium-reader script expects the url of a medium article as the first parameter. Additionally, you can pass in three flags, `--summary`, `--text`, and `--read`.
- If you provide the `--text` flag, it will export the article as a markdown file.
- If you provide the `--read` flag, the script will convert the article to mp3 and play the file.
- If you provide the summary flag, the script will summarize the article with gensim and use the summarized text instead of the whole article text

## Lessons

First of all, this project taught me how to install and manage python packages with pipenv. Secondly, it allowed me to explore the usage of some interesting packages, such as BeautifulSoup for web scraping, gensim for text summarization, and the Google text-to-speech package. Lastly, I learned how to make a simple command line app from a Python script with the [pathon-fire](https://github.com/google/python-fire) package.


