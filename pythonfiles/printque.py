from collections import deque
T = int(input())
ans = []
for _ in range(T):
    N, M = map(int,input().split())
    a = list(map(int,input().split()))
    a = [(idx, imp) for idx, imp in enumerate(a)] #(인덱스, 중여도)
    #a = a.deque() 
    want = a[M]
    count = 0
    # a.append(a.pop(0))
    # print(a)
    while a:
        if a[0][1] >= max(a, key = lambda x :x[1])[1]:
            if want == a[0]:
                count += 1
                print(count)
                break
            a.pop(0)
            count += 1
        else:
            a.append(a.pop(0))


        






