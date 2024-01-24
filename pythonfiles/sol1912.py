def sol1912(): #dynamic programming
    n = int(input())
    arr = list(map(int,input().split()))

    dp = [-1000] * (n + 1)
    dp[0] = arr[0]
    length = len(arr)
    for i in range(1,length ):
        dp[i] = max(dp[i - 1]+ arr[i],arr[i])
    print(max(dp))


if __name__ == "__main__":
    sol1912()
