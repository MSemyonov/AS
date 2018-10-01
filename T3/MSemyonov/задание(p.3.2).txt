import timeit
import random
n = int(input())
start_time = timeit.default_timer()
a = []
for i in range(n):
    b=random.randint(1,1000)
    a.append(b)
for i in range(n):
    for j in range(n):
        if a[j]>a[i] :
            t = a[j]
            a[j] = a[i]
            a[i] = t
elapsed = timeit.default_timer() - start_time
print(elapsed)