def sol1260():
    from collections import deque

    N, M, start = map(int,input().split())
    graph = [[] for _ in range(N + 1)]

    for _ in range(M):
        a, b = map(int,input().split())
        graph[a].append(b)
        graph[b].append(a)
    for i in range(1, N + 1):
        graph[i].sort()

    visited_dfs = []
    def dfs1(graph,visited,start):
        visited.append(start)
        for node in graph[start]:
            if node not in visited:
                dfs1(graph,visited,node)
    dfs1(graph,visited_dfs,start)
    print(*visited_dfs)

    visited_bfs = []
    def bfs1(graph,visited,start):
        visited.append(start)
        que = deque([start])
        
        while que:
            node = que.popleft()
            for i in graph[node]:
                if i not in visited:
                    que.append(i)
                    visited.append(i)
    bfs1(graph,visited_bfs,start)
    print(*visited_bfs)
        
if __name__ == '__main__':
    sol1260()
