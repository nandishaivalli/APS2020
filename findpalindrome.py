#given an string check if a palinf=drome is possible from the strings
def findpalindrome(s):
    count = [0 for i in range(27)]
    #create a array of count of each letter
    #in a palidrome charactors are in even number except 1
    for char in s:
        count[ord(char)-97]+=1
    #if there are two char with odd repitation palindrome not possible
    #print(count)
    oddcount = 0
    for c in count:
        if c%2!=0:
            oddcount+=1
    if oddcount >1:
        print("palindrome not possible")
    else:
        print("possible palindrome")

findpalindrome("nandd")    