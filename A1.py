def removeduplicate(l1):
  res=[]
  for i in l1:
     if i not in res:
       res.append(i)
  return res


def intersection(l1,l2):
    res=[]
    for student in l1:
      if student in l2:
        res.append(student)    
    return res
   
def union(l1,l2):
  res=l2.copy()
  for student in l1:
    if student not in l2:
      res.append(student)
  return res
 
def diff(l1,l2):
  res=[]
  for student in l1:
    if student not in l2:
      res.append(student)
  return res

cricket=[]
n=int(input("enter number of students in cricket list."))
print("Enter names: ")
for i in range(0,n):
   ele=input()
   cricket.append(ele)
cricket=removeduplicate(cricket)
print("cricket: ",cricket)


badminton=[]
n=int(input("enter number of students in badminton list."))
print("Enter names: ")
for i in range(0,n):
   ele=input()
   badminton.append(ele)
badminton=removeduplicate(badminton)
print("badminton: ",badminton)

football=[]
n=int(input("enter number of students in football list."))
print("Enter names: ")
for i in range(0,n):
   ele=input()
   football.append(ele)
football=removeduplicate(football)
print("football: ",football)


flag=1 
while flag==1:
  print("\n---------------------MENU----------------------")
  print("\n1.Students playing both cricket and badminton")
  print("\n2.Students playing either cricket or badminton")
  print("\n3.Students playing neither cricket nor badminton")
  print("\n4.Students playing cricket and football but not badminton")
  ch=int(input("Enter your choice"))

  if ch==1:
    print("Students playing both cricket and badminton are", intersection(cricket,badminton))
    ans=input("Do you want to continue?(y/n) ")

    if(ans=='y'):
      flag=1
    else:
      flag=0
      break

    flag=0
    break
  elif ch==2:
    print("Students playing either cricket or badminton are",diff(union(cricket,badminton),intersection(cricket,badminton)))
    ans=input("Do you want to continue?(y/n) ")

    if(ans=='y'):
      flag=1
    else:
      flag=0
      break
  elif ch==3:
    print("Students playing neither cricket nor badminton are:",diff(diff(football,cricket),badminton))
    ans=input("Do you want to continue?(y/n) ")

    if(ans=='y'):
      flag=1
    else:
      flag=0
      break
  elif ch==4:
    print("Students playing cricket and football but not badminton are:",diff(union(cricket,football),badminton))
    ans=input("Do you want to continue?(y/n) ")

    if(ans=='y'):
      flag=1
    else:
      flag=0
      break
  



