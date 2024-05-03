import matplotlib.pylab as plt

##season = ['spring','summer','autumn','winter']
##corona = [400, 800, 600, 1200]
##
##plt.plot(season,corona)
##plt.title("corona status by season")
##plt.xlabel("season")
##plt.ylabel("num of infectee")
##plt.show()



##season = ['spring','summer','autumn','winter']
##corona = [400, 800, 600, 1200]
##
##plt.subplot(2,1,1)
##plt.plot(season,corona)
##
##plt.subplot(2,1,2)
##plt.bar(season,corona, width=0.5, color='pink')
##plt.title("corona status by season")
##plt.xlabel("season")
##plt.ylabel("num of infectee")
##plt.show()



##son = [6.53, 7.14, 6.99, 7.1, 6.51]
##kane = [7.53, 7.68, 7.6, 7.3, 7.4]
##erikson = [7.4, 7.53, 7.4, 7.08, 6.51]
##
##year = [2015, 2016, 2017, 2018, 2019]
##
##plt.plot(year, erikson, 'g--', label = 'erikson')
##plt.plot(year, son, 'b--', label = 'son-heung-min')
##plt.plot(year, kane, 'r--', label = 'harry kane')
##
##
##plt.xlim(2014.5, 2019.5)
##plt.ylim(6,8)
##plt.legend(loc = 8)
##plt.xlabel("year")
##plt.ylabel("rating")
##plt.show()




goals = [13, 9, 8, 4, 3]
assists = [2,9,4,2,0]

players = ["kane","Son","Alli","erikson","Moura"]

plt.scatter(goals,assists)

for goal, assist, player in zip(goals, assists, players):
    plt.annotate(player,
                 xy = (goal, assist),
                 xytext = (5, -5), # x축과 y축 거리가 얼마만큼 떨어지게 할 건지
                 textcoords = "offset points"
                 )

plt.title('players goal and assists')
plt.xlim(0,15)
plt.xlabel("Goals")
plt.ylabel("Assists")
plt.show()
