c = 1
def sol2606():
    N = int(input())
    M = int(input())
    start = 1
    graph = [[] for _ in range(N + 1)]
    visited = [0] * (N + 1)
    for _ in range(M):
        a, b = map(int,input().split())
        graph[a].append(b)
        graph[b].append(a)

    def dfs_virus(graph,visited,start):
        global c
        visited[start] = c
        
        for node in graph[start]:
            if visited[node] == 0:
                c += 1
                dfs_virus(graph,visited,node)
    
    dfs_virus(graph,visited,start)
    print(max(visited) - 1)


if __name__ == "__main__":
    sol2606()
