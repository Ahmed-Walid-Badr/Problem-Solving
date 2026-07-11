#بسم الله
n= int(input())
count=0


for i in range (11):
    cards = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
    if n - cards[i] == 10:
        if cards[i] != 10:
            for j in range (4):
                count+=1
        else:
            for j in range (15):
                count+=1


print(count)
