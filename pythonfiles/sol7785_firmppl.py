import sys

input = sys.stdin.readline
n = int(input())
a = set()
for _ in range(n):
    name, stat = map(str, input().split())
    if name not in a:
        a.add(name)
    else:
        a.remove(name)
a = sorted(a, reverse=False)
for i in range(len(a)-1,-1,-1):
    print(a[i])



