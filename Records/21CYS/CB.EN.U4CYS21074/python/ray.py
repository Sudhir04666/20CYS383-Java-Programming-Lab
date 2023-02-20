# -*- coding: utf-8 -*-
"""
Created on Fri Feb 17 10:04:11 2023

@author: rtsud
"""

import ray

# initialize Ray
ray.init()

# define a function to parallelize
@ray.remote
def square(x):
    return x*x

# generate a list of inputs
inputs = [1, 2, 3, 4, 5]

# parallelize the function using Ray
results = ray.get([square.remote(i) for i in inputs])

# print the results
print(results)
