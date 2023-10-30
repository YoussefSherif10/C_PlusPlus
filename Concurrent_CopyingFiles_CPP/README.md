# Concurrent_CopyingFiles_CPP

This is a simple C++ project. A text file is being copied into 7 files. each copy operation is made by an independent thread. threads are managed by a vector where each thread is started and emplaced back to the vector.

RAII is used to initialise the input and output files (Resource Acquisition Is Initialization). This method is typically used to guarantee automated resource release as the scope expires and the class's destructor is called. The file is closed in the destroyer.
