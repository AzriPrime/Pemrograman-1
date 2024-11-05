total_input = []
print("Masukan Nilai a, b, i, j, x , y: ")
while len(total_input) < 6:
     nilai = input("")
     total_input.extend(nilai.split())

a, b, i, j, x , y = total_input
a, b, i, j, x, y = map(int, (a, b, i, j, x ,y))
hasil = (a-b)*(i/j)-(x+y)

print(f"Hasil dari {a} dikurang {b} dikali dengan {i} dibagi {j} dikurang dengan {x} ditambah {y} adalah {hasil:.3f}")