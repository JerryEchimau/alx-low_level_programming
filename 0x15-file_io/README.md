**Task 0**

The function first checks if the filename parameter is NULL. If it is, the function returns 0 as specified in the requirements.

It then proceeds to allocate memory for a buffer to read the file content. The buffer size is determined by the letters parameter.

The function opens the file using open() with the O_RDONLY flag to read it. If the file can't be opened, it returns 0.

It reads from the file using read() and stores the number of bytes read in bytes_read.

It writes the read data to the standard output (STDOUT_FILENO) using write(). If the write operation fails or doesn't write the expected number of bytes, it returns 0.

Finally, it cleans up allocated memory and closes the file descriptor before returning the number of letters read and printed.

**Task 1**


