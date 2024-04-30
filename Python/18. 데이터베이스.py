import sqlite3

conn = sqlite3.connect('bookStoreDB')
print('1. DB연결 성공')

cur = conn.cursor()
print('2. 커서 생성 성공')

cur.execute('select * from bookItem')
print('3. 데이터 조회')

while True:
    row = cur.fetchone() # fetchone - 한줄씩 테이블의 행을 읽어옴
    if row == None:
        break
    print(row)
print('4. 데이터 출력')

cur.execute("insert into bookItem values('C++','chlee','hyejiwon',600)")
print('5. 데이터 입력')

conn.commit()
print('6. 데이터 저장')


print('3. 데이터 조회')
while True:
    row = cur.fetchone() # fetchone - 한줄씩 테이블의 행을 읽어옴
    if row == None:
        break
    print(row)


conn.close()
print('7. DB 연결 종료')
