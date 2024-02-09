def sol2156():
    n = int(input())
    grape = []
    for _ in range(n):
        a = int(input())
        grape.append(a)
    #print(*grape)
    dp = [0] * (n + 1)

    if n == 1:
        dp[1] = grape[0]
        print(dp[1])
    elif n == 2:
        dp[2] = grape[0] + grape[1]
        print(dp[2])
    else:
        dp[1] = grape[0]
        dp[2] = grape[0] + grape[1]
        dp[3] = max(grape[0] + grape[1],grape[2] + grape[1],grape[0] + grape[2])
        for i in range(4, n + 1):
            dp[i] = max(grape[i -1] + dp[i -2],
                        grape[i -1]+ grape[i -2]+ dp[i - 3],dp[i -1]) 
            
        print(dp[n])
        #print(*dp)

if __name__ == "__main__":
    sol2156()
