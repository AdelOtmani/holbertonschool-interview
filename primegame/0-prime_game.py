#!/usr/bin/python3
""" Tasks 0. Prime Game - holbertonschool-interview """


def isWinner(x, nums):
    """ Prototype: def isWinner(x, nums)
        where x is the number of rounds and nums is an array of n
        Return: name of the player that won the most rounds
        If the winner cannot be determined, return None
        You can assume n and x will not be larger than 10000
        You cannot import any packages in this task """

    if not nums or x < 1:
        return None

    N = max(nums)
    round = [True for _ in range(max(N + 1, 2))]
    for i in range(2, int(N // 2) + 1):
        if not round[i]:
            continue
        for j in range(i * i, N + 1, i):
            round[j] = False
    round[0] = round[1] = False
    k = 0
    for i in range(len(round)):
        if round[i]:
            k += 1
        round[i] = k
    Maria = 0
    for number in nums:
        Maria += round[number] % 2 == 1
    if Maria * 2 == len(nums):
        return None
    if Maria * 2 > len(nums):
        return "Maria"
    return "Ben"
