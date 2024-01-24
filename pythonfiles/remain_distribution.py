a, b, c = map(int,input().split()) # 나머지 연산의 분배법칙
def res(a,b,c): # 1629
    if b == 1:
        return a % c
    else:
        tmp = res(a,b//2,c)
        if b % 2 == 0:
            return (tmp * tmp) % c
        else:
            return (tmp * tmp * a) % c
print(res(a,b,c))
