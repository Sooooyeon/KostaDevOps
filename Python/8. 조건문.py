
##a = 9
##if a > 10:
##    print('a는 10보다 큽니다.')
##    print('콘솔출력')
##    print('출력')
##
##else :
##    print('a는 10보다 작거나 같습니다.')

##id = 'sooooyeon'
##pw = '1234'
##
##userId = input('사용자 아이디:')
##userPw = input('사용자 비밀번호:')
##
##if id == userId:
##    if pw == userPw:
##        print('로그인 되었습니다.')
##    else:
##        print('비밀번호가 올바르지않습니다.')
##else:
##    print('아이디가 올바르지않습니다.')

##subject = input('좋아하는 과목은?:')
##if subject == 'python':
##    print('내가 좋아하는 과목은 파이썬입니다.')
##elif subject == 'java':
##    print('내가 좋아하는 과목은 자바 입니다.')
##elif subject == 'C#':
##    print('내가 좋아하는 과목은 C#입니다.')
##elif subject == 'node.js':
##    print('내가 좋아하는 과목은 node.js입니다.')
##else:
##    print('내가 좋아하는 과목은 없습니다.')

##shortcut = int(input('단축키를 입력하세요'))
##
### 1번 : '엄마 : 010-xxxx-xxxx'
### 2번 : '아빠 : 010-xxxx-xxxx'
### 3번 : '친구 : 010-xxxx-xxxx'
### '해당 단축키가 없습니다.'
##
##
##if shortcut == 1:
##    print('엄마 : 010-xxxx-xxxx')
##elif shortcut ==2:
##    print('아빠 : 010-xxxx-xxxx')
##elif shortcut ==3:
##    print('친구 : 010-xxxx-xxxx')
##else:
##    print('해당 단축키가 없습니다')


# 입력한 월에 해당하는 계절 출력
# 1월, 2월, 12월 겨울 /  3 - 5 봄/ 6 - 8 여름/ 9 -11 가을

##month = int(input('월을 입력하세요.'))
##if month == 1 or month == 2 or month == 12:
##    print('겨울 입니다.')
##elif month >= 3 and month < 6:
##    print('봄 입니다.')
##elif month >= 6 and month < 9:
##    print('여름 입니다.')
##elif month >= 9 and month < 12:
##    print('가을 입니다.')
##else:
##    print('입력한 월이 존재하지 않습니다.')


# 학점 출력하기
# 100-91 A / 90 - 81 B / ... / 70 - 61 D / 60이하 F / 수의 범위는 0-100

##score = int(input('점수를 입력하세요.'))
##
##if score >= 0  and score <=100:
##    if score > 90:
##        print('A')
##    elif score > 80 and 90 >= score:
##        print('B')
##    elif score > 70 and 80 >= score:
##        print('C')
##    elif score > 60 and 70 >= score:
##        print('D')
##    else:
##        print('F')
##else:
##    print('입력한 점수의 범위가 올바르지 않습니다.')

##score = int(input('점수를 입력하세요.'))
##
##if score > 90 and 100 >= score:
##    print('A')
##elif score > 80 and 90 >= score:
##    print('B')
##elif score > 70 and 80 >= score:
##    print('C')
##elif score > 60 and 70 >= score:
##    print('D')
##elif score >= 0 and 60 >= score:
##    print('F')
##else:
##    print('입력한 점수의 범위가 올바르지 않습니다.')



# 자판기
##print('===== 자판기 메뉴 ====')
##print('1.음료 1000원 2.과자 2000원, 3. 껌 500원')
##print()
##
##cracker = 2000
##drink = 1000
##ggum = 500
##
##money = int(input('insert Coin:'))
##
##if money >= cracker:
##    print('과자,음료,껌 모두 구매할 수 있습니다.')
##elif money < cracker and money >= drink:
##    print('음료,껌을 구매할 수 있습니다.')
##elif money < drink and money >= ggum:
##    print('껌만 구매할 수 있습니다.')
##else:
##    print('구매가 불가능합니다.')


idnum = input('나이를 입력하세요:')


if int(idnum) >= 19:
    pass
else:
    print('신분증을 제시하세요.')








































