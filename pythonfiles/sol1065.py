def sol1065(): #한수 문제 이 문제 겁나 쉽다
    n = int(input())
    cnt = 0
    if n <100:
        cnt = n
    else:
        cnt = 99
        for i in range(100,n + 1):
            a = i // 100
            b_ = i - 100 * a
            b = b_ //10
            c = i % 10
            if a - b == b - c:
                cnt += 1
    print(cnt)

if __name__ == "__main__":
    sol1065()
