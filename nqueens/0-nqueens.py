#!/usr/bin/python3
import sys

if len(sys.argv) > 2 or len(sys.argv) < 2:
    print("Usage: nqueens n")
    exit(1)

n = sys.argv[1]

try:
    n = int(n)

except:
    print("n must be a number")
    exit(1)

if int(sys.argv[1]) < 4:
    print("n must be at least 4")
    exit(1)


list = []

#chessboard
#nxn matrix with all elements 0
board = [[0]*n for _ in range(n)]

def is_attack(i, j):
    #checking if there is a queen in row or column
    for k in range(0,n):
        if board[i][k]==1 or board[k][j]==1:
            return True
    #checking diagonals
    for k in range(0,n):
        for l in range(0,n):
            if (k+l==i+j) or (k-l==i-j):
                if board[k][l]==1:
                    return True
    return False

def n_queen(n):
    #if n is 0, solution found
    if n==0:
        return True
    for i in range(0,n):
        for j in range(0,n):
            if (not(is_attack(i,j))) and (board[i][j]!=1):
                board[i][j] = 1
                #recursion
                #wether we can put the next queen with this arrangment or not
                if n_queen(n-1)==True:
                    list.append([i,j])
                    return True
                board[i][j] = 0
    return False

n_queen(n)
list.reverse()
print(list)
