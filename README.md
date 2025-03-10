# FILE-HANDLING-PROGRAM


*COMPANY*:  CODETECH IT SOLUTIONS

*NAME*: PRIYADHARSHANI L


*INTERN ID*: CT08SXS

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH

*DESCRIBTION*:

File Handling Operations in C
Overview
This C program demonstrates various file handling operations such as creating, reading, writing, and appending data to a file. The program allows users to interact with a text file (intern.txt), perform basic file operations, and observe how files are manipulated in C.

Features
Create a new file if it doesn't exist.
Write data to the file.
Read data from the file and display it on the screen.
Append new data to the existing content in the file.
Demonstrates the use of various file modes (w, r, a) in C.

File Operations
The program utilizes the standard C file handling functions to perform the following operations:

Creating and Writing to a File:

Opens a file in write mode ("w"), which creates the file if it doesn't exist.
If the file exists, it overwrites any existing content with new data.
The program prompts the user for input and writes it to the file.
Reading from a File:

The program reopens the file in read mode ("r"), reads its content line by line, and prints it to the console.
It demonstrates the use of fgets() to read a file line by line.
Appending to a File:

The program then opens the file in append mode ("a"), which allows data to be added to the end of the file without overwriting existing content.
The user can input new data, which is appended to the file.
Reading After Appending:

Finally, the program reopens the file in read mode ("r") and prints the entire content of the file, including the newly appended data.
Code Walkthrough
Creating and Writing Data:

A file is opened in write mode using fopen("example.txt", "w"). If the file exists, it will be overwritten. If not, it will be created.
The user is asked to enter a string, which is written to the file using fprintf().
Reading Data:

The file is reopened in read mode using fopen("example.txt", "r").
The program uses fgets() to read the contents of the file line by line, which is then displayed on the screen.
Appending Data:

The file is opened in append mode ("a") using fopen("example.txt", "a"), and any new data is appended to the file.
The program reads the user's input and appends it to the file using fprintf().
Reading After Appending:

Finally, the program reopens the file in read mode and displays the entire content, including the newly appended text.
How to Compile and Run
Save the file as file_operations.c (or any other name you prefer).
Compile the program using a C compiler (e.g., GCC):
bash
Copy
gcc file_operations.c -o file_operations
Run the program:
bash
Copy
./file_operations
The program will ask you to enter text to be written to the file, then it will read and display the content, append additional text, and finally, display the updated content.
Example Output
vbnet
Copy
Enter text to write to the file: Hello, this is a test file!

Data written to the file successfully.

Reading from the file:
Hello, this is a test file!

File read successfully.

Enter text to append to the file: This is additional content being appended.

Data appended to the file successfully.

Reading from the file after appending:
Hello, this is a test file!
This is additional content being appended.

File read successfully after appending.

File Operations Demonstrated:

"w" (Write): Creates or overwrites the file for writing.
"r" (Read): Opens the file for reading.
"a" (Append): Opens the file for appending new content.

Code Explanation:

fopen(): Opens the file in the specified mode (write, read, append).
fclose(): Closes the file after operations are completed.
fgets(): Reads a line from the file (or standard input) into a buffer.
fprintf(): Writes formatted data to the file.

Why This Program Is Useful?
This program is useful for understanding basic file operations in C. It covers the key concepts of how to:
Work with files (open, read, write, and append).
Handle file pointers.
Use file modes to control file interactions.

*OUTPUT*:
![Image](https://github.com/user-attachments/assets/95d18ceb-f41d-4015-8732-1f0b9c020a8e)
