n=int(input())
nums=[]
count=0

for i in range(n):
    nums.append(input().split())
for i in range(n):
    for j in range(n):
        row = 0
        col = 0
        for k in range(n):
            row += int(nums[j][k])
            col += int(nums[k][i])
        if col > row:
            count += 1



print(count)