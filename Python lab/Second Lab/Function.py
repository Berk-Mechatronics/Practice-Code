import numpy as np
def symmetric_positive(Matrix,matrix_name="NonGiven Name", vectors = False):
    try:
        eigen_values,eigen_vector=np.linalg.eig(Matrix)
        λ = False

        inv_of_a_matrix = np.transpose(Matrix)
        check_inv = np.allclose(inv_of_a_matrix, Matrix)

        def eigen_founder(eigen_values):
            for i in eigen_values:
                if i > 0:λ = True
                else:λ = False

            if λ == True and check_inv == True:print("\n"+str(matrix_name) +" of matrix is symmetric positive"+"\n")
            elif λ == True and check_inv == False:print("\n"+str(matrix_name) +" of matrix is only positive"+"\n")
            else:print(str(matrix_name) + " of matrix is not symmetric positive"+"\n")

        if vectors == True:eigen_founder(eigen_values),print("\n"+"Eigen Vector of "+
                                                             matrix_name +":"+
                                                             "\n"+str(eigen_vector))
        else:eigen_founder(eigen_values)
    except:
        print("This is the error message: Check the given parameters and Library")
        
def largest_value(Matrix,matrix_name="NonGiven Name",matrix_columns=3):
    try:
        identity_matrix = np.identity(matrix_columns)
        u = -1
        while True:
            u +=1
            new_matrix = Matrix + u * identity_matrix
            eigenvalues_new = np.linalg.eigvals(new_matrix)
            if any(eigenvalues_new <= 0):
                break

        for i in eigenvalues_new:
            for j in eigenvalues_new+i:
                if abs(i)>abs(j):
                    print("Largest value of "+str(matrix_name)+" is "+str(abs(i)))
                    break
                else:
                    continue
    except:
        print("This is the error message: Check the given parameters and Library")
def ortogonal(Matrix,matrix_name="NonGiven Name",matrix_columns=3):
    try:
        transpose_of_Matrix = np.transpose(Matrix)
        matrix_dotproduct = np.dot(Matrix,transpose_of_Matrix)
        identity_matrix = np.identity(int(matrix_columns))
        ortogonal_check = np.allclose(identity_matrix,matrix_dotproduct)

        if ortogonal_check ==True: print(str(matrix_name)+" of Matrix is ortogonal")
        else:print(str(matrix_name)+" of Matrix is not ortogonal")

    except:
        print("This is the error message: Check the given parameters and Library")
def twoD_Transformation(x1=0,y1=0,teta1=0,lx1=0,ly1=0,x2=0,y2=0,teta2=0,
                        local_Landmark=False,T1toT2=False,T2toT1=False):
    #Define Rotational Matrix
    R1 = np.array([[np.cos(np.radians(teta1)),-np.sin(np.radians(teta1))],
                  [np.sin(np.radians(teta1)),np.cos(np.radians(teta1))]])
    R2 = np.array([[np.cos(np.radians(teta2)), -np.sin(np.radians(teta2))],
                   [np.sin(np.radians(teta2)), np.cos(np.radians(teta2))]])

    #t
    t1 = np.array([x1, y1])
    t2 = np.array([x2, y2])

    #T
    T1 = np.column_stack((np.row_stack((R1, [0, 0])), [t1[0], t1[1], 1]))
    T2 = np.column_stack((np.row_stack((R2, [0, 0])), [t2[0], t2[1], 1]))
    try:
        if T1toT2==True and T2toT1==False: #T1 and T2 matrixes
            T1toT2_N = np.dot(np.linalg.inv(T1), T2)
            if local_Landmark == True:
                local_landmark = np.dot(np.linalg.inv(T1toT2_N), np.array([lx1, ly1, 1]))
                localx=local_landmark[0]
                localy=local_landmark[1]
                return localx,localy
            else:
                return T1toT2_N

        elif (T2toT1==True and T1toT2==False):
            T2toT1_N = np.dot(T1,np.linalg.inv(T2))
            return T2toT1_N

        else:
            #landmark l in the global frame
            local_landmark = np.array([lx1, ly1, 1])
            g_landmark = np.dot(T1, local_landmark)

            #local frame
            T1_inv = np.linalg.inv(T1)
            global_landmark = np.array([lx1, ly1, 1])
            local_landmark = np.dot(T1_inv, global_landmark)
            lx = local_landmark[0]
            ly = local_landmark[1]

            return g_landmark,lx,ly
    except:
        print("Error")

def laser_scaning(scan,angle=0,
                  robot_x=0,robot_y=0,theta_robot=0,
                  laser_x=0,laser_y=0,laser_theta=0):

    laser_endpoints_x = []
    laser_endpoints_y = []
    world_coord_x = []
    world_coord_y = []

    robot_tMatrix = np.array([[np.cos(theta_robot), -np.sin(theta_robot), robot_x],
                              [np.sin(theta_robot), np.cos(theta_robot), robot_y],
                              [0, 0, 1]])

    laser_tMatrix = np.array([[np.cos(laser_theta), -np.sin(laser_theta), laser_x],
                              [np.sin(laser_theta), np.cos(laser_theta), laser_y],
                              [0, 0, 1]])

    for i in range(len(scan)):
        distance = scan[i]
        alpha = angle[i]

        x_endpoint_laser = distance * np.cos(alpha)
        y_endpoint_laser = distance * np.sin(alpha)

        laser_endpoints_x.append(x_endpoint_laser)
        laser_endpoints_y.append(y_endpoint_laser)

    for i in range(len(scan)):
        x_endpoint_laser = laser_endpoints_x[i]
        y_endpoint_laser = laser_endpoints_y[i]

        endpoint_robot = np.array([x_endpoint_laser, y_endpoint_laser, 1])
        endpoint_world = np.dot(np.dot(robot_tMatrix, laser_tMatrix), endpoint_robot)

        world_coord_x.append(endpoint_world[0])
        world_coord_y.append(endpoint_world[1])

    return laser_endpoints_x,laser_endpoints_y,world_coord_x,world_coord_y
