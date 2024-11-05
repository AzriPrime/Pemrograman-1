total_input = []
print("Masukan Nilai A dan B: ")
while len(total_input) < 2:
     nilai = input("")
     total_input.extend(nilai.split())

a, b = total_input
a, b = map(int, (a, b))

alas = int((b*b-a*a) ** 0.5)
tinggi = int(a)
keliling = int(a+b+alas)
luas = int((alas*tinggi) / 2)

print(f"Alas = {alas} cm\nTinggi = {tinggi} cm\nKeliling = {keliling} cm\nLuas = {luas} cm^2")