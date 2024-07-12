#!/usr/bin/python3
""" UTF-8 Validation """


def validUTF8(data):
    """ method that determines if a given data
    set represents a valid UTF-8 encoding """

    numberbytes = 0
    b1 = 1 << 7
    b2 = 1 << 6

    for d in data:
        b = 1 << 7
        if numberbytes == 0:
            while b & d:
                numberbytes += 1
                b = b >> 1
            if numberbytes == 0:
                continue
            if numberbytes == 1 or numberbytes > 4:
                return False
        else:
            if not (d & b1 and not (d & b2)):
                return False
        numberbytes -= 1
    return numberbytes == 0
