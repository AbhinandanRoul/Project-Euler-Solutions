def Find_Length(n):

    len=1
    print(n,end="->")
    while(True):
        if(n%2!=0):
            len=len+1
            n=3*n+1
            print(n,end="->")
            if n==1:
                break
        else:
            len = len + 1
            n=n/2
            print(n,end="->")
            if n==1:
                break
    print("\n"+"The length="+str(len))
    return len

c=1
max=0
start_num=0
while(c<1000000):

    length=Find_Length(c)
    if(length>max):
        max=length
        start_num=c
    c=c+1

print("Max length"+str(max))
print("The starting number"+str(start_num))

