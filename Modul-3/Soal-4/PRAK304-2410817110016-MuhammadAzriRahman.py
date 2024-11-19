a = int(input("Masukan Angka antara 0-99: "))

if (a > 99):
    print("Anda Menginput Melebihi Limit Bilangan")
elif (a == 0):
    print("Nol")
elif (a > 0 and a < 10):
    print("Satuan")
elif (a == 10 or a > 19):
    print("Puluhan")
else:
    print("Belasan")

