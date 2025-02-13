m = int(input())
n = int(input())
# find 소수 between two numbers
def is_prime(num1, num2):
    primes = []
    for num in range(num1, num2 + 1):
        cnt = 0
        if num == 1:
            continue
        else:  # 소수는 1보다 크다
            for i in range(2, (num)//2 + 1):
                if (num % i) == 0: 
                    cnt += 1
        if cnt == 0:
            primes.append(num)
    return primes

primes = is_prime(m,n)
if len(primes) == 0:
    print(-1)
else:
    print(sum(primes))  # 소수의 합 출력
    print(min(primes))


