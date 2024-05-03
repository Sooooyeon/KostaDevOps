from bs4 import BeautifulSoup

homepage = open('ediya.html','r',encoding='utf-8')
doc = homepage.read()

homepage.close()

soup = BeautifulSoup(doc,'html.parser')
result = soup.find_all('p',class_='each-menu')


##webpage = requests.get("https://www.daangn.com/hot_articles")
##soup = BeautifulSoup(webpage.content,"html.parser")
##
##print(soup)



for data in result:
    print(data.text)
