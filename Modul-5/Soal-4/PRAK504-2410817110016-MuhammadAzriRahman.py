def reverse(bil):
    rev = 0
    while (bil > 0):
        sisa = bil % 10
        rev = rev * 10 + sisa
        bil //= 10
    return rev

if __name__ == "__main__":
    A, B = map(int, input("").split())

    A = reverse(A)
    B = reverse(B)
    C = A+B

    print(reverse(C))
