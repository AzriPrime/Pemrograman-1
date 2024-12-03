kelipatan, simbol = input("Masukan Kelipatan dan simbol: ").split()
kelipatan = int(kelipatan)

i = 1
for i in range(1, 51):
    if ((i%kelipatan) == 0):
        print(simbol, end= " ")
    else:
        print(i, end= " ")