#!/usr/bin/python3


import sys
import ctypes
"""a function printer"""

def print_factors():
    """function printer"""
    fun = ctypes.CDLL("./lib_factors_func_.so")
    fun.trial_division.argtypes = [ctypes.c_long]
    with open(sys.argv[1], 'r') as prime:
        line = prime.readline()
        while line != '':
            n = int(line)
            fun.trial_division(n)
            line = prime.readline()
    return ""
