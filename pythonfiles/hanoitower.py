def sol11729():
    n = int(input()) 
    arr = []

    def hanoitower(n,start,end,side,arr): 
        if n == 1:
            arr.append([start, end])
            #print(start,end)
            return 
        hanoitower(n -1, start,side,end,arr)
        #print(start,end)
        arr.append([start,end])
        hanoitower(n -1, side, end,start,arr)
        return arr
    
    hanoitower(n,1,3,2,arr)  
    length = len(arr)
    print(length)
    
    for move in arr:
        print(move[0],move[1])

if __name__ == "__main__":
    sol11729()
