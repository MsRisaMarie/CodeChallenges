Challenge #1: Fizz Buzz
======

This challenge was coded in Haskell. The lazy language that nobody knows. 
To run this code, you will need to have Haskell downloaded, and load the .hs file. 

There will be 3 arguments
1. The first divisor
2. The second divisor
3. The upper bound 

My script cycles through the range of [0...'the upper bound that you define'] and will print one of the below strings

- "FizzBuzz" if both the first and the second divisor is divisible.
- "Fizz" if the first divisor is divisible
- "Buzz" if the second divisor is divisible
- The number itself, if it is not any of the above

## Code Guidelines

- You MUST only use integers within the range 
- "fb" is the fizzbuzz function

## Running the Program
1. Be sure to have the Haskell environment already set up. 
2. Download code. 
3. Copy file to desktop or location that you can navigate to easily. 
4. Open terminal and navigate to the location of the .hs file
5. Type in "ghci fizzbuzz.hs" (It should load the modules.)
6. Type in "fb", the first divisor, the second divisor, and the upperbound. 
	* Example: "fb 2 4 6"

Challenge #2: Palindrome and Reverse Lexical Sort
======

This challenge was coded in Python and C. In this challenge, I import a text file into the code and sort through the list, determining whether that line is a palindrome. If it is, then I print "YES" if it is not, then I print "NO". In addition, I sort the list in reverse lexical order without white space characters. 

## Python Version
To run this version in python, please clone the files to your desktop. 
If you'd like to use the example text file, please download test2.txt

1. Place both your sample input text file (or my sample text file) and the test2.py file in the same folder. 
2. Open terminal
3. Navigate to the folder where you placed the files
4. Type in the terminal: python test2.py YOURTEXTFILENAME.txt
OR if you're using my sample input text file enter: python test2.py test2.txt
5. Press Enter. Boom. Your list will be printed. 

## C Version
To run this version in C, please clone the files to your desktop. 
Same thing as above. If you'd like to use the sample text file, be sure to download that too. 



1. In terminal: > gcc test2.c -o test2
Break down of above command
	* gcc : is the built in C compiler 
	* -o : creates the object files 
	* test2 : is the executable
2. ./test2 test2.txt
	* If you want to use a different text file, replace "test2.txt" with the name of the sample input file.
