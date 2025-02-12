store_list = [[-1]*15 for _ in range(5)]
for i in range(5):
    a = input()
    for j in range(len(a)):
        store_list[i][j] = a[j]

re_store =[]

for i in range(15):
    for j in range(5):
        if store_list[j][i] == -1:
            continue
        else:
            re_store.append(store_list[j][i])


print(re_store)
for i in range(len(re_store)):
    if re_store[i] == -1:
        continue
    else:
        print(re_store[i], end='')