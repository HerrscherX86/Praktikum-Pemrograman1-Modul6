real=input()
false=input()
a=0; b=0
if len(real) != len(false) :
    print('Panjang kalimat berbeda, pesan palsu')
else :
    for x in range(len(real)) :
        if real[x] == false[x] :
            print('*', end='')
            a+=1
        else :
            print('#', end='')
            b+=1
    print('\n* %d'%(a))
    print('# %d'%(b))
    if a >= b :
        print("Pesan Asli")
    elif a < b :
        print('Pesan Palsu')