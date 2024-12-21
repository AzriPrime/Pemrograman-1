print("Input")
kode = input("")
pesan = input("")

pesanEnkripsi = []

bintang = 0
pagar = 0

if len(kode) != len(pesan):
    print('Panjang kalimat berbeda, pesan palsu')
else:
    for i in range(len(pesan)):
        if pesan[i] == ' ' and kode[i] == ' ':
            pesanEnkripsi.append(' ')
        elif pesan[i] == kode[i]:
            pesanEnkripsi.append('*')
            bintang += 1
        else:
            pesanEnkripsi.append('#')
            pagar += 1
    
    print("Output")
    print(f"{''.join(pesanEnkripsi)}")
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    print("Pesan Asli") if bintang >= pagar else print("Pesan Palsu")