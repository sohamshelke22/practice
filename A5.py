string=input("Enter a string:")
substring=input("Enter a substring:")

# def longestword(string):
#   words=[]
#   temp=""
#   delimiter=" "
#   for ele in string:
#     if ele==delimiter:
#       words.append(temp)
#       temp=""
#     else:
#       temp+=ele
#   words+=[temp]

#   longest_word=""
#   l=0
#   for word in words:
#     if len(word)>l:
#       longest_word=word
#       l=len(word)

#   return longest_word
  
# def frequency_of_character(string):
#   char_freq={} 
#   for char in string:
#     if char in char_freq:
#       char_freq[char]+=1
#     else:
#       char_freq[char]=1
#   for ele in char_freq:
#     print(ele,char_freq[ele])

# def palindrome(string):
#   rev_str=""
#   for char in string:
#     rev_str=char+rev_str
#   print(rev_str)
#   if(string==rev_str):
#     print(string," is a palindrome")
#   else:
#     print(string," is not palindrome")
    
    
# def index_of_substring(string,substring):
#    index=-1
#    for i in range(len(string)-len(substring)+1):
#      match=True
#      for j in range(len(substring)):
#        if string[i+j]!=substring[j]:
#          match=False
#          break
#      if match:
#        index=i
#        break
     
#    if index!=-1:
#      print("Index of ", substring," is ",index)
#    else:
#      print("Substring not present in string")
     
# def occurence_of_word(string):
#   freq={}
#   words=[]
#   temp=""
#   delimitter=" "
#   for ele in string:
#         if ele==delimitter:
#             words.append(temp)
#             temp=""
#         else:
#             temp+=ele
#   words+=[temp]
#   for word in words:
#     if word in freq:
#       freq[word]+=1
#     else:
#       freq[word]=1
      
#   for ele in freq:
#     print(ele,freq[ele])
      




















def longestword(string):
  words=[]
  temp=""
  delimiter=" "
  for ele in string:
    if ele==delimiter:
      words.append(temp)
      temp=""
    else:
      temp+=ele
  words+=[temp]
  longest_word=""
  l=0
  for word in words:
    if len(word)>l:
      longest_word=word
      l=len(word)

  return longest_word


def frequency_of_character(string):
  char_freq={}
  for ele in string:
    if ele in char_freq:
      char_freq[ele]+=1
    else:
      char_freq[ele]=1
  print(char_freq)


def palindrome(string):
  rev_str=""
  for ele in string:
    rev_str=ele+rev_str
  print(rev_str)
  if(string==rev_str):
    print("It is palindrome")
  else:
    print("It is not a palindrome.")


def index_of_subtstring(string,substring):
  index=-1
  for i in range(len(string)-len(substring)+1):
    match=True
    for j in range(len(substring)):
      if string[i+j]!=substring[j]:
        match=False
        break
    if match:
      index=i
      break
  if(index!=-1):
    print(substring," is present at index ",index)
  else:
    print("Substring not found.")
      

def occurence_of_word(string):
  words=[] 
  delimiter=" "
  temp=""
  for ele in string:
    if ele==delimiter:
      words.append(temp)
      temp=""
    else:
      temp+=ele
  words+=[temp]

  freq={}
  for word in words:
    if word in freq:
      freq[word]+=1
    else:
      freq[word]=1
  print(freq)


w=longestword(string)
print("longest word is :",w)
frequency_of_character(string)
palindrome(string)
index_of_subtstring(string,substring)
occurence_of_word(string)













