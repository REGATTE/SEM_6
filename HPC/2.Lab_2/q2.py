# Word Search
!wget --no-check-certificate "https://raw.githubusercontent.com/dwyl/english-words/master/words.txt"

f = open('words.txt', 'r+')
words =f.read().split('\n')
f.close()

def palindrome(s):
  s=s.lower()
  d=""
  d = s[::-1]
  if d==s:
    return True
  else:
    return False
    
#linear
%%time
res=[]

for i in words:
  if palindrome(i)==True:
    res.append(i)
print(res)


# multiprocessing
import multiprocessing
def pal(part):
  c=0
  if part==1:
    for i in range(len(words)//2):
      if palindrome(words[i]):
        c+=1
  if part==2:
    for i in range(len(words)//2,len(words)):
      if palindrome(words[i]):
        c+=1
  return c
  
%%time
pool = multiprocessing.Pool(processes=2)
result = pool.map(pal, [1,2])
print(result[0]+result[1])

#diffence in wall times:
print(159/191)
