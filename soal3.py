maks = int(input("Masukkan maks jumlah kolom/baris : "));
limit = maks;
for p in range (0,maks):
    for n in range (0, limit+1):
        print(" ",end="")

    for n in range (0,p + 1):
        print(str(n + 1) + " ",end="")
    limit-=1
    print("")
