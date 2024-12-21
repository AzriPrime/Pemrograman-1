baris, kolom = map(int, input().split())

print("Input")
elemen = list(map(int, input().split()))

print("Output")
for i in range(baris):
    for j in range(kolom):
        print(elemen[i * kolom + j], end=" ")
    print()
