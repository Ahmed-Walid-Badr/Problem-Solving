                                            #بسم الله
n=int(input())
result=[]


for i in range(n):
    count = 0
    word= input()
    if len(word)>10:
        for j in range(1,len(word)-1):
            count+=1
        result.append(word[0]+str(count)+word[-1])
    else:
        result.append(word)


print(*result,sep='\n')
