def sol1697():
    from collections import deque
    import sys
    input = sys.stdin.readline
    N, K = map(int,input().split()) # N : start, K : end

    def bfs(start_node, end_node): #꼭 graph를 형성할 필요는 없다. 연결리스트로 할라 했는데,
        # for i in []: 해서 순차적으로 문제르르 푸는 경우도 있다
        TIME = [0] * 100001
        que = deque([start_node])
    
        while que:
            curr_node = que.popleft()

            dx = [curr_node -1, curr_node + 1, 2 * curr_node]
            # 자긱가 이렇게 이동하는 조건을 형성하면 되는 것.
            if curr_node == end_node:
                return TIME[curr_node]
                # break_
            for x in dx:
                if 0<= x <= 100000 and TIME[x] == 0:
                    TIME[x] = TIME[curr_node] + 1 #이렇게 시간을 계산하는 것!
                    que.append(x)
        return -1
    time = bfs(N,K)
    print(time)

if __name__ == "__main__":
    sol1697()
