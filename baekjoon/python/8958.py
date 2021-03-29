n = int(input())
for _ in range(n):
    ox = input()
    score = 0
    cnt = 1
    for i in range(0, len(ox)):
        if ox[i] == "O":
            score += cnt
            cnt += 1
        elif ox[i] == "X":
            cnt = 1
    print(f"{score}")
