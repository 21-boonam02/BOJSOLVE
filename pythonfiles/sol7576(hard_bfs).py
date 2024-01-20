def sol7576():
    from collections import deque
    import sys
    input = sys.stdin.readline
    M,N = map(int,input().split())
    graph = []
    find_one_coordinate = [] # 1의 좌표를 넣기 위한 list
    #-1 의 개수를 파악해서 최종적으로 비교 확인
    for _ in range(N):
        a = list(map(int,input().split()))
        graph.append(a)
        
    not_tomato = 0 # 최종적으로 안 익은 토마토 개수 = 바뀐 토마토개수면 된다.
    for i in range(N):
        for j in range(M):
            if graph[i][j] == 1:
                find_one_coordinate.append((i,j))
            elif graph[i][j] == 0:
                not_tomato += 1
 
    def bfs(graph,find_one_coordinate):
        q = deque()    
        dx = [1, -1, 0, 0]
        dy = [0, 0, 1, -1]
        visited = [[0]*(M + 1) for _ in range(N + 1)]
        max_day = 0
        tmt_change_count  = 0
        
        for i in find_one_coordinate:
            q.append((i[0],i[1]))
            visited[i[0]][i[1]] = 1

        while q:
            x, y = q.popleft()
            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                if 0 <= nx < N and 0 <= ny < M and visited[nx][ny] == 0:
                    if graph[nx][ny] == 0:
                        graph[nx][ny] = graph[x][y] + 1
                        if max_day < graph[nx][ny]:
                            max_day = graph[nx][ny]
                        visited[nx][ny] = 1
                        tmt_change_count += 1                
                        q.append((nx,ny)) 
                            
        return tmt_change_count, max_day
    tmt_change_count, max_day = bfs(graph,find_one_coordinate)

    if tmt_change_count == not_tomato:
        if max_day == 0:
            print(0)
        else:
            print(max_day -1)
    else:
        print(-1)
    print(*graph,sep = '\n')

if __name__ == "__main__":
    sol7576()
