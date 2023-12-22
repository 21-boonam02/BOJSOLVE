import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6) # 재귀함수에서 runtime error 나오는 것을 방지
c = 1 # 전역변수 설정
def sol_dfs1():
    N,M,start = map(int,input().split())
    graph = [[] for _ in range(N +1)] # 그래프 인접리스트로 구현
    visited = [0]*(N + 1) #끝에 0을 출력해야 되기 때문에 0이라고 설정하고 후에 C에따라서 변화

    for _ in range(M):
        a, b= map(int,input().split())
        graph[a].append(b) #인접행렬이 아닌 인접리스트 방향이 없는 
        graph[b].append(a) #것을 만들어주기 때문에 양방향으로 설정해줌

    for i in range(N + 1):
        graph[i].sort()
  

    def dfs(graph,start,visited):
        global c
        visited[start] = c  
        for node in graph[start]:
            if visited[node] == 0:
                c += 1
                dfs(graph,node,visited)
      
    dfs(graph,start,visited)
    for i in range(1,N+1):
        print(visited[i])

  
if __name__ == '__main__':
    sol_dfs1()
