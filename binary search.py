n = int(input("Enter the length of the list: "))
l = []
for i in range(n):
    s = int(input("Enter the element of the string: "))
    l.append(s)
x = int(input("Enter the number to search: "))
li = 0
r = n-1
while li<r:
    mid = li + (r-li)//2
    if l[mid]==x:
        print("location of the number is at index: ",mid)
        break
    elif l[mid]<x:
        li = mid+1
    elif l[mid]>x:
        r = mid
    if li == r:
        print("Sorry! the number doesn't exist in the list")
        break
