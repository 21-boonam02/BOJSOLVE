import sys

input = sys.stdin.readline
#doing 소인수 분해
n = int(input())
x = n
for i in range(2, n + 1):
    if i * i > x:
        break
    while x % i == 0:
        print(i, end = ' ')
        x //= i
if x != 1:
    print(x, end = ' ') 
    


