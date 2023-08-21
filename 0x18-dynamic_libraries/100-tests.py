import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
c = random.randint(-111, 111)
d = random.randint(-111, 111)
print("{} + {} = {}".format(c, d, cops.add(c, d)))
print("{} - {} = {}".format(c, d, cops.sub(c, d)))
print("{} x {} = {}".format(c, d, cops.mul(c, d)))
print("{} / {} = {}".format(c, d, cops.div(c, d)))
print("{} % {} = {}".format(c, d, cops.mod(c, d)))
