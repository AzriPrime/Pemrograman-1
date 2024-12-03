angka1, angka2 = map(int, input("Masukkan 2 angka: ").split())


a = angka1
b = angka2


if angka1 > angka2:
    for i in range(b, angka1 + 1):
        print(f"{a} {b}", end="")
        if angka1 > b:
             print(" - ", end="")
        b += 1  
        a -= 1 
    print()  


elif angka2 > angka1:
    for i in range(b, angka1 - 1, -1):
        print(f"{a} {b}", end="")
        if angka2 > a:  
            print(" - ", end="")
        b -= 1 
        a += 1 
    print()  

else:
    print(f"{a} {b}")

