# 자동화 공정 함수로 구현하기

# 1. 주문
# 2. 물을 준비
# 3. 커피를 넣는다.
# 4. 물을 넣는다.
# 5. 완료


coffee = ''



def coffee_machine(sel_coffee, count_coffee):
    for i in range(0,count_coffee,1):
        print('1. 물을 준비한다.')
        print('2. 컵을 준비한다.')
        if sel_coffee == '아아':
            print('3. 아아를 탄다.')
        elif sel_coffee == '카페라떼':
            print('3. 카페라떼를 탄다.')
        elif sel_coffee == '카페모카':
            print('3. 카페모카를 탄다.')
        else:
            print('3. 아무거나 탄다.')
        print('4. 물을 붓는다.')
        print()
    print(count_coffee, '잔의 커피가 나왔습니다')



# 주문
coffee = input('커피를 선택하시오.(아아, 카페라떼, 카페모카):')
count = int(input('몇 잔이 필요하신가요?:'))

coffee_machine(coffee, count)
print(coffee, '서비스 완료') 

