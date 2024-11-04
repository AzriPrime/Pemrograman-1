a, b, i, j, x , y = map(int, input("Masukan Nilai a, b, i, j, x , y (secara berurutan): ").split())

hasil = (a-b)*(i/j)-(x+y)
print(f"Hasil dari a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y adalah {hasil:.3f}")