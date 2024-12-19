Missing function prototype (-2)

1. (10 pts) Write a complete program in C++ that generates the Fibonacci Sequence.

Your program will include this function:

int nextFibonacci() should generate and return the next number in the Fibonacci sequence each time it is called. It uses static local variables to store the previous two numbers in the sequence, so that it can keep track of the current state and generate the next number in the sequence when called again. It should not take any arguments, and it should return the next Fibonacci number based on the current state.
The Fibonacci sequence formula:
F(N) = F(N - 1) + F(N - 2)


with the base cases:
F(0) = 0
F(1) = 1
Your program will ask the user how many Fibonacci numbers they want to generate. The program will then display that many Fibonacci numbers in sequence.

Do NOT use any global variables.

Your program must have a function prototype.

Input validation is not required.

Sample output and input:

How many Fibonacci numbers do you want to generate? 10
Result: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
