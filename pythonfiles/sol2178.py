def sol2178(): #최단 경로 문제@!
    from collections import deque
    N, M = map(int,input().split()) # N = 4, M = 6
    graph = [] #이번에도 또 x,y좌표 헷갈렸는데, 그냥 
    #하던대로 그냥 하던대로 제발 하자!!
    for _ in range(N):
        a = list(map(int,input()))
        graph.append(a)
    #print(graph[3][5])
    def bfs(start_x,start_y,end_x,end_y,graph):
        dx = [1,-1,0,0]
        dy = [0,0,1,-1]
        n = len(graph) #
        m = len(graph[0]) # 
        visited = [[False] * (m+ 1) for _ in range(n + 1)]
        c = 1
        que = deque([(start_x,start_y, c)])
        visited[start_x][start_y] = True

        while que:
            x, y, dist = que.popleft()
            if x == end_x and y == end_y:
                return dist
            
            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny]:
                    if graph[nx][ny] == 1:
                        graph[nx][ny] = 0
                        visited[nx][ny] = True
                        que.append(((nx,ny,dist + 1)))
        return -1
    small = bfs(0,0,N-1,M-1,graph)
    print(small)

if __name__ == '__main__':
    sol2178()
