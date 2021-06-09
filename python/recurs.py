
def division_recurs(n):
    times = 0
    if n == 1:
        return 0
    else:
        times += division_recurs(n//2)+division_recurs(n-n//2) + 1
    return times


print(division_recurs(98))
