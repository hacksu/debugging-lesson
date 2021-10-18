# Debugging

Debugging is a very important skill to a programmer. It is the rope of a spelunker, the diagnosis of a doctor, the shovel used to dig oneself out of a hole. Simply put, debugging is the skill of pinpointing an error, and taking the steps to fix it. In many modern IDEs there are advanced debugging tools and other resources available to you. These are nice, but there are some times you may not have access to the comfy embrace of Visual Studio's code tracing and you will have nobody but yourself to rely on to figure out why that loop is running one too many times.

The general strategy for debugging is as follows:

1. Assume nothing, make sure all variables are what you expect by printing them out in an organized manner. 
2. Print out checkpoints to see exactly where the program stops/goes wrong.
3. Most importantly **READ ERROR MESSAGES!** The compiler or interpreter is your friend, errors are their way of saying "hold on, something's not quite right".
4. The anatomy of an error: `main.cpp:9:5` this tells us the filename (`main.cpp`), line number (`9`), and column number (`5`)


We are going to use [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler) to run our code. We will begin with ex1.cpp in the examples directory. 

## Example 1

In this file, we are supposed to print out the values of i and j, but when we try to run it we get an error. 

## Example 2

In this file, we are trying to print out the numbers 0-9, but when we try to run it it just keeps counting up and won't stop! To solve this, analyze the loop condition.

## Example 3

In this file, we are supposed to use a multiply function to multiply two numbers, but we don't get the result we expect. This is probably because of type conversion, how could 5 * 2.5 give 10?

## Example 4

This file has the same goal as the last one, but this time when we try to run it we get an error. 

## Example 5

In this file, we are supposed to print the sum of all of the numbers in an array, but the result is way higher than we expected. It might be a good idea to count how many time the loop runs and what it adds to sum each time.