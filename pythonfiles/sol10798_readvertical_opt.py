words = []
for _ in range(5):
    words.append(input())

for n in range(15):
    for i in range(5):
        if n < len(words[i]):
            print(words[i][n], end='')