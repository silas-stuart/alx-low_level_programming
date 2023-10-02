0x15-file_io project:
-----------------------

0. Write a function that reads a text file and prints it to the POSIX standard output.
--Prototype: ssize_t read_textfile(const char *filename, size_t letters);
--whre letters is the number of letters it should read and print
--if the file cant be opened or read, return 0
--if filename is NULL return 0

1. Create a function that creates a file.
--Prototype: int create_file(const char *filename, char *text_content);
--where file name is the name of the file to create and text_content is a NULL terminated string to write to the file
--if filename is NULL return -1
--if text_content is NULL create an empty file

2. I had to Write a function that appends text at the end of a file.
--Prototype: int append_text_to_file(const char *filename, char *text_content);
--where filename is name of the file and text_content is the NULL terminated string to add at the end of the file
--If filename is NULL return -1

3. I had to Write a program that copies the content of a file to another file.
--Usage: cp file_from file_to
--if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
--Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions

4. I had to Write a program that displays the information contained in the ELF header at the start of an ELF file.
--Usage: elf_header elf_filename
--If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr
--You are allowed to use read a maximum of 2 times at runtime

