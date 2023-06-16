#!/usr/bin/python3
max = a_m = b_m = -1
for a in range(999, 0, -1):
    max1 = 0
    for b in range(a, 0, -1):
        mult = str(a * b)
        list_mult = int(len(mult))
        left = list(mult[:list_mult // 2])
        l_r = list_mult // 2 if list_mult % 2 == 0 else (list_mult // 2) + 1
        right = list(mult[l_r:])
        t = 1
        for i in range(list_mult//2):
            if (left[i] != right[(list_mult // 2) - 1 - i]):
                t = 0
                break
        if (t):
            max1 = a * b
            if max < max1:
                max = max1
                a_m, b_m = a, b

            break
print(max, " = ", a_m, " * ", b_m)
