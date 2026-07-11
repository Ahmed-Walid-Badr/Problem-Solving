Borze = input()
num=""
i=0

while i < len(Borze):
    if Borze[i]==".":
        num+='0'
        i+=1
    elif Borze[i]=="-" and Borze[i+1]==".":
        num+='1'
        i+=2
    else:
        num+='2'
        i+=2
print(num)