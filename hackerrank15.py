
#https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem
# Enter your code here. Read input from STDIN. Print output to STDOUT
'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''
def height(root):
    if root:
        return 1 + max(height(root.left), height(root.right))
    else:
        return -1
