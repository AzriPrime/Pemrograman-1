def MaxBilangan(bil1, bil2, bil3, bil4):
    max = bil1
    if bil2 > max:
        max = bil2
    if bil3 > max:
        max = bil3
    if bil4 > max:
        max = bil4
    return max

if __name__ == "__main__":
    a, b, c, d = map(int, input("").split())
    hasil = MaxBilangan(a, b, c, d)
    print(hasil)