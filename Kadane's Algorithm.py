def kadane(l):

    global_max = l[0]
    current_max = l[0]

    for i in range(1,len(l)):
        current_max = max(l[i],current_max+l[i])
        global_max = max(global_max,current_max)


    print(global_max)

l = list(map(int,input().split()))

kadane(l)
