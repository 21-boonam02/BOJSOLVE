#use 에라토스테네스의 체
m = int(input())
n = int(input())

def is_prime(n):
    # 모든 수가 소수라고 가정정
    prime = [False,False] + [True] * (n - 1)

    for i in range(2, n+1):
        if prime[i]:
            for j in range(i*i,n+1,i):
                prime[j] = False
    return prime
contain = []
prime = is_prime(n)
for k in range(m,n+1):
    if prime[k]== True:
        contain.append(k)
if len(contain) == 0:
    print(-1)
else:
    print(sum(contain))
    print(min(contain))