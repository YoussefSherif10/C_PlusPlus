# Concurrent_TicketingSystem_CPP

This project is assignment in "introduction to parallel programming with GPUs" course.

The objective of this assignment is to develop a C++ implementation of the parallel programming approach for ticketing. utilising the thread library of the C++ standard library to construct a ticketing mechanism. 

To keep the threads in sync, I used atomic shared variables. The project is divided into threads, and each thread has a ticket number. All threads share an atomic ticket shared variable. A thread waits for the arrival of its ticket number before beginning execution. A message is written, and then the programme terminates after waiting for each thread to complete its execution. 

An output file that the user can specify from the command line receives the output. Additionally, the user can specify the number of threads as an option on the command line.

To execute the code, especially for debugging purposes, you will use the following command line arguments as part of the code execution:    ./assignment.exe numThreads userName fileName.
