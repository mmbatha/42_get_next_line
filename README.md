# Get_Next_Line
Whether it's a file, standard input, or even a unix socket, one still needs to read content line by line. It is therefore time to present this function, which was essential for a number of my later projects.

# Getting started

## Get some file to test the function

`git clone https://github.com/mmbatha/GNL-1.git`

## Copy files from `GNL-1` to the get_next_line (GNL) folder then go into the GNL folder

`mkdir GNL/test`

`cp GNL-1/bible.txt GNL/test`

`cp GNL-1/gnl* GNL/test`

`cp GNL-1/test_* GNL/test`

`cd GNL`

## Run shell scripts that compile the necessary custom C library functions and create a program with which to run get_next_line with various files

`sh gnl_intra_test.sh`

## Run the program created with different text files copied earlier

`./test_gnl bible.txt`

`./test_gnl test_eminem.txt`

## Test for leaks

`sh gnl_leaks.sh`
