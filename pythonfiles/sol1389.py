from collections import deque
n,m = map(int,input().split())

#그래프 초기화
graph  = [[]  for _ in range(n+1)]

for i in range(m):
    u,v = map(int,input().split())
    graph[u].append(v)
    graph[v].append(u)

def bfs(start):
    #방문 여부를 저장하는 리스트
    visited = [False]*(n+1)
    #큐를 이용해서 bfs를 구현한다.
    queue = deque([(start,0)])
    visited[start] = True
    count = 0
    
    while queue:
        x,level = queue.popleft()

        for i in graph[x]:
            if not visited[i]:
                queue.append((i,level+1))
                visited[i] = True
                count += level+1
            
    return count
# for문을 이용해서 각 노드별로, count를 구한 후
# 이를 리스트나, 딕셔너리에 저장해서
# 가장 작은 값을 가진 노드를 출력하면 된다. 
# 뭐여 내가 할 말을 다 알아?
# 이걸 어떻게 구현하지?
# 1. 각 노드별로 dfs를 돌려서 count를 구한다.
# 2. count를 저장할 리스트를 만든다.
# 3. count를 저장한다.
# 4. 가장 작은 값을 가진 노드를 출력한다.
#끝 
min_count = 1000000000
min_node = 0
arr = []
for i in range(1, n+1):
    current_count = bfs(i)
    if current_count < min_count:
        min_count = current_count
        min_node = i
print(min_node)

    
