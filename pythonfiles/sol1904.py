def sol1904():
    import sys
    input = sys.stdin.readline
    # 이거 피보나치인가?
    N = int(input())
    dp = [0]* (N + 2)
    dp[1] = 1
    dp[2] = 2
    for i in range(3,N + 1):
        dp[i] = (dp[i -1] + dp[i -2]) % 15746 
        # 중간에 계속 나누어 주어야 메모리 초과가 일어나지 않는다.
    print(dp[N])

if __name__ == "__main__":
    sol1904()
# 00타일이 올 경우 00으로 시작
# 1 타일이 올 경우 1로 시작
# 길이가 N인 이진 수열의 개수를 f(N)이라고 정의하면 (1)의 가지수는 f(N -2)
#(2)의 가짓수는 f(N -1)이 된다.
# 따라서 전체 경우의 수는 f(N)은 경우 (1)과 (2)의 가짓수의 합인
# f(N) = f(N -1) + f(N - 2)가 되며 f(0) = f(1) = 1임
