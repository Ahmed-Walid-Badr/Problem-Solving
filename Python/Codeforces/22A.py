# I will not use the .split() method to get spaced number chars then cast to int
# Instead I will try to learn something more challenging
# I confess AI mainly helped here
n = int(input())
row = input()
sign=1
num=0
Numbers=[]
reading_num = False
mn = 101
for i in range(len(row)):
    char=row[i]
    if row[i] == '-':
        sign=-1
    if '0'<=char<='9': #Maybe better say 'elif' to bypass this step if not fulfilled
        num = num*10+int(char)
        reading_num = True
    else:
        if reading_num:
            Numbers.append(num * sign)
            num=0
            reading_num = False
            sign=1
    if i == (len(row)-1):
        Numbers.append(num*sign) #Maybe better make no if and put this line outside the loop


for i in range(len(Numbers)):
    if Numbers[i] < mn:
        mn=Numbers[i]

second = 101
for i in range (len(Numbers)):
    if Numbers[i] > mn:
        if Numbers[i]<second:
            second = Numbers[i]

if second ==101:
    print('NO')
else:
    print(second)