def sol1003():
    T = int(input())
    for _ in range(T):
        n = int(input())
        def fib(n):
            dp = [(-1) for _ in range(n + 1)]
            dp[0] =  0
            dp[1] =  1

            for i in range(2,n+1):
                dp[i] = dp[i - 1] + dp[i - 2]

            return dp[n]
        if n == 0:
            print("%d %d" %(1, 0))
            continue
        elif n == 1:
            print("%d %d" %(0, 1))
            continue

        print("%d %d" %(fib(n-1), fib(n)))
if __name__ == "__main__":
    sol1003()

#참고하면 좋을 코드들
# from sys import stdin
# input = stdin.readline

# t = int(input())
# arr = [0] * 41
# arr[0] = [1,0]; arr[1] = [0,1]
# for i in range(2,41):
#     arr[i] = [arr[i - 1][1],sum(arr[i = 1])]
# for i in range(t):
#     N = int(input())
#     print(*arr[N])
