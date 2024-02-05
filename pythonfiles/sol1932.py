
def sol1932():
    n = int(input())
    triangle = []
    for _ in  range(n):
        a = list(map(int,input().split()))
        a.append(0)
        b = [0]
        c = b + a
        triangle.append(c)

    for i in range(1,n):
        for j in range(1,len(triangle[i - 1])):
            triangle[i][j] += max(triangle[i-1][j-1],triangle[i-1][j])
            # 이 아이디어를 생각해내는 것이 key !!!
            # 그러니까 나는 잘 할 수 있고 계속 생각하면 된다@
            # 꾸준함이 답이다. 오늘부터 2문제씩, 트리 혹은 스택 관련 문제 풀자!
   # print(*triangle, sep = '\n')
    print(max(triangle[n-1]))


if __name__ == "__main__":
    sol1932()
