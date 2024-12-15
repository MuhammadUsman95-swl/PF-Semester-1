def make_rug(m, n, proc=" "):
    rug = []
    for _ in range(m):
        row = proc * n
        rug.append(row)
    return rug

m = int(input("Enter the number of rows: "))
n = int(input("Enter the number of columns: "))
proc = input("Enter the character to use for the rug: ")

rug = make_rug(m, n, proc)

for row in rug:
    print(row)
