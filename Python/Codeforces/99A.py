num=input()
n=num.split(".")
if n[0][-1]<"9":
    if n[1][0]<"5":
        print(n[0])
    else:
        print(int(n[0])+1)
else:
    print("GOTO Vasilisa.")