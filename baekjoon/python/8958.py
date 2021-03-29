n = int(input())
for _ in range(n):
    scores = input().split(" ")
    allScore = 0
    cnt = 0
    for i in range(1 ,len(scores)):
        allScore += int(scores[i])
    mean = allScore / int(scores[0])
    for i in range(1, len(scores)):
        if int(scores[i]) > mean:
            cnt += 1
    meanstudent = cnt / int(scores[0]) * 100
    print("{:.3f}%".format(meanstudent))
