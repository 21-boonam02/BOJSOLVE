def sol1463():
    N = int(input())
    dp = [0]*(N + 1)
    for i in range(2,N + 1):
        if i % 3 == 0 and i % 2 == 0:
            if dp[i//3] > dp[i//2]:
                dp[i] = min(dp[i//2] + 1,dp[i - 1] + 1)
            else:
                dp[i] = min(dp[i//3] + 1,dp[i- 1] + 1)
        elif i % 3 != 0 and i % 2 == 0:
            dp[i] = min(dp[i//2] + 1,dp[i - 1] + 1)
        elif i % 3 == 0 and i % 2 != 0:
            dp[i] = min(dp[i//3] + 1,dp[i - 1] + 1)    
        else:
            dp[i] = dp[i - 1] + 1
    print(dp[N])

if __name__ == "__main__":
    sol1463()
