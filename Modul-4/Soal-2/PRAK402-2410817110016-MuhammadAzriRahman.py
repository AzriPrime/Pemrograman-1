maksimal = int(input("Masukan nilai maksimal: "))


for i in range (1, maksimal+1):
    if (i%2 == 1):
        print(i, end=" ")

print(" ")

for j in range (maksimal, 0, -1):
    if (j%2 == 0):
        print(j, end=" ")