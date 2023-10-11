**tASK 0**

The function first checks if the filename parameter is NULL. If it is, the function returns 0 as specified in the requirements.

It then proceeds to allocate memory for a buffer to read the file content. The buffer size is determined by the letters parameter.

The function opens the file using open() with the O_RDONLY flag to read it. If the file can't be opened, it returns 0.

It reads from the file using read() and stores the number of bytes read in bytes_read.

It writes the read data to the standard output (STDOUT_FILENO) using write(). If the write operation fails or doesn't write the expected number of bytes, it returns 0.

Finally, it cleans up allocated memory and closes the file descriptor before returning the number of letters read and printed.


**Task 1**

The function create_file takes a filename and a text content as parameters.

It first checks if the filename is NULL and returns -1 if it is.

It then opens the file for writing (O_CREAT | O_WRONLY | O_TRUNC) with permissions 0600 (rw-------).

If the text_content is not NULL, it writes the text content to the file using the write system call.

The function closes the file descriptor and returns 1 on success.

If any step in the process fails, the function returns -1 to indicate failure.


**Task 2**

The function append_text_to_file takes a filename and a text content as parameters.

It first checks if the filename is NULL and returns -1 if it is.

It then opens the file for writing in append mode (O_WRONLY | O_APPEND), which ensures that text is added to the end of the file without overwriting its contents.

If the text_content is not NULL, it appends the text content to the file using the write system call.

The function closes the file descriptor and returns 1 on success.

If any step in the process fails, the function returns -1 to indicate failure.


**tASK 3**

