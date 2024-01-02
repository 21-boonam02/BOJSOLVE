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


#어차피 다른 bfs2 문제는 역순으로 정렬하면 되는 것이여서 딱히 문제 없음
#그 앞의 dfs2 문제도 마찬가지 역순으로 정렬만 하면 되는 문제여서 그냥 안 올림
if __name__ == "__main__":
    sol_bfs1()
