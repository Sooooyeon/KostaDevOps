# 전역 변수

hap = 100

def sum (value):
    global hap
    hap = hap + value
    print(hap)

sum(10)
print(hap)
