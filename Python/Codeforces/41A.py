word=input()
translation=input()
if translation == word[::-1]:
    print("YES")
else:
    print("NO")