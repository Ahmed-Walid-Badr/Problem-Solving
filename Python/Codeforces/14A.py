n,m=map(int,input().split())
grid=[]
up=None
down=None
left=None
right=None
f = 0

for i in range(n):
    row=input()
    if len(row)==m:
        grid.append(row)


while f < n:
    for j in range(m):
        if grid[-f - 1][-j-1] == '*':
            if up==None or up > -f-1:
                up = (-f - 1)
            if left == None or left > -j-1:
                left = (-j - 1)


        if grid[f][j] == '*':
            if down==None or down < f:
                down = f
            if right == None or right < j:
                right = j
    f += 1


grid = grid[up:down + 1]

for k in range(len(grid)):
    grid[k] = grid[k][left:right + 1]

for z in range(len(grid)):
    print(grid[z])