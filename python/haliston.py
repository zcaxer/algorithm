import time

n = 10000


def hailstone(n):
    length = 1
    while n > 1:
        n = 3 * n + 1 if (n % 2) else n / 2
        length += 1
    return length


start = time.perf_counter()
for i in range(1, n):
    print(hailstone(i), ',')
print("/n")
end = time.perf_counter()
print("coast:", end - start)
