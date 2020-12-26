def mainf(l,k):
    leng = len(l)
    slicesum = sum(l[:k])

    maxval = slicesum

    for i in range(leng-k):
        slicesum = slicesum - l[i] + l[i+k]
        maxval = max(maxval,slicesum)

    print(maxval)


k = int(input())
l = list(map(int,input().split()))
mainf(l,k)
