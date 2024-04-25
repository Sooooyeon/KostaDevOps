##
##num1 = int(input('첫번째 숫자를 입력해주세요.:'))
##num2 = int(input('두번째 숫자를 입력해주세요.:'))
##
##def plus(a,b):
##    return a + b
##
##def minus(a,b):
##    return a - b
##
##def multiple(a,b):
##    return a * b
##
##def divide(a,b):
##    return a/b
##
##print(plus(num1,num2))
##print(minus(num1,num2))
##print(multiple(num1,num2))
##print(divide(num1,num2))


##dan = int(input('몇 단을 출력할까요?'))
##
##def gugudan(dan):
##    for i in range(1,10,1):
##        print('%d * %d = %d' % (dan,i,dan*i))
##
##gugudan(dan)


ID = 'sooooyeon'
PW = '1234'

def account(id,pw):
    if id == ID:
        if pw == PW:
            print('로그인 되었습니다.')
        else:
            print('비밀번호가 올바르지않습니다.')
    else:
        print('아이디가 올바르지않습니다.')
        

userId = input('사용자 아이디:')
userPw = input('사용자 비밀번호:')


account(userId, userPw)
