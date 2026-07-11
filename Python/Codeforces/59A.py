wordstr=input()
word=[]
for i in range (len(wordstr)):
    word.append(wordstr[i])
cap=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
summer=""
wnuminator=0
sma=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for i in range(len(word)):
    for x in range(26):
        if word[i]==cap[x]:
            wnuminator=wnuminator+1
for i in range(len(word)):
    for x in range(26):
        if (wnuminator/(len(word)))<=(0.5):
            if word[i]==cap[x]:
                word[i]=sma[x]
        else:
            if word[i]==sma[x]:
                word[i]=cap[x]
for i in range(len(word)):
    summer=summer+word[i]
print(summer)