def solsetstart():
    import sys
    input = sys.stdin.readline
    s = set()
    #ans =[]
    n = int(input())
    for _ in range(n):
        command = list(map(str,input().split()))
        if  len(command) == 1:
            if command[0] == 'all':
                s = set([i for i in range(1,21)])
            elif command[0] == 'empty':
                s = set()
        else:  
            func = command[0]
            x = int(command[1])
            if func == 'add':
                s.add(x)
            elif func == 'remove':
                s.discard(x)
            elif func == 'toggle':
                if x in s:
                    s.discard(x)
                else:
                    s.add(x)
            elif func == 'check':
                if x in s:
                    # 이것을 배열에 넣은 것이 문제였구나
                    # 이게 메모리를 그렇게 많이 잡아 먹었구나.
                    #ans.append(1)
                    print(1)
                else:
                    #ans.append(0)
                    print(0)
            # print("1" if command[1] in s else "0")
 
    # for i in ans:
    #     print(i)
if __name__ ==  '__main__':
    solsetstart()

