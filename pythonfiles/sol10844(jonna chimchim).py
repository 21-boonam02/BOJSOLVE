def sol10844():
    # 동적 계획법: 쉬운 계단 수 
    # 시발 ㅈㄴ 할게 너무 많아
    n = int(input())
    mod = 1000000000
    dp = [[0] *(10) for _ in range(n+1)]
    for i in range(10):
        dp[1][i] = 1
    for i in range(2):
        dp[i][0] = 0
    if n == 1:
        print(sum(dp[1]))
    else:
        for i in range(2,n+1):
            for j in range(0,10):
                if j == 0:
                    # j = 0 일때에서 약간 좀 이해가 안 되는 부분이 있는데, 아 ㅅㅂ 이거 왜 이러지
                  # 전반적인 알고리즘 구성은 이해가 가는데 아 
                    dp[i][j] = dp[i-1][j + 1] 
                elif j == 9:
                    dp[i][j] = dp[i -1][j -1] 
                else:
                    dp[i][j] = dp[i - 1][j -1] + dp[i -1][j + 1]
                    
        total = 0
        for  j in range(0,10):
            total += dp[n][j]
        ans = total % mod
        print(ans)
        print(*dp, sep= "\n")
    

if  __name__=="__main__":
    sol10844()
