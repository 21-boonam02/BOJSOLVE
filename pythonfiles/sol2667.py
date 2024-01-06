from collections import deque

def sol2667():
    N = int(input())
    graph = []
    for _ in range(N):
        a = list(map(str, input().strip()))
        graph.append(a)

    def bfs(start_x, start_y, graph):
        size = 1  # 시작 노드도 포함하도록 1로 초기화
        dx = [-1, 1, 0, 0]
        dy = [0, 0, 1, -1]
        que = deque([(start_x, start_y)])
        visited = [[False] * N for _ in range(N)]  # 방문 여부를 나타내는 2차원 리스트

        visited[start_x][start_y] = True

        while que:
            x, y = que.popleft()
            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                    if graph[nx][ny] == '1':
                        graph[nx][ny] = '0'
                        visited[nx][ny] = True
                        size += 1
                        que.append((nx, ny))
        return size

    num_house = []
    for a in range(N):
        for b in range(N):
            if graph[a][b] == '1':
                result = bfs(a, b, graph)
                num_house.append(result)

    result = sorted(num_house)
    print(len(result))
    for l in result:
        print(l)

if __name__ == '__main__':
    sol2667()
   
