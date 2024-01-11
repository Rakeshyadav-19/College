#import numpy
import numpy
arr = numpy.array([50,60,70])
print(arr)

#numpy as np
import numpy as np
arr = np.array([1,2,3,4,5])
print(arr)

#checking Numpy vesrion
print(np.__version__)

#create a numpy ndarray object
arr = np.array([1,2,3,4,5])
print(arr)
print(type(arr))

#o-Darray
arr = np.array([22])
print(arr)

#1-D array
arr = np.array([1,2,3])
print(arr)

#2-D array
arr = np.array([[1,2,3],[4,5,6]])
print(arr)

#3-D array
arr = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(arr)

#printing Dimension of array
a = np.array([])
b = np.array([[1,2,3],[4,5,6]])
c = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(a.ndim)
print(b.ndim)
print(c.ndim)