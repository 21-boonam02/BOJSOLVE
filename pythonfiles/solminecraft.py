import sys
input = sys.stdin.readline
def solminecraft():
    N,M,B = map(int,input().split())

    area = [list(map(int,input().split())) for _ in range(N)]
    #print(*area, sep = '\n')
    min_1 = sys.maxsize
    height = 0
    #print("%d %d" %(min_1, max_))
    for x_eq in range(257):
        minus_block = 0
        plus_block = 0
        for i in range(N):
            for j in range(M):
                if area[i][j] - x_eq < 0 :
                    minus_block += x_eq - area[i][j]
                else:
                    plus_block +=  area[i][j] - x_eq
        if minus_block > plus_block + B:
            continue
        small_t = 2 * plus_block + minus_block

        if min_1 >= small_t and small_t >=0:
            min_1= small_t
            height = x_eq
    print(min_1, height)

if __name__ == "__main__":
    solminecraft()
  # 이 문제는 파이썬으로 해결할 경우 시간초과가 뜨고, pypy로 해결하면 맞았습니다. 뜬다.
