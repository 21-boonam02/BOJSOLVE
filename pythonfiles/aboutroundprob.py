import sys
input = sys.stdin.readline
EPS= 1e-9 ##부동 소수점 팁
N = int(input())
if N == 0:
    print(0)
else:
    table = []
    for _ in range(N):
        table.append(int(input()))
    table.sort()
    total = 0
    cont = round(N * (0.15)+EPS)
    for i in range(cont,N - cont):
        total += table[i]
    avg = total / (N - 2*cont)
    #print("\n")
    print(round(avg + EPS))
