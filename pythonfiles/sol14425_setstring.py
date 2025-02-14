import sys

input = sys.stdin.readline
n, m = map(int,input().split())
strings = set()
find_strings = []

for _ in range(n):
    strings.add(input())
for _ in range(m):
    find_strings.append(input())
strings= [ s.strip() for s in strings]
find_strings = [ s.replace("\n","") for s in find_strings]
#print(strings, find_strings)
count = 0
for string in find_strings:
    if string in strings:
        count += 1
print(count)