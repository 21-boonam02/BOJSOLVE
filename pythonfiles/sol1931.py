def sol1931():
    import sys
    input = sys.stdin.readline
    # 회의실 배정 문제_ 그리디 문제
    n = int(input())

    meeting_room = []
    for _ in range(n):
        a,b = map(int,input().split())
        meeting_room.append((a,b))
    meeting_room.sort(key = lambda x : (x[1],x[0]))
    # 끝나는 시간을 기준으로 먼저 정렬한 후에 그 다음에 회의의 
    #시작 시간을 기준으로 정렬을 한다는 점에서 차이점이 존재한다.
    # 그래서 내가 처음에 meeting_room.sort(key=lambda x: (x[1]))
    #한 것은 시작 시간은 고려되지 않아 끝나는 시간이 같은 경우에 원래 리스트
    #순서대로 유지를 한다. 그러니, 시작 시간이 늦은 경우에도, 앞에 올 수 잇다.
    #print(meeting_room)

    count  = 1
    end_time = meeting_room[0][1]
    for  i in range(1,n):
        if meeting_room[i][0] >= end_time:
            count += 1
            end_time = meeting_room[i][1]
    print(count)
   
if __name__ == "__main__":
    sol1931()

