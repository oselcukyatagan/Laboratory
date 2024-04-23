import cmath
import math


def parallel_rlc(resistance, inductance, capacitance):

    damped = None
    res_freq_square = 1 / (inductance * capacitance)
    res_freq = math.sqrt(res_freq_square)

    neper_freq = 1 / (2 * resistance * capacitance)
    neper_freq_square = pow(neper_freq, 2)

    s_1 = -neper_freq + cmath.sqrt((pow(neper_freq, 2) - res_freq_square))
    s_2 = -neper_freq - cmath.sqrt((pow(neper_freq, 2) - res_freq_square))

    if res_freq_square < neper_freq_square:
        damped = "over-damped"
    elif neper_freq_square < res_freq_square:
        damped = "under-damped"
    else:
        damped = "critically-damped"

    print(f"neper frequency (alpha): {neper_freq:.2f}")
    print(f"resonant frequency (w): {res_freq:.2f}")
    print(f"s1: {s_1:.2f}")
    print(f"s2: {s_2:.2f}")
    print("damped condition:", damped)


parallel_rlc(200, 50e-3, 0.2e-6)
