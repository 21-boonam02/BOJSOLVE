def sol9461():
    T = int(input())
    for _ in range(T):
        a = int(input())
        dp = [1]* 101
        dp[1] = 1
        dp[2] = 1
        dp[3] = 1
        for i in range(4,a+1):
            dp[i] = dp[i - 2] + dp[i - 3]
        print(dp[a])
if __name__ == "__main__":
    sol9461() # 다이나믹 프로그래밍으로 피보나치 수열이다.
