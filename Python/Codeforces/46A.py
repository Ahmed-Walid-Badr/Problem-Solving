n=int(input())
increment=1
children=[]
i=1

while len(children)!=n-1:
    i += increment
    increment += 1
    if i>n:
        i=i-n
    children.append(i)


print(*children)