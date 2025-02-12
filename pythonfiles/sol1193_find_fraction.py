#find fraction with zigzag pattern

n = int(input())
i = 1

while True:
    if n <= (i * (i + 1)) // 2:
        break
    i += 1
want_num = i + 1
n1 = n - (i * (i - 1)) // 2
print(want_num, n1)
if want_num % 2 != 0:
    print(f"{n1}/{want_num - n1}")
else:
    print(f"{want_num - n1}/{n1}")



