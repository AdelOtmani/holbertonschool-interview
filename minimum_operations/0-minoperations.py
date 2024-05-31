#!/usr/bin/python3
""" Project minOperations"""


def countProcess(number):
    """ Return list of process until n H """
    c = 1
    new_list = []
    value = number
    while value != 1:
        c += 1
        if value % c == 0:
            while (value % c == 0 and value != 1):
                value /= c
                new_list.append(c)

    return new_list


def minOperations(n):
    """ Return sum of process until n H """
    if n < 2 or type(n) is not int:
        return 0
    values = countProcess(n)
    return sum(values)
