from tkinter import *
from tkinter import messagebox

def reset_entry():
    name_tf.delete(0,'end')
    age_tf.delete(0,'end')
   
    height_tf.delete(0,'end')
    weight_tf.delete(0,'end')
def calculate_bmi():
    kg = int(weight_tf.get())
    m  = int(height_tf.get())/100   
    bmi = kg/(m*m)
    bmi = round(bmi,1)
    bmi_index(bmi) 
    

      
    
def bmi_index(bmi):
    if bmi <18.5:
       messagebox.showinfo('bmi calculator by sourav',f'BMI = {bmi} is underweight')
    elif (bmi>18.5) and (bmi<24.9):
        messagebox.showinfo('bmi calculator by sourav',f'BMI = {bmi} is Normal')
    elif(bmi>24.9) and (bmi<29.9):
        messagebox.showinfo('bmi calculator by sourav',f'BMI = {bmi} is overweight ')
    elif(bmi>29.9):
        messagebox.showinfo('bmi calculator by sourav',f'BMI = {bmi} is obesity')
    else: 
         messagebox.showinfo('bmi calculator by sourav','something went wrong')      
            
root = Tk()
root.title('bmi calculator by sourav')
root.geometry('500x400') 
root.config(bg='blue')
   
frame = Frame(root,padx=10,pady=10)
frame.pack()

name_lb = Label(frame,text="ENTER YOUR FULL NAME")
name_lb.grid(row=1,column=1)
name_tf = Entry(frame)
name_tf.grid(row=1,column=2)


age_lb = Label(frame,text="ENTER AGE")
age_lb.grid(row=2,column=1)
age_tf = Entry(frame)
age_tf.grid(row=2, column=2,pady=5)

gen_lb = Label(frame,text ='SELECT GENDER')
gen_lb.grid(row=3,column=1)

frame2 = Frame(frame)
frame2.grid(row=3,column=2,pady=5)

male_rb = Radiobutton(frame2,text='MALE',value=1)
male_rb.pack(side=LEFT)
female_rb = Radiobutton(frame2,text='FEMALE', value =2)
female_rb.pack(side = RIGHT)

height_lb = Label(frame,text="ENTER HEIGHT(cm)")
height_lb.grid(row=4,column=1)
height_tf = Entry(frame)
height_tf.grid(row=4,column=2,pady=5)

weight_lb = Label(frame,text="ENTER WEIGHT(kg)")
weight_lb.grid(row=5,column=1)
weight_tf = Entry(frame)
weight_tf.grid(row=5,column=2,pady=5)

frame3 = Frame(frame)

frame3.grid(row=6,column=1,pady=10)
cal_btn = Button(frame3,text='calculate',command = calculate_bmi)
cal_btn.pack(side=LEFT)


reset_btn = Button(frame3,text='Reset',command=reset_entry)
reset_btn.pack(side=LEFT)

exit_btn = Button(frame3,text='Exit',command=lambda:root.destroy())
exit_btn.pack(side=RIGHT)















root.mainloop()
   
    
    
    
    
     
