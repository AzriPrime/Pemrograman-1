r, t = map(int, input("Masukan Nilai Jari-jari dan Tinggi Bejana:").split())
PHI = 3.14

volume = PHI*r*r*t
luas = PHI*r*(r+t)
keliling = 2*PHI*r

print(f"Volume: {volume:.2f}\nLuas: {luas:.2f}\nKeliling: {keliling:.2f}")

