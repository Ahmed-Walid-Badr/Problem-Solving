n = int(input())
d = input().split()
result=0

ab = input().split()
k = int(ab[0])


while k < int(ab[1]):
   result += int(d[k-1])
   k +=1


print(result)