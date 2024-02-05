def sol1149(): #  동적 프로그래미이 동적 계획법
    n = int(input())
    dp = []
    for _ in range(n):
        a = list(map(int,input().split()))
        dp.append(a)
    #print(dp[0])
    for i in range(n-1):
        for j in range(3):
            if j == 0:
                dp[i + 1][j] += min(dp[i][1],dp[i][2])
            elif j == 1:
                dp[i + 1][j] += min(dp[i][0],dp[i][2])
            else:
                dp[i +1][j] += min(dp[i][0],dp[i][1])
    print(min(dp[n-1]))

if __name__ == "__main__":
    sol1149()
