
def sol1012():
    from collections import deque
    T = int(input())
    for _ in range(T):
        M, N, K = map(int,input().split())
        graph = [[0]* (N + 1) for _ in range(M + 1)]
        for _ in range(K):
            a, b = map(int,input().split())
            graph[a][b] = 1
        #print(*graph, sep = '\n')
        #그래프 개형이 갑자기 ㅈㄴ 헷갈려가지고 헤멨는데,
        #그냥 하던대로 그대로 꼽아 넣으면 성립함.
        def bfs(start_x,start_y,graph):
            size = 0
            dx = [1, -1, 0, 0]
            dy = [0, 0, 1, -1]
            que = deque([(start_x,start_y)])
            visited = [[False]* (N + 1) for _ in range(M + 1)]
            # global 처리를 해야 될 수도

            visited[start_x][start_y] = True

            while que:
                x, y = que.popleft()
                for i in range(4):
                    nx = x + dx[i]
                    ny = y + dy[i]
                    if 0 <= nx < M and 0 <= ny < N and not visited[nx][ny]:
                        if graph[nx][ny] == 1:
                            graph[nx][ny] = 0
                            visited[nx][ny] = True
                            # 지렁이 개수
                            size += 1
                            que.append((nx,ny)) 

            return size
        Num = []
        for a in range(M + 1):
            for b in range(N + 1):
                if graph[a][b] == 1:
                    result = bfs(a,b, graph)
                    Num.append(result)
        print(len(Num))
            
if __name__ == '__main__':
    sol1012()
