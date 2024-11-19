bil = -1

while (bil > 100 or bil < 0): 
    bil = int(input("Masukan nilai 0-100:"))
    
    if (bil >= 80):
        print("A")
    elif (bil < 80 and bil >= 70):
        print("B")
    elif (bil < 70 and bil >= 60): 
        print("C")
    elif (bil < 60 and bil >= 50): 
        print("D")
    else:
        print("E")