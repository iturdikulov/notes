from bs4 import BeautifulSoup as bs  # import for beautifulsoup\
from bs4 import SoupStrainer as strainer
import requests  # this is so i can use a link to get html output

url = 'https://en.wikipedia.org/wiki/Glossary_of_computer_science'
response = requests.get(url)

only_glossary = strainer(attrs={'class': 'glossary'})
soup = bs(response.content, 'html.parser', parse_only=only_glossary)  # turn html into soup

for dl in soup.find_all('dl'):
    for items in dl.find_all():
        if items.name == 'dt':
            print(f"- {items.text}\n")
        elif items.name == 'dd':
            print(f"> {items.text}\n")
