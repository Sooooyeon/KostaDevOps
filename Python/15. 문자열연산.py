# 개수 = 문자열.count('검색할 문자 또는 문자열')

##string1 = '간장 공장 공장장은 강 공장장이고 된장 공장 공장장은 공 공장장이다'
##
##chr1 = string1.count('공')
##chr2 = string1.count('장')
##
##print('공의 개수: %d' % chr1)
##print('공의 개수: %d' % chr2)
##
##
##string2 = '내가 그린 기린 그림은 잘 그린 기린 그림이고 네가 그린 기린 그림은 잘 못 그린 기린 그림이다.'
##str1 = string2.count('그린')
##str2 = string2.count('기린')
##str3 = string2.count('그림')
##
##
##print('그린의 개수: %d' % str1)
##print('기린의 개수: %d' % str2)
##print('그림의 개수: %d' % str3)



# 새로운 문자열 = 구분자.join(문자열)

##train_str  = '칙칙폭폭'
##div_str = '-'.join(train_str)
##print(div_str)
##
##num_str = '123456789'
##div_str = ','.join(num_str)
##print(div_str)



# 새로운 문자열 = 구분자.join(리스트)

##ani_list = ['강아지','고양이','원숭이','코끼리']
##div_str = '+'.join(ani_list)
##print(div_str)

##time_list = ['09','48','50']
##div_str = ':'.join(time_list)
##print(div_str)



# 리스트 = 문자열.split(구분자)

##planet_str = '수성-금성-지구-화성-목성'
##planet_list = planet_str.split('-')
##print(planet_list)

##time_str = '09시:54분:10초'
##time_list = time_str.split(':')
##print(time_list)



# 대소문자 변환
# 대문자로 변환 = 문자열.upper()
# 소문자로 변환 = 문자열.lower()

##eng_str = input('영문자를 입력하세요')
##
##upper_str = eng_str.upper()
##lower_str = eng_str.lower()
##
##print('대문자로 변환 : %s' % upper_str)
##print('소문자로 변환 : %s' % lower_str)


# 문자열 공백 제거 trim(),strip()

##str = '    간장 공장 공장장은 강 공장장이고 된장 공장 공장장은 공 공장장이다   '
##print(str.strip())

##str = '    죽는 날까지 하늘을 우러러  '
##print(str)
##print(str.lstrip()) # lsrtip은 왼쪽 공백 제거, rstrip은 오른쪽 공백 제거
##print(str.strip())  # 양쪽 공백 제거


# isXXX - 상태를 검사 (bool 값을 반환)
# 문자열.isalpha()
# 문자열.isupper()
# 문자열.islower()
# 문자열.isspace()


##string1 = input('문자열을 입력하세요 : ')
##
##if string1.isalpha():
##    print('문자열은 글자로 구성되어있습니다.')
##    if string1.isupper():
##        print('문자열은 대문자로 구성되어 있습니다.')
##    elif string1.islower():
##        print('문자열은 소문자로 구성되어 있습니다.')
##elif string1.isdigit():
##    print('문자열은 숫자로 구성되어있습니다.')
##elif string1.isspace():
##    print('문자열은 공백으로 구성되어있습니다.')
##else:
##    print('모르겠습니다')

    
