# Parallel_Programming_CPP

These examples of threading in C++ are part of "introduction of parallel programming with GPUs" course.

There are four main libraries for multi-threading:
* Thread
    * Thread thread (function) —> creates the thread with a function
    * threadName.join() —> execute the function in synch with the control
    * threadName.detach() —> the function is executed till the end 
* Atomic
* Future
* Mutex wrap around the critical section in a thread.
    * .lock()
    * .try_lock
    * .unlock()
    
make clean build - this command will remove all artifacts of the build process and then build the various executables required to run one of the simple .exe files
make run_threading_example  - runs the thread_example.exe file that utilizes the C++ standard library thread
make run_mutex_example  - runs the mutex_example.exe file that utilizes the C++ standard library mutex
make run_atomic_example  - runs the atomic_example.exe file that utilizes the C++ standard library atomic
make run_future_example  - runs the atomic_example.exe file that utilizes the C++ standard library future
