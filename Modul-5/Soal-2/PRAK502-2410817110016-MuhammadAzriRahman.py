def hitung(nilai1, nilai2):
    return nilai1 - nilai2

def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

if __name__ == "__main__":
    a, c, b, d = map(int, input("").split())

    hasil = mutlak(hitung(a, b)) + mutlak(hitung(c, d))
    print((hasil))
