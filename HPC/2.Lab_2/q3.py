!wget --no-check-certificate "https://ocdn.eu/images/pulscms/NGY7MDA_/f8d05506e9250de59fa645f0fb7020e4.jpg"

import cv2
import random
import numpy as np

img1=cv2.imread("f8d05506e9250de59fa645f0fb7020e4.jpg")

img1.shape
scale_percent = 10 # percent of original size
width = int(img1.shape[1] * scale_percent / 100)
height = int(img1.shape[0] * scale_percent / 100)
dim = (width, height)

img= cv2.resize(img1, dim, interpolation = cv2.INTER_AREA)

filt=[]
for i in range(10):
  l2=[]
  for j in range(10):
    l1=[]
    for k in range(3):
      l1.append(random.randint(-5,5))
    l2.append(l1)
  filt.append(l2)

#For future use
numfilt=np.array(filt)
numfilt.shape

img.shape

%%time
filteredimg=[]
for i in range(len(img)-10):
  l2=[]
  for j in range(len(img[0])-10):
    l1=[]
    for m in range(3):
      s=0
      for k in range(10):
        for l in range(10):
          s+=img[i+k][j+l][m]*filt[k][l][m]
      l1.append(s)
    l2.append(l1)
  filteredimg.append(l2)
  
  # size
print(len(filteredimg))
print(len(filteredimg[0]))
print(len(filteredimg[0][0]))

# multiprocessing
import multiprocessing
def conv(m):
  filteredimg=[]
  for i in range(len(img)-10):
    l1=[]
    for j in range(len(img[0])-10):
      s=0
      for k in range(10):
        for l in range(10):
          s+=img[i+k][j+l][m]*filt[k][l][m]
      l1.append(s)
    filteredimg.append(l1)
  return filteredimg
  
  
%%time
pool = multiprocessing.Pool(processes=3)
result = pool.map(conv, [0,1,2])

print(len(result[0]),len(result[0][0]),len(result))

# Difference between Wall Times
65/67

from scipy import signal
imgnp=np.array(img)

%%time
res1 =(signal.convolve2d(imgnp[:,:,0], numfilt[:,:,0], boundary='fill', mode='valid'))
res2 =(signal.convolve2d(imgnp[:,:,1], numfilt[:,:,1], boundary='fill', mode='valid'))
res3 =(signal.convolve2d(imgnp[:,:,2], numfilt[:,:,2], boundary='fill', mode='valid'))

res1.shape

# Difference between Wall Times
65/0.0809
  
