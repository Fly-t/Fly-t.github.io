import numpy as np

# create arr by numpy
arr = np.array([1,2,3])
print(arr.dtype) # int32

# specify the type of parameters
arr_int64 = np.array([1,2,3],dtype=np.int64)
print(arr_int64.dtype) # int64

# zero arr
zero_arr = np.zeros((3,4))
print(zero_arr)

# one arr
one_arr = np.ones((5,6),dtype=np.int64)
print(one_arr)

# empty arr
empty_arr = np.empty((1,10))
print(empty_arr)

# range arr: start,end,offset
rage_arr = np.arange(10,20,2)
print(rage_arr)

# reshape code
base_arr = np.arange(12)
print(base_arr)
# [ 0  1  2  3  4  5  6  7  8  9 10 11]
reshape_arr = np.reshape(base_arr,(3,4))
reshape_arr_1 = base_arr.reshape((3,4))

print(reshape_arr_1)
# [[ 0  1  2  3]
#  [ 4  5  6  7]
#  [ 8  9 10 11]]

# liner arr like time
liner_arr = np.linspace(1,10,20).reshape((2,10))
print(liner_arr)

