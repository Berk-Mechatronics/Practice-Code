import numpy as np
import matplotlib.pyplot as plt


def diffdrive(x,y,q,vl,vr,dt,l):
    if vl == vr: #vl == vr

        x2 = x + vl * dt * np.cos(q)
        y2 = y + vl * dt * np.sin(q)
        q2 = q

    else: #cicular movion

        R = l / 2 * (vr + vl) / (vr - vl)
        w = (vr - vl) / l

        ICCx = x - R * np.sin(q)
        ICCy = y + R * np.cos(q)

        x2 = ICCx + (x - ICCx) * np.cos(w * dt) - (y - ICCy) * np.sin(w * dt)
        y2 = ICCy + (x - ICCx) * np.sin(w * dt) + (y - ICCy) * np.cos(w * dt)
        q2 = q + w * dt

    return x2, y2, q2



initial_x, initial_y, initial_q = 1.5, 2.0, np.pi/2


# c1
vl, vr, dt, l = 0.3, 0.3, 3, 0.5
x, y, q = diffdrive(initial_x, initial_y, initial_q, vl, vr, dt, l)
plt.quiver(initial_x, initial_y, np.cos(initial_q), np.sin(initial_q))

# c2
vl, vr, dt = 0.1, -0.1, 1
x, y, q = diffdrive(x, y, q, vl, vr, dt, l)
plt.quiver(x, y, np.cos(q), np.sin(q))

# c3
vl, vr, dt = 0.2, 0, 2
x, y, q = diffdrive(x, y, q, vl, vr, dt, l)
plt.quiver(x, y, np.cos(q), np.sin(q))

plt.axhline(0, color='red',linewidth=0.5)
plt.axvline(0, color='blue',linewidth=0.5)
plt.xlabel('X-axis (m)')
plt.ylabel('Y-axis (m)')
plt.title('Robot Trajectory')
plt.show()












