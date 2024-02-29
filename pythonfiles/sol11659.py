def sol11659():
  # 누적합 방법을 사용해서 끝에서 처음 -1 것을 빼주게 되면 쉽게 구할 수 있다고 생각한다.
    import sys
    input = sys.stdin.readline
    n,m = map(int,input().split())
    arr = list(map(int,input().split()))
    total = 0
    new_arr = [0]
    for i in arr:
        total += i
        new_arr.append(total)
    for _ in range(m):
        start, end = map(int,input().split())
        print(new_arr[end] - new_arr[start-1])

    
if __name__ ==  '__main__':
    sol11659()
