c = 1
import sys
input = sys.stdin.readline
def sol_bfs1():
    from collections import deque
    N,M,R = map(int,input().split())
    start = R
    graph = [[] for _ in range(N + 1)]

    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)

    for i in range(1, N + 1):
        graph[i].sort()
    visited = [0] * (N + 1)
    
    def bfs(graph,start,visited):
        global c
        que = deque([start])
        visited[start] = c
        
        while que:
            node = que.popleft()
            for i in graph[node]:
                if visited[i] == 0:
                    c += 1
                    que.append(i)
                    visited[i] = c
    bfs(graph,start,visited)
    for k in range(1,N + 1):
        print(visited[k])




if __name__ == "__main__":
    sol_bfs1()
