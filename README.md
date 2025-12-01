# File I/O Demo in C

This is a simple C program that demonstrates basic file handling operations: writing to a file and reading from a file.

## Description

The program (`file_demo.c`) performs the following steps:
1.  Creates/Opens a file named `data.txt` in write mode.
2.  Prompts the user to enter a sentence.
3.  Writes the user's input to `data.txt`.
4.  Closes the file.
5.  Re-opens `data.txt` in read mode.
6.  Reads the content from the file.
7.  Displays the content on the console.

## How to Compile

To compile the program, use a C compiler like `gcc`:

```bash
gcc file_demo.c -o file_demo
```

## How to Run

After compiling, run the executable:

**Windows:**
```bash
file_demo.exe
```

**Linux/macOS:**
```bash
./file_demo
```

## Example Usage

```
Enter a sentence: Hello, File Handling!
Data written to file successfully.

Reading from file:
Hello, File Handling!
```
