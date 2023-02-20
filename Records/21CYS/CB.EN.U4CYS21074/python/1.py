p=int(input())
q=len(str(p))

while q!=0:
     t1=p%10
     p=p//10
     if t1%2==0:
         print("Yes - ",t1)
     else:
         print("No  - ",t1)
     q=q-1
    




p=int(input())
if p%6==0:
     print("Yes")
else:
     print("No")