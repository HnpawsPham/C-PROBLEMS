fi = open(".\\txt\\PHAN-DU.INP", "r")
k = int(fi.readline())
x = (10 ** len(str(k)) - 1) // 9

MOD = 10 ** 9 + 7

ok = True
while ok:
    for i in range(1, 10):
        num = x * i
        if(num % k == 0):
            print(num // k % MOD)
            ok = False
            break
    x = x * 10 + 1