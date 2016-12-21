import timeit

import pfibo, cfibo # Import our modules

print "Time required using C API"
start_time = timeit.default_timer()
x = cfibo.fib(42)
elapsed = timeit.default_timer() - start_time
print str(elapsed) + " seconds"

print "Time required using standard Python"
start_time = timeit.default_timer()
x = pfibo.fib(42)
elapsed = timeit.default_timer() - start_time
print str(elapsed) + " seconds"
