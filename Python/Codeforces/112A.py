# بسم الله #
row1 = input()
row2 = input()
row1_index = None
row2_index = None
alphs = 'abcdefghijklmnopqrstuvwxyz'
alphc = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

for i in range(len(row1)):
    for j in range(len(alphs)):
        if row1[i] == alphs[j] or row1[i] == alphc[j]:
            row1_index = j
        if row2[i] == alphs[j] or row2[i] == alphc[j]:
            row2_index = j
    if row1_index != row2_index:
        break


if row1_index == row2_index:
    print(0)
elif row1_index > row2_index:
    print(1)
else:
    print(-1)

#OR USE ord() to get the ASCII value 