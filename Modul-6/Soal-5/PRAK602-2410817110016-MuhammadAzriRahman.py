print("Input")
n = int(input(""))

print("Matriks A")
MatriksA = []
for i in range(n):  
    baris = list(map(int, input().split())) 
    MatriksA.append(baris)

print("Matriks B")
MatriksB = []
for i in range(n):
    baris = list(map(int, input().split())) 
    MatriksB.append(baris)

MatriksHasil = [[0] * n for _ in range(n)]
for i in range(n):  
    for j in range(n): 
        for k in range(n):  
            MatriksHasil[i][j] += MatriksA[i][k] * MatriksB[k][j]

print("Output")
print("Matriks A*B")
for baris in MatriksHasil: 
    print(" ".join(map(str, baris))) 
