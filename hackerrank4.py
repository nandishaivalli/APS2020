#https://www.hackerrank.com/challenges/summing-the-n-series/problem

#!/bin/python3

import os
import sys

def summingSeries(n):
    
    #x = [i**2 - (i-1)**2 for i in range(1,n+1)]
    #return (sum(x))
    s = n**2 
    
    
    return int(s%(10**9 +7))    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = summingSeries(n)

        fptr.write(str(result) + '\n')

    fptr.close()
