# your code goes here
# your code goes here
# Python3 Program to find the transpose of a matrix 

N = int(input("Enter the number of rows:")) 
M = int(input("Enter the number of columns:")) 

# This function stores 
# transpose of A[][] in B[][] 

def transpose(A, B): 
  
    for i in range(N): 
        for j in range(M): 
            B[i][j] = A[j][i] 

# driver code 
A = [] 
print("Enter the entries rowwise:") 
  
# For user input 
for i in range(N):          # A for loop for row entries 
    a =[] 
    for j in range(M):      # A for loop for column entries 
         a.append(int(input())) 
    A.append(a) 

B = [[0 for x in range(M)] for y in range(N)]  
  

print("The A matrix is") 
for i in range(N): 
	for j in range(M): 
		print(A[i][j], " ", end='') 
	print() 
print("The B matrix is") 
for i in range(N): 
	for j in range(M): 
		print(B[i][j], " ", end='') 
	print() 
	
transpose(A, B) 

print("Result matrix is") 
for i in range(N): 
    for j in range(M): 
        print(B[i][j], " ", end='') 
    print()     
	
