n = int(input())

zetsu_putih = list(map(int, input().split()))

hasil = []
for i in range(n):
    hasil.append(zetsu_putih[i] * (i + 1))

print(" ".join(map(str, hasil)))
