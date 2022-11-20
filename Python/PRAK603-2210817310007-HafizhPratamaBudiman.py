n1,n2=map(int, input().split())
if (n1!=n2) :
    print('Jumlah tidak sama')
else :
    line1=list(map(int, input().split()))
    line2=list(map(int, input().split()))
for x in range (n1) :
    print(line1[x]*line2[x], end=' ')