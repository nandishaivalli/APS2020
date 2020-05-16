#https://www.hackerrank.com/challenges/even-odd-query/problem

import os
import sys,math

def solve(arr, queries):
    #print(arr,queries)
    
    result= []
    for i,j in queries:
        if(i<len(arr) and arr[i]==0 and i!=j):
            result.append('Odd')
        else:
            if(arr[i-1]%2==0):
                result.append('Even')
            else:
                result.append('Odd')
    return result     
    #return "even" if find(arr,queries[0],queries[1])%2==0 else "odd"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input())

    arr = list(map(int, input().rstrip().split()))

    q = int(input())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    result = solve(arr, queries)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
