n=input()
num=0


for i in range(len(n)):
    if n[i] == '4' or n[i] == '7':
        num+=1


if num == 7 or num == 4:
    print("YES")
else:
    print("NO")