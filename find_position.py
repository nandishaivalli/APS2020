"""
given a 2D size n X n matrix of  sorted column and row
find the position of a number if present in the matrix
with time complexity linear
"""
n = int(input("enter size of matrix"))
a = [[0]*n for i in range(n)]
print("input numbers")
for i in range(n):
    for j in range(n):
        a[i][j] = int(input())

x = int(input("number to find"))

if x < a[0][0] or x >a[-1][-1] :
    print("not found")

i = 0
j = n-1
while(i<n and j >=0) :
    if x < a[i][j] :
        j-=1
    elif x > a[i][j]:
        i-=-1
    else :
        print(i,j,end=" ")
        break