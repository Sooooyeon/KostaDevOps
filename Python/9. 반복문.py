# print('programming '*5)

##for num in range(0,10,1):
##    print(num+1,'programming')

    
# 1부터 10까지의 합을 구하시오
##sum = 0;
##for num in range(1,11,1):
##    sum += num
##print(sum)

##for i in range(1,366,1):
##    print(i, '일 지났습니다.')

##sum = 0;
##for num in range(0,101,2):
##    sum += num
##print(sum)


# 입력한 값의 범위 알아내기
##favorite = int(input('내가 가장 좋아하는 숫자는?'))
##start = int(input('범위 시작값'))
##end = int(input('범위 끝값'))
##
##
##for i in range(start, end, 1):
##    if favorite == i:
##        print('좋아하는 숫자가 범위 안에 있습니다.')
##        print('좋아하는 숫자는', i, '입니다')



# 구구단 출력하기

##num = int(input('구구단 몇단을 출력할까요?'))
##
##for i in range(1,10,1):
##    print('%d * %d = %d' % (num, i,num*i))

##for i in range(2,10,1):
##    for j in range(1,10,1):
##        print('%d * %d = %d' %(i,j,i*j))
##    print()
    


# 별찍기
##star  = '*'
##for col in range(1,6,1):
##    for row in range(0,col,1):
##        print(star,end='')
##    print()

##iloop = 0
##while iloop < 5:
##    print('programming')
##    iloop += 1


##sum = 0
##val = 0
##
##while val < 101:
##    sum = sum + val
##    val = val + 1
##print('1부터 100까지의 합은',sum)


##sum = 0
##val = 1
##
##while val < 101:
##    sum = sum + val
##    val = val + 2
##print('1부터 100사이 홀수의 합은',sum)


# 사용자로부터 단수를 입력받아 구구단 출력

dan = int(input('몇단을 출력할까요?'))
val = 1

while val < 10:
    print('%d * %d = %d' %(dan,val,dan*val))
    val += 1








