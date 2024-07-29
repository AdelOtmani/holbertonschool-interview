#!/usr/bin/python3
import sys


if len(sys.argv) != 2:
    print("Usage: nqueens N")
    exit(1)

N = sys.argv[1]

try:
    N = int(N)

except:
    print("N must be a number")
    exit(1)

if int(sys.argv[1]) < 4:
    print("N must be at least 4")
    exit(1)


def nqueens(N, i=0, a=[], b=[], c=[]):
    """ all possible positions for queen """
    if i < N:
        for j in range(N):
            if (j not in a) and (i + j not in b) and (i - j not in c):
                yield from nqueens(N, i + 1, a + [j], b + [i + j], c + [i - j])
    else:
        yield a


def result(n):
    """ print all solution """
    list = []
    i = 0
    for res in nqueens(N, 0):
        for r in res:
            list.append([i, r])
            i += 1
        print(list)
        list = []
        i = 0


result(N)
