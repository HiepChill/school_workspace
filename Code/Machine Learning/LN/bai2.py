import numpy as np;
mta = np.array([(1 , 4 , -1) , (2 , 0 , 1)]);
mtb = np.array([(-1 , 0) , (1 , 3) , (-1 , 1)]);

print('Ma trận A: \n' , mta);
print('Ma trận B: \n' , mtb);

print('a) Tính A + B.T , A - B.T');

print('A + B.T = \n' , mta + mtb.T);

print('A - B.T = \n' , mta - mtb.T);

print('b) Tính A * 2 , A * B');

print('A * 2 = \n' , mta * 2);

print('A * B = \n' , mta @ mtb);

print('c) Tính A * A ^ (-1)');

print('A * A ^ (-1) = \n' , mta * (mta ** (-1)))
 