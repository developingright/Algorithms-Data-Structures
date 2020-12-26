def bubblesort(l):
    leng = len(l)

    for i in range(leng):
        for j in range(leng-i-1):
            if l[j]>l[j+1]:
                l[j],l[j+1] = l[j+1],l[j]
            
    print("sorted list is: ",l)


l = list(map(int,input().split()))

bubblesort(l)
