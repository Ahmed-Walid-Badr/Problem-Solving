                                             #بسم الله
vowels=['a','e','i','o','u']
Poetry=True

for i in range(3):
    count=0
    phrase=input()
    for k in range(len(phrase)):
        for j in range(len(vowels)):
            if phrase[k] == vowels[j]:
                count += 1

    if (count != 5 and (i==0 or i==2)) or (count != 7 and i==1):
        Poetry=False

if Poetry:
    print("YES")
else:
    print("NO")