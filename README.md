
What is this tool?

This tool is called Doxxtake. It is used to aid the process of doxxing. And is a console program.
There will be an update eventually to make it run better and hopefully include new features.

Contents of this package:

> There is a version made in C programming (with an executable for windows and the C source code for linux/termux)
> There is a python3 version which is aimed for linux and termux but can be used on windows with python3 installed.

Usage

windows : download the zip file of this tool and extract it
          open the extracted folder and click on the executable file
          a command prompt should open. Then enter the information the
	  program asks for and hit enter.
	  when the program finishes you will have a medium sized dox.

Linux :   open a terminal and make sure clang is installed by typing
          apt-get install clang. 
	  when you have clang installed type apt-get install git.
	  after this type apt-get install python3
	  git clone https://github.com/t3rr0rs-end/Doxxtake.git
	  after that is done cd into the Doxxtake folder.
	  To compile the Doxxtake file type gcc doxxtake.c -o doxxtake
	  When that is 
	  now run the doxxtake file by typing ./doxxtake
	  
Linux python file : follow the above instructions for linux but dont use the c compiler
		    instead when you have cloned the folder cd into it and type
		    python3 Doxxtake.py
		    
UPDATE 1: Doxxtake has been updated in the C version. The program now saves the information entered in the Terminal/Command Prompt to a text file and doxxtake now has an online information section so you can enter some known information.

UPDATE 2: Python file updated to save information entered to the console into a text file. C file has been updated to include country.
