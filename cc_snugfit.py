test_case = input()

data = []
for _ in range(int(test_case)):
    n = int(input())
    A = list(map(int,input().split(" ")))
    B = list(map(int,input().split(" ")))
    
    """
    for i in range(1,n):

        key = A[i]
        j=i-1
        while j >=0 and key < A[j] :
            A[j+1] = A[j]
            j-=1

        A[j+1] = key    

    for i in range(1,n):

        key = B[i]
        j=i-1
        while j >=0 and key < B[j] :
            B[j+1] = B[j]
            j-=1

        B[j+1] = key 

    """
    A.sort(reverse=True)
    B.sort(reverse=True)
    k =0
    for i in range(0,n):
        k-=-min(A[i],B[i])
    data.append(k) 

for i in data:
    print(i)    