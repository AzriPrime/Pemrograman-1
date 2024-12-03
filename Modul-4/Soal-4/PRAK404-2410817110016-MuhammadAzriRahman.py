pilihan = 0

while pilihan != 5:
        print("Pilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")

        pilihan = int(input("Masukan pilihan: "))

        if pilihan > 5 or pilihan < 1:
            print("Input anda salah, silahkan coba lagi\n")
            continue
        elif pilihan == 5:
            print("Terimakasih, telah menggunakan kalkulator Azri")
            break

        pertama = float(input("Masukan nilai pertama: "))
        kedua = float(input("Masukan nilai kedua: "))

        if pilihan == 1:
            print(f"Hasil penjumlahan antara {pertama:.2f} dengan {kedua:.2f} adalah {pertama + kedua:.2f}")
        elif pilihan == 2:
            print(f"Hasil pengurangan antara {pertama:.2f} dengan {kedua:.2f} adalah {pertama - kedua:.2f}")
        elif pilihan == 3:
            print(f"Hasil perkalian antara {pertama:.2f} dengan {kedua:.2f} adalah {pertama * kedua:.2f}")
        elif pilihan == 4:
                print(f"Hasil pembagian antara {pertama:.2f} dengan {kedua:.2f} adalah {pertama / kedua:.2f}")
        print(" ")
