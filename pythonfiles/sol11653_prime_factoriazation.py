#doing 소인수 분해
n = int(input())
def prime_factorization(n):
    i = 2
    primes = []
    if n == 1:
        return primes
    else:
        while n > 1:
            if n % i == 0:
                primes.append(i)
                n = n // i
            else:
                i += 1
    return primes
primes = prime_factorization(n)
if len(primes)== 0:
    print()
else:
    for i in range(len(primes)):
        print(primes[i])


