/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int nextFibonacci( )
{

	static int n1 = 0;//base 1
	static int n2 = 1;//base 2
	static int call = 0;// the first sequence 



	if ( call == 0 ) //checks for the first sequence and displays 0
	{
		call++;
		return n1;
	}
	else if ( call == 1 )// checks for the second sequence and displays 1 
	{
		call++;
		return n2;
	}
	
	int next = n1 + n2;//total of the sequence to replace the 2nd base
	
	n1 = n2; // replaces the 1st base with 2nd base for formula
	n2 = next; // replaces the second base with the total of the previous sequence
	return next;//returns the total 


}

int main()
{

//asks user for amount of sequences 
	int num;
	cout << "How many Fibonacci numbers do you want to generate? :"<<endl;
    
	cin >> num;
	cout << "Results : ";
	//loop to display the amount of results the user inputed 
	for (int i = 0; i < num; i++) {
	    cout << nextFibonacci();
	    
	    
	    if (i < num - 1)
	    cout << ", ";
	}

        cout << endl;
		return 0;
}