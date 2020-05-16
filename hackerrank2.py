#https://www.hackerrank.com/challenges/handshake/problem
import os
import sys


def fact(n):
    f = 1
    for i in range(1,n+1):
        f*=i
    return f    
def handshake(n):
   
    return (n*(n-1)//2)
    


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = handshake(n)

        fptr.write(str(result) + '\n')

    fptr.close()
