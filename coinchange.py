#coin change problem


import sys 

def minCoins(coins, m, V): 

	#
	if (V == 0): 
		return 0
    

	res = sys.maxsize 
	
	
	for i in range(0, m): 
		if (coins[i] <= V): 
			sub_res = minCoins(coins, m, V-coins[i]) 

			
			if (sub_res != sys.maxsize and sub_res + 1 < res): 
				res = sub_res + 1

	return res 

coins = [10,9,8,7,6,5] 
m = len(coins) 
V = 11
if V < coins[-1]:
    print(0)
else:    
    print(minCoins(coins, m, V)) 

