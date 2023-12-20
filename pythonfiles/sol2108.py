import sys
input = sys.stdin.readline
N = int(input())
a = []

eps = 1e-9
for _ in range(N):
    a.append(int(input()))
a.sort()
mid = a[(len(a))//2]
area = max(a) - min(a)
# print("\n")
# print(sum(a))
if sum(a) > -0.5 and sum(a) < 0:
    avg = 0
else:
    avg = round(sum(a)/len(a) + eps)  

dic = dict()
for i in a:
    if i in dic:
        dic[i] +=1
    else:
        dic[i] = 1
M = max(dic.values())
ans = []
for i in dic:
    if M == dic[i]:
        ans.append(i)

print(avg)
print(mid)       
if len(ans) == 1:
    print(ans[0])
else:
    print(ans[1])
print(area)


