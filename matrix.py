import random
import timeit
size = 128

m1 = []
m2 = []
m3 = []

for i in range(size):
    a = []
    for j in range(size):
        a.append(random.randint(-2147483648, 2147483647))
    m1.append(a)

for i in range(size):
    a = []
    for j in range(size):
        a.append(random.randint(-2147483648, 2147483647))
    m2.append(a)
start = timeit.default_timer()

for i in range(size):
    a = []
    for j in range(size):
        value = 0
        for k in range(size):
            value += m1[i][k] * m2[k][j]

        a.append(value)
    m3.append(a)
stop = timeit.default_timer()
print("Time : ", stop-start)
