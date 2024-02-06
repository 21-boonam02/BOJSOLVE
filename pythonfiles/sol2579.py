def sol2579():
    # 아니 어떻게 이런 점화식을 생각할 수가 있지?
    n = int(input())
    step = []
    for _ in range(n):
        a = int(input())
        step.append(a)
    dp = [0]*(n + 1)
    #dp[0] = 0
    if n == 1:
        print(step[0])
    elif n == 2:
        print(step[0] + step[1])
    elif n == 3:
        print(max(step[0] + step[2],step[1] + step[2]))
    else:
        dp[0] = step[0]# 첫번째 계단
        dp[1] =step[0] + step[1]
        dp[2] = max(step[0] + step[2],step[1] + step[2])# 세 개의 계단
        
        for i in range(3,n):
            # i-1 i번째, i -1 번째 계단 + i - 3번째 계단 더하기
            # max() i - 1 번째,
            dp[i] = max(step[i] + step[i - 1] + dp[i - 3], 
                        step[i] + dp[i - 2])
        print(dp[n-1])
    


if __name__ == "__main__":
    sol2579() # 두개의 계단
