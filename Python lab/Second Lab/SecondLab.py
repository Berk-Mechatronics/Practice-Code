import matplotlib.pyplot as plt
import numpy as np
from Function import symmetric_positive,largest_value,ortogonal,twoD_Transformation,laser_scaning


A = np.array([[0.25, 0.1],
              [0.2, 0.5]])
B = np.array(([[0.25,-0.3],
               [-0.3,0.5]]))
C = np.array([[1,0],
              [0,-2]])
D = 1/3*np.array([[2,2,-1],[2,-1,2],[-1,2,2]])

# Exercise 1: Linear Algebra
#       A) Consider the matrices
#           Are they symmetric positive definite?
symmetric_positive(A,"A")
symmetric_positive(B,"B")
symmetric_positive(C,"C")

#       B) Consider the matrices Find the largest value for 𝜇∈ for which 𝐶+𝜇𝐼 is not symmetric positive definite.
largest_value(C,"C",matrix_columns=2)

#       C)Write a program in Python that determines whether a matrix is orthogonal.
#       D)Use this program to investigate whether D is ortogonal
ortogonal(D,matrix_name="D",matrix_columns=3)
symmetric_positive(D,matrix_name="D",vectors=False)


# 2D Transformations as Affine Matrices

    #A)Global Frame
Global_Landmark = twoD_Transformation(1,2,45,0.3,0.5)
print("Global Landmark of T: \n"+str(Global_Landmark)+"\n")

    #B)Local Frame
g,Local_Frame_x,Local_Frame_y=twoD_Transformation(1,3,45,0.3,0.5)
print("Local Landmark of X: \n"+str(Local_Frame_x)+"\n")
print("Local Landmark of Y: \n"+str(Local_Frame_y)+"\n")

    #C) T1 and T2 homogeneous
T1toT2=twoD_Transformation(1,2,45,0.3,0.5,x2=1,y2=2,teta2=30,T1toT2=True)
print("T1 to T2: \n"+str(T1toT2)+"\n")

T2toT1=twoD_Transformation(1,2,45,0.3,0.5,x2=1,y2=2,teta2=30,T2toT1=True,T1toT2=False)
print("T2 to T1: \n"+str(T2toT1)+"\n")

    #D) Lx and Ly
T1toT2_localx,T1toT2_localy=twoD_Transformation(1,2,55,0.3,0.5,x2=1,y2=2,teta2=30,T1toT2=True,local_Landmark=True)
print("T1 to T2 local x: "+str(T1toT2_localx)+"\n")
print("T1 to T2 local y: "+str(T1toT2_localy)+"\n")


# Sensing
scan = np.loadtxt('laserscan.dat')
angle = np.linspace(-np.pi/2, np.pi/2, np.shape(scan)[0], endpoint=True)

endpoint_x,endpoint_y,world_x,world_y=laser_scaning(scan,angle,1,0.5,np.pi/4,0.2,
                                                   0,np.pi)

plt.Figure()
plt.plot(endpoint_x,endpoint_y,"r",label="Laser End-Points")
plt.plot(world_x,world_y,"b",label="Laser End-Points in World Frame")
plt.xlabel("Meters X")
plt.ylabel("Meters Y")
plt.gca().set_aspect('equal', adjustable='box')
plt.legend()
plt.show()


# Exercise 4: Homogeneous Transformations

g1_landmark,T1toT2_localx2,T1toT2_localy2=twoD_Transformation(5,6,30,3,4)


print("Landmark Matrix: "+str(g1_landmark)+"\nLocal X: "+str(T1toT2_localx2)+"\nLocal Y: "+str(T1toT2_localy2))









