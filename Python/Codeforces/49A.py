n = input().split()
Vowels = 'aieouyAIEOUY'
Vowel=False

if n[-1] == '?':
    n = n[:-1] #or replace -1 with len(n)-1
elif n[-1][-1] == '?':
    n[-1] = n[-1][:-1]
if n[-1] == 'simultaneouSLY':
    n = n[:-1]


for j in range(12):
    if n[-1][-1] == Vowels[j]:
        Vowel = True
        break
if Vowel:
    print('YES')

else:
    print('NO')