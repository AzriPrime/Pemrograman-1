PHI = 3.14

total_input = []
print("Masukan Nilai jari- jari dan tinggi bejana: ")
while len(total_input) < 2:
     nilai = input("")
     total_input.extend(nilai.split())

r, t = total_input
r, t = map(int, (r, t))

volume = PHI*r*r*t
luas = PHI*r*(r+t)
keliling = 2*PHI*r

print(f"Volume: {volume:.2f}\nLuas: {luas:.2f}\nKeliling: {keliling:.2f}")

