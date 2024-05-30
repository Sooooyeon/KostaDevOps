from tkinter import *

root = Tk()
root.title('Python GUI')
root.geometry("540x380+200+100")
# root.resizable(False,False)

# 컨트롤, 위젯, 컴포넌트


##photo = PhotoImage(file = 'submarine.png')
##
##def btncmd():
##    print("좋아요를 꾸욱 눌러주세요.")
##
##
##btn1 = Button(root,image = photo, command = btncmd)
##btn1.pack()
##
##
##btn2 = Button(root, text = '버튼2', padx = 20, pady = 20)
##btn2.pack()
##
##btn3 = Button(root, text = '버튼3', width = 10, height = 5, fg = "white", bg = "red")
##btn3.pack()



## label
##label = Label(root, text = "누구")
##label.pack()
##
##photo = PhotoImage(file = 'submarine.png')
##label2 = Label(root, image = photo )
##label2.pack()


label1 = Label(root, text = "최선을 다하자")
label1.pack()

def change():
    #label1.config(text = '최선을 다할걸..')
    
##    global photo
##    photo = PhotoImage(file = 'submarine.png')
##    label1.config(image = photo)

    print(ent1.get())
    print(ent2.get())


btn = Button(root, text = '로그인' , command = change)
btn.pack()


##txt = Text(root, width = 40, height = 20)
##txt.insert(END,'글자를 입력하세요.')
##txt.pack()

ent1 = Entry(root,width = 30)
ent1.insert(END,'아이디를 입력하세요')
ent1.pack()

ent2 = Entry(root,width = 30)
ent2.insert(END,'비밀번호를 입력하세요')
ent2.pack()















root.mainloop()

