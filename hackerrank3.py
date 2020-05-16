#!/bin/python3

import sys

def lowestTriangle(base, area):
    # Complete this function
    height = 2*area//base 
    if 2*area%base==0:
        return height
    else :
        return height+1    

base, area = input().strip().split(' ')
base, area = [int(base), int(area)]
height = lowestTriangle(base, area)
print(height)

