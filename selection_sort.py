A = [64,1,43,8,2]

for i in range(len(A)):
    min_idx=i
    for j in range(i+1, len(A)):
        if A[min_idx]>A[j]:
            min_idx=j
    A[i], A[min_idx] = A[min_idx],A[i]
print("Sorted array")
print(A)