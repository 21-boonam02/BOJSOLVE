import sys

input = sys.stdin.readline
n = int(input())
sang = set(map(int,input().split()))
m = int(input())
find = list(map(int,input().split()))
#print (sang,find)
vs = []
for num in find:
    if num in sang:
        vs.append(1)
    else:
        vs.append(0)
print(' '.join(map(str,vs)))
    


