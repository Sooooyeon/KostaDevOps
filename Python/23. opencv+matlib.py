import cv2
import matplotlib.pyplot as plt

img = cv2.imread('ari.jpg',1)
img = cv2.cvtColor(img,cv2.COLOR_BGR2RGB)

plt.imshow(img)
plt.show()
