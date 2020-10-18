def find(list,element,r):
    l=0
    while l<=r:
        m=(l+r)//2
        if element>list[m]:
            l=m+1
        elif element<list[m]:
            r=m-1
        else :
            return m    
    return -1
    
    

m,*main=list(map(int,input().split()))
n,*search=list(map(int,input().split()))

index=[]
for i in search:
    
    index.append(find(main,i,m-1))
  
print(' '.join(str(i) for i in index))