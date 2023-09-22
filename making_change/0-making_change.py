#!/usr/bin/python3
"""
"Make Change" Module
"""


def makeChange(coins, total):
    """
    Given a pile of coins of different values,
    determine the fewest number of coins needed to meet a given amount total
    Return:
        If total is 0 or less, return 0
        If total cannot be met by any number of coins you have, return -1
        else, fewest number of coins needed to meet total
    """
    if total <= 0:
        return 0
    if not coins or coins is None:
        return -1
    coins.sort(reverse=True)
    dp = 0
    for coin in coins:
        temp_change = int(total / coin)
        total -= (temp_change * coin)
        dp += temp_change
        if total == 0:
            return dp
    if total != 0:
        return -1
