# 바이너리 파일 복사
##import os
##
##srcfile = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/submarine.png'
##destfile = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/submarinecpy.png'
##
##if os.path.exists(srcfile):
##    sfp = open(srcfile, 'rb')
##    dfp = open(destfile, 'wb')
##
##    while True:
##        sbyte = sfp.read()
##        if not sbyte:
##            break
##        dfp.write(sbyte)
##
##    sfp.close()
##    dfp.close()
##    print("%s 파일을 복사했습니다." % srcfile)
##
##else:
##    print("%s 파일이 존재하지 않습니다." % srcfile)
    

# mp3 파일 열기

import os

srcfile = 'C:/Users/KOSTA/Desktop/장수연/KostaDevOps/Python/SleepAway.mp3'

if os.path.exists(srcfile):
    sfp = open(srcfile, 'rb')

    sfp.seek(-128,2) # 끝점에서부터 -128이면 시작점이 됨
    tdata = sfp.read(128)
    title = tdata[3:33].decode()
    print('제목 : ' + title)
    artist = tdata[33:63].decode()
    print('음악가 : ' + artist)
    mdate = tdata[93:97].decode()
    print('출시년도 : ' + mdate)

    sfp.close()
    print('\n음악 정보를 정상적으로 출력하였습니다.')
else:
    print('\n원본 파일이 존재하지 않습니다.')


    
