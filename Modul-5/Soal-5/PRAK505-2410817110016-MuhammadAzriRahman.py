def Biodata(tahunlahir, nama, asal):
    tahun_sekarang = 2020
    print("-----------------------------------\n");
    print(f"Perkenalkan Nama Saya: {nama}");
    print(f"Umur Saya : {tahun_sekarang-tahunlahir}");
    print(f"Saya Adalah Angkatan: {tahun_sekarang}");
    print(f"Asal Saya dari: {asal}");

if __name__ == "__main__":
    tahunLahir = int(input(""))
    Namaku = input("")
    Asal = input("")

    Biodata(tahunLahir, Namaku, Asal);
