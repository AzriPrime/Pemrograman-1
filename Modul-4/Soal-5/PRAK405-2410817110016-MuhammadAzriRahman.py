baris, kelipatan = map(int, input("Masukkan jumlah baris dan kelipatan: ").split())

total = 0
    

for i in range(1, baris + 1):
    hasil_penjumlahan = 0
        
    for j in range(i, 0, -1):
        hasil_penjumlahan += j * kelipatan
        print(f"({j} * {kelipatan})", end="")
        if j > 1:
            print(" + ", end="")
        
    print(f" = {hasil_penjumlahan}")
        
    total += hasil_penjumlahan
    

print(total)
