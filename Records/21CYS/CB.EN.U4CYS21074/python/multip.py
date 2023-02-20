# -*- coding: utf-8 -*-
"""
Created on Fri Feb 17 09:19:33 2023

@author: rtsud
"""

import time
import multiprocessing

def worker(delay):
    print(f"Worker {multiprocessing.current_process().name} started")
    time.sleep(delay)
    print(f"Worker {multiprocessing.current_process().name} finished")

if __name__ == '__main__':
    start = time.time()

    # create a list of delays to simulate work
    delays = [2, 4, 6, 8]

    # create a pool of worker processes
    pool = multiprocessing.Pool(processes=4)

    # map the worker function to the list of delays
    pool.map(worker, delays)

    # close the pool and wait for the work to finish
    pool.close()
    pool.join()

    end = time.time()
    print(f"Time taken: {end - start} seconds")
