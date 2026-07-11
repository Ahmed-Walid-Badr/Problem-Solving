#بسم الله
n,k=map(int,input().split())
contestants=input().split()
count=0

for i in range(n):
    if int(contestants[i])>=int(contestants[k-1]) and int(contestants[i])>0:
        count+=1
print(count)