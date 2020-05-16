import numpy,random
f = open("input2.txt","a")


f.writelines("\n")
low = random.randint(-12000,0)
up = random.randint(0, 20000)
rang  = random.randint(1, 9)
l = list(range(low,up ,rang))
f.writelines("\n")
f.writelines(str(len(l)))
f.writelines("\n")
f.writelines(str(l))
l2 = 