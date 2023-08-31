#!/usr/bin/python3
"""
Rotating a matrix2D
"""


def rotate_2d_matrix(matrice):
    """
   2D matrix, rotate it 90 degrees clockwise.
    """
    for i in range(0, len(matrice[0])):
        for j in range(i, len(matrice[0])):
            tmp = matrice[i][j]
            matrice[i][j] = matrice[j][i]
            matrice[j][i] = tmp

    for j in range(len(matrice[0])):
        matrice[j].reverse()
