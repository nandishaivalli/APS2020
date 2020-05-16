import numpy,random
f1 = open("input2.txt","a")


f1.writelines("\n")
low = random.randint(-50000,0)
up = random.randint(0,50000)
rang  = random.randint(1, 9)
l = numpy.array(range(low,up,1))
l2 = l**2
l2.sort()
l = list(l)
l2 = list(l2)
#print(l,"\n",l2)

f1.writelines(str(len(l)))
f1.writelines("\n")
f1.writelines(str(l))
f1.writelines("\n")
f1.writelines("O/P : ")
f1.writelines(str(l2))