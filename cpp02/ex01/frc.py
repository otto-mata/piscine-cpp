frac = 8


def to_float(n: int):
    fract = n & ((1 << frac) - 1)
    intgr = n >> frac
    decimal = 0
    for i in range(frac):
        if (fract >> i) & 1:
            decimal += 2 ** -(i + 1)
    return intgr + fract
