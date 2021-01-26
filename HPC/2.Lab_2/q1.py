# -*- coding: utf-8 -*-
"""
HPC LAB2 Q1.ipynb
ASHOK 
E18CSE029
"""

import numpy as np
import os
import time
import multiprocessing
import threading
import matplotlib.pyplot as plt

#q1
#array
arr = np.random.randint(0,1000,(6))
print(arr)
#power set
ps=[]
start = time.time()
x = len(arr)
for i in range(1 << x):
  ps.append([arr[j] for j in range(x) if (i & (1<< j))])
  
print(ps)

#prime number
def prime_no(n):
  flag = True
  for i in range(2,n//2):
        if(n%i==0):
            flag = False
            break
    
  if(flag):
    return n
  else:
    return 0

prime_ss = []
for i in range(len(ps)):
    if(prime_no(sum(ps[i])) == 0):
        continue
        
    else:
        prime_ss.append(ps[i])
        
end = time.time()

time_serial = end-start
print("Time: ", time_serial)
print(prime_ss)

#mulitthreading
multiprocessing.cpu_count()

prime_ss = []
def task(0, 1000, arr):
    global prime_ss
    print(0, 1000)
    for i in range(0, 1001):
        if(prime_no(sum(ps[i])) == 0):
            continue

        else:
            prime_ss.append(ps[i])
            
    return prime_ss

num_of_threads = 2
thread_handle = []

start = time.time()

for i in range(0,num_of_threads):
    t = threading.Thread(target=task, args=(len(ps) * i, len(ps) * (i+1), prime_ss))
    thread_handle.append(t)
    t.start() 
                                
for i in range(0,num_of_threads):
    thread_handle[i].join()    
    
end = time.time()

time_multithreading = end-start
print("Time: ", time_multithreading)
print(prime_ss)


#multiprocessing

def task(arr):
    final_arr = []
    for i in arr:
        if(prime_no(sum(i))==0):
            continue
        else:
            final_arr.append(i)
            
    return final_arr

pass_arr = []

begin = 0
ending = len(ps)//4

for i in range(0, num_of_threads):
    pass_arr.append(ps[begin:begin+ending])
    begin += ending

pool = multiprocessing.Pool(processes=4)
result = pool.map(task, pass_arr)

