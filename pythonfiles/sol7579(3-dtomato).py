def sol7569():
    from collections import deque

    M,N,H = map(int,input().split())
    graph = [[] for _ in range(H)]
    for w in range(H):
        for _ in range(N):
            a = list(map(int,input().split()))
            graph[w].append(a)
   # print(graph[1][1][2]) # 맨 앞 z 높이, 중간 y_행, 마지막 x_열 부분
    check_tomato_pos = []
    nottomato = 0
   
    for i in range(H):
        for j in range(N):
            for k in range(M):
                if graph[i][j][k] == 1:
                    check_tomato_pos.append((i,j,k))
                elif graph[i][j][k] == 0:
                    nottomato += 1
   
    def bfs(graph,check_tomato_pos):
        max_day = 0
        changetomato = 0
        q = deque()
        h = len(graph)
        row = len(graph[0])
        col = len(graph[0][0])
        visited = [[[0]*(col + 1) for _ in range(row + 1)] for _ in range(h + 1)]
        for l in range(len(check_tomato_pos)):
            q.append(check_tomato_pos[l])
            visited[check_tomato_pos[l][0]][check_tomato_pos[l][1]][check_tomato_pos[l][2]] = 1
        
        dx = [1, -1,0 ,0 ,0 ,0]
        dy = [0, 0, 1, -1, 0, 0 ,0]
        dz = [0, 0, 0, 0, 1, -1]
        while q:
            z,y,x = q.popleft()

            for dir in range(6):
                nx = x + dx[dir]
                ny = y + dy[dir]
                nz = z + dz[dir]
                if 0 <= nx < col and 0 <= ny < row and 0 <= nz < h and visited[nz][ny][nx] == 0:
                    if graph[nz][ny][nx] == 0:
                        graph[nz][ny][nx] = graph[z][y][x] + 1
                        visited[nz][ny][nx] = 1
                        changetomato += 1
                        q.append((nz,ny,nx))
                        if max_day < graph[nz][ny][nx]: 
                            max_day = graph[nz][ny][nx]
        
        return max_day, changetomato
    
    max_day, changetomato = bfs(graph,check_tomato_pos)
  
    if nottomato == changetomato:
        if max_day == 0:
            print(0)
        else:
            print(max_day - 1)
    else:
        print(-1)
if __name__ == "__main__":
    sol7569()
