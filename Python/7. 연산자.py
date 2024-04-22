
# 산술연산자
##num1 = 5;
##num2 = 3;
##print('두 수의 합:'+str(num1+num2)+'입니다.')
##print('두 수의 차:'+str(num1-num2)+'입니다.')
##print('두 수의 곱:'+str(num1*num2)+'입니다.')
##print('두 수의 나누기:'+str(num1/num2)+'입니다.')
##print('두 수를 나눈 나머지:'+str(num1%num2)+'입니다.')
##print('두 수를 나눈 몫은:'+str(num1//num2)+'입니다.')
##print('제곱수:'+str(num1**num2)+'입니다.')




# 대입연산자
##num1 = 5;
##num2 = 3;
##
##num1 += num2
##print(str(num1))
##
##num1 -= num2
##print(str(num1))
##
##num1 *= num2
##print(str(num1))
##
##num1 /= num2
##print(str(num1))

money = int(input('돈을 넣어주세요:'))
count = int(input('티켓 몇 장 드릴까요?'))
ticket = 15000
money = money - (ticket*count)

# 삼항연산자
result = money < 0 and '잔액이 부족합니다. 금액을 투입해주세요.' or '거스름돈:'+ str(money)


print(result)




# 관계연산자
##a = 10
##b = 11
##c = 12
##d = 10
##
##print('a==b의 결과', a==b)
##print('a<b의 결과', a<b)
##print('a>=b의 결과', a>=b)
##print('a==d의 결과', a==d)




#논리연산자
##a = 10
##b = 11
##c = 12
##d = 10
##
##print('not(a<10)의 결과', not(a<10))
##print('a < b and a > c의 결과', a < b and a > c)
##print('a>=c or a == d의 결과', a >= c or a == d)





