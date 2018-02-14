*******************************************************
*  Name      :      Bryant Wong    
*  Student ID:      107571009           
*  Class     :  CSC 2421           
*  HW#       :  4          
*  Due Date  :  Feb 15, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

This program makes a new empty vector as a dynamically allocated array and allows this "vector" to use member functions
push_back, pop_back, size, search, and empty to check its status.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This creates an instance of MyVector as an array that acts like a vector.


Name:  MyVector.cpp
   Contains member functions that allow the array to behave like a vector.

Name: MyVector.h
   Contains the class definition of MyVector and the declarations of all of the member functions.

   
*******************************************************
*  Circumstances of programs
*******************************************************
The program is complete and compiles and runs on visual studio community and csegrid.



Developed on Visual Studio Community 2015 14.0.25431.01 Update 3.



*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [WongHW4]

   Now you should see a directory named homework with the files:
        main.cpp
	MyVector.h
	MyVector.cpp
        makefile
        Readme.txt
	analysis.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [WongHW4] 

    Compile the program by:
    % make

3. Run the program by:
   % ./hw4

4. Delete the obj files, executables, and core dump by
   %./make clean
