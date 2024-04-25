
# 리스트이름 = [값1,값2,값3]

##ktx = [1,2,3,4,5,6,7,8,9,10]
##sum = 0
##
##for i in range(0,10):
##    sum += ktx[i]
##
##for i in range(0,5):
##    ktx.append(100+i)
##
##print(ktx)
##print(sum)

##ktx = []
##sum = 0
##
##for i in range(0,100):
##    ktx.append(i+1)
##
##for i in range(0,100):
##    sum += ktx[i]
##
##print(sum)
      

##ktx = []
##ktx = [1,2,3,4,5]
##ktx = [3.14, 1.59, 2,65]
##ktx = ['하하','호호']
##ktx = [1,2,'박수',4,5,'박수',7,8,'박수']

# 리스트이름[시작인덱스: 끝인덱스 + 1]

##ktx = [10,20,30,40,50,60,70]
##print(ktx[0:2])
##print(ktx[:3])
##print(ktx[4:])
##print(ktx[2:6])



##ktx = [10,20,30,40]
##tgv = [40,50,60]
##
##print(ktx+tgv)
##print(ktx*3)
##
##ktx[0] = 100
##ktx[1] = 300
##print(ktx)



##ktx = [10,20,30,40]
##
##ktx[2:3] = [300,301,302]
##print(ktx)
##
##del(ktx[2])
##print(ktx)
##
##
##ktx[1:3] = []
##print(ktx)


ktx = [10,20,30,40]

print('현재리스트:', ktx)

ktx.append(50)
print('append 함수사용:', ktx)

ktx.pop()
print('pop 함수 사용:', ktx)


ktx.reverse()
print('reverse 함수 사용:', ktx)


ktx.sort()
print('sort 함수 사용:', ktx)


ktx.remove(20)
print('remove 함수 사용:',ktx)

ktx.insert(1,'지금 냄새난다')
print('insert 함수 사용:',ktx)

tgv = [100,200,300]
ktx.extend(tgv)
print('extend 함수 사용',ktx)
print('+ 사용',ktx+tgv)

cntlist = len(ktx)
print('len 함수:', cntlist)





