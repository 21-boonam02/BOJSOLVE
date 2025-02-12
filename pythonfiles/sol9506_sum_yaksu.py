while True:
    a = int(input())
    if a == -1:
        break
    def find_all_yaksu(a):
        yaksu = [1]
        for i in range(2, a):
            if a % i == 0:
                yaksu.append(i)
        return yaksu
    arr = find_all_yaksu(a)
    if a == sum(arr):
        print(f"{a} = {arr[0]} + {' + '.join(map(str,arr[1:]))}")
    else:
        print(f"{a} is NOT perfect.")