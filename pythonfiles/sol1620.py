def sol11620():
    import sys
    input = sys.stdin.readline
    n,m = map(int,input().split())
    my_dict = {}
    for i in range(1,n+1):
        a = input().rstrip()
        num = str(i)
        dict = {num:a}
        other_dict = {a:num} 
        my_dict.update(dict)
        my_dict.update(other_dict)
    for _ in range(m):
        b = input().rstrip()
        print(my_dict[b])
    #print(my_dict)

# 핵심은 rstrip()을 해주는 것이었네.
if __name__ ==  '__main__':
    sol11620()
