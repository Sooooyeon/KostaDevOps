
tp1 = (1,2,3,4,5,6)
tp2 = 7,8,9

tp3 = (1,)
tp4 = 1,

print(tp1)
print(tp2)
print(tp3)
print(tp4)

#tp1.append(4) #읽기 전용으로 추가 안됨

print(tp1[1])
print(tp1[0]+tp1[1])


# 튜플이름[시작인덱스:끝인덱스+1]
print(tp1[1:3])
print(tp1[1:])
print(tp1[:3])
print(tp2[0:3])

print(tp1 + tp2)
print(tp2 * 3)

