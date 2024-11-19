a, b, c = map(int, input("Masukan 3 angka yang ingin diurutkan:").split())

if a > b:
    a, b = b, a
if a > c:
    a, c = c, a
if b > c:
    b, c = c, b

print(f"{a} {b} {c}")