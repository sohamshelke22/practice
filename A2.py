



def average(marklist):
  sum=0
  for mark in marklist:
        if(mark!=None):
            sum+=mark
            avg=sum/n
  return avg

def max(marklist):
    max_value=marklist[0]
    for mark in marklist:
        if(mark!=None):
            if(mark > max_value):
                max_value=mark
    return max_value

def min(marklist):
    min_value=marklist[0]
    for mark in marklist:
        if(mark!=None):
            if(mark < min_value):
                min_value=mark
    return min_value

def absent(marklist):
    count=0
    for mark in marklist:
        if(mark==None):
            count+=1
    return count

def frequency(marklist):
  freq={}
  for mark in marklist:
    if mark!=None:
      if mark in freq:
        freq[mark]+=1
      else:
        freq[mark]=1

  print(freq)
  high_freq=0
  high_freq_mark=0 
  for mark in freq:
    if(freq[mark]>high_freq):
      high_freq=freq[mark]
      high_freq_mark=mark
  return print("The highest fruency is of: ",high_freq_mark,"which is ",high_freq)
  

# marklist=[]
# n=int(input("Enter number of students."))
# print("Enter values:")
# for i in range(0,n):
#    ele=int(input())
#    marklist.append(ele)
# print("marklist: ",marklist) 

marklist=[20,57,20,90,57,28,90,20,None,56,None]
n=len(marklist)
flag=1

while(flag==1):
   print("\n-----------MENU----------")
   print("\n1.Average score of class.")
   print("\n2.Max marks.")
   print("\n3.Min marks.")
   print("\n4.Absent students.")
   print("\n5.frequency of each mark.")
   ch=int(input("Enter choice."))
   if(ch==1):
      print(average(marklist))
      flag=0
      break
   elif(ch==2):
      print(max(marklist))
      flag=0
      break
   elif(ch==3):
      print(min(marklist))
      flag=0
      break
   elif(ch==4):
      print(absent(marklist))
      flag=0
      break
   elif(ch==5):
      print(frequency(marklist))
      flag=0
      break



