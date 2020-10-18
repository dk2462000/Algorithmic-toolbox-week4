def findcandidate(list):
    count=1
    max_index=0
    for i in range(len(list)):
        if list[max_index]==list[i]:
            count+=1
        else:
            count-=1
        if count==0:
            max_index=i
            count=1
    return list[max_index]

def majority(list,can):
    count=0
    for i in list:
        if i==can:
            count+=1
    if count>(len(list)/2):
        print(1)
    else:
        print(0)
n=int(input())
list=[int(i) for i in input().split()]
majority(list,findcandidate(list))