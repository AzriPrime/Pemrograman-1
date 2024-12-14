def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

if __name__ == "__main__":
    batas = 0
    maks = -100000
    minim = 100000
    bilangan = int(input(""))


    nilai = list(map(int, input("").split()))

    while batas < bilangan:
        maks = maksimal(maks, nilai[batas])
        minim = minimal(minim, nilai[batas])
        batas+=1
    

    print(maks, minim)