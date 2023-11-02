# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
import math as m
import matplotlib.pyplot as plt
import numpy as np

#Exercises First and second:
def math_function(x): #math formulation function
    fx= np.cos(x) * np.exp(x);
    return fx;

x = np.linspace(-2*(np.pi),2*m.pi,1000); #defining array
y = math_function(x);

plt.plot(x,y); #defining plot
plt.show();

#Exercise third:

#A: Create a vector with 100000 random variables
    # which are normally distributed with a mean of 5.0
    # and
    # a standard deviation of 2.0.
random_value1 = np.random.normal(5,2,100000);

#B: Create a vector with 100000
    # uniformly distributed
    # random variables between 0 and 10.
random_value2 = np.random.uniform(0,10,size=100000);
array_new = np.array(random_value2);
array_new.sort();
# print(array_new)

mean1 = random_value1.mean();
std1 = random_value1.std();
mean2 = random_value2.mean();
std2 = random_value2.std();

print("First random values mean is "+str(mean1)+" Standart deviation is "+str(std1)+" \n",
      "Second random values mean is "+str(mean2)+" Standart deviation is "+str(std2)+"\n");


#Exercise fourth

def task1_length(t):
    sqr = 0;
    for i in t:
        sqr += i**2;
    sqr_r = np.sqrt(sqr);
    return sqr_r;

t1 = (3, 4)
t2 = (5, 12)
t3 = (1, 2, 3)
t4 = (10, 20, 30)

print("|t1| =", task1_length(t1))
print("|t2| =", task1_length(t2))
print("|t3| =", task1_length(t3))
print("|t4| =", task1_length(t4))





























































