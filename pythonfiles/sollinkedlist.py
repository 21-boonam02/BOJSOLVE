def sollinkedlist():
    import sys
    # 항상 sysrecursionlimit설정을 잘해야 한다.!
    input = sys.stdin.readline
    sys.setrecursionlimit(10**6)
    n,m = map(int,input().split())
    graph = [[] for _ in range(n + 1)]
    for _ in range(m):
        u,v = map(int,input().split())
        graph[v].append(u)
        graph[u].append(v)
    visited = []
    def dfs(graph,visited,start):
        visited.append(start)
        for node in graph[start]:
            if node not in visited:
                dfs(graph,visited,node)
  
    cnt = 0
    for i in range(1,n+1):
        if i not in visited:
            dfs(graph,visited,i)
            cnt += 1
    print(cnt)

if __name__ ==  '__main__':
    sollinkedlist()
