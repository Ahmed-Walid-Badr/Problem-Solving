#بسم الله
n=int(input())
nums=list(map(int,input().split()))
count=0
max=nums[0]
min=nums[0]

for i in range(1,n):

    if nums[i] < min:
        count += 1
        min=nums[i]
    elif nums[i] > max:
        count += 1
        max=nums[i]

print(count)