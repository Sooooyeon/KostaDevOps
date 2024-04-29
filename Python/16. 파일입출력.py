
#fp = open('C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/poem.txt','r',encoding = 'utf-8')

##str = fp.read()
##print(str)


# 한 라인씩 읽기

##while True:
##    strline = fp.readline()  # readline은 문자만 읽을 수 있음
##    if strline == "":
##        break
##    print(strline)


# 한 라인이 아니라 통째로 읽기 readlines()

##strline = fp.readlines()
##print(strline)
##
##for strlist in strline:
##    print(strlist)

# fp.close()






# 파일이 존재하지 않는 경우 파일체크

# 반환값 = os.path.exists(파일명),파일 시스템

##import os
##
##fName = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/poem.txt'
##
##if os.path.exists(fName):
##    # fp = open(fName,'r',encoding = 'utf-8')
##    with  open(fName, 'r',encoding = 'utf-8') as fp:
##    # clos를 생략하려면 이렇게 사용, with에 실행문이 종속되도록 해야함
##        strline = fp.readlines()
##
##        for strlist in strline:
##            print(strlist)
##    # fp.close()
##else:
##    print('%s 파일이 존재하지 않습니다.' % fName)





# 파일객체.write(입력 문자열)
# 파일객체.writelines(리스트 문자열)

##fName = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/test.txt'
##with open(fName,'w', encoding = 'utf-8') as fp:
##    while True:
##        instr = input('데이터 입력:')
##
##        if instr == '\q':
##            break
##        fp.writelines(instr + '\n')
    



# 파일 복사

##import os
##
##srcfile = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/poem.txt'
##destfile = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/dest.txt'
##
##if os.path.exists(srcfile):
##    sfp = open(srcfile, 'r',encoding='utf-8')
##    dfp = open(destfile, 'w',encoding='utf-8')
##
##    slist = sfp.readlines()
##    for instr in slist:
##        dfp.writelines(instr)
##
##    sfp.close()
##    dfp.close()
##    print("%s 파일을 복사했습니다." % srcfile)
##
##else:
##    print("%s 파일이 존재하지 않습니다." % srcfile)




# 바이너리 파일 복사
import os

srcfile = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/submarine.png'
destfile = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/submarinecpy.png'

if os.path.exists(srcfile):
    sfp = open(srcfile, 'rb')
    dfp = open(destfile, 'wb')

    while True:
        sbyte = sfp.read()
        if not sbyte:
            break
        dfp.write(sbyte)

    sfp.close()
    dfp.close()
    print("%s 파일을 복사했습니다." % srcfile)

else:
    print("%s 파일이 존재하지 않습니다." % srcfile)











    

