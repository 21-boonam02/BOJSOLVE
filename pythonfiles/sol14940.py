from collections import deque

a,b = map(int,input().split())
graph = [[0]*b for _ in range(a)]
for i in range(a):
        graph[i] = list(map(int, input().split()))
#for row in graph:
      #  print(row)
for i in range(a):
     for j in range(b):
          if graph[i][j] == 2:
               start = (i,j)

def bfs_matrix(graph, start):
    a = len(graph)
    b = len(graph[0])
    
    visited = [[False]*b for _ in range(a)]
    count_mtx = [[0]*b for _ in range(a)]
    queue = deque([start])
    visited[start[0]][start[1]] = True
    count_mtx[start[0]][start[1]] = 0
    directions =[(-1, 0), (1, 0), (0, -1), (0, 1)]
    while queue:
        x,y = queue.popleft()
        #print(f"Visiting node : ({x},{y})")
        
        for dx,dy in directions:
              nx,ny = x + dx, y + dy
              if 0 <= nx < a and 0 <= ny < b and not visited[nx][ny]:
                  if graph[nx][ny] == 1:
                    queue.append((nx,ny))
                    visited[nx][ny] = True
                    count_mtx[nx][ny] = count_mtx[x][y] + 1
                  elif graph[nx][ny] == 0:
                       visited[nx][ny] = True
              elif 0 <= nx < a and 0 <= ny < b and not visited[nx][ny] and graph[nx][ny] == 0:
                    visited[nx][ny] = True
                    count_mtx[nx][ny] = 0
    
    for i in range(a):
          for j in range(b):
                if graph[i][j] == 1 and not visited[i][j]:
                      count_mtx[i][j] = -1
    
    
    return count_mtx

mtx = bfs_matrix(graph,start)
for row in mtx:
       print(" ".join(map(str, row)))
              

               
                
