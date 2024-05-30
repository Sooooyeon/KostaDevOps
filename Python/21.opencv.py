import cv2

# print(cv2.__version__)

# 이미지 읽기
img = cv2.imread("ari.jpg")
img2 = cv2.imread("ari.jpg", cv2.IMREAD_GRAYSCALE)


# 이미지를 화면에 표시
cv2.imshow("Test",img)
cv2.imshow("Test",img2)
cv2.waitKey(0) # 키가 눌릴때까지 대기

# 이미지 윈도우 삭제
cv2.destroyAllWindows()

# 이미지 다른 파일로 저장
cv2.imwrite('test2.jpg',img2)
