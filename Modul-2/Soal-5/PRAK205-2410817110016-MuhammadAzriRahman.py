
a, b = map(int, input("Masukan Nilai A dan B (secara berurutan): ").split())

alas = int((b*b-a*a) ** 0.5)
tinggi = int(a)
keliling = int(a+b+alas)
luas = int((alas*tinggi) / 2)

print(f"Alas = {alas} cm\nTinggi = {tinggi} cm\nKeliling = {keliling} cm\nLuas = {luas} cm^2")