// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
	int number_of_cents{0};
	const int dollars{100};
	const int quater{25};
	const int dimes{10};
	const int nickels{5};
	const int pennies{1};
	cout<<"Enter an amount in cents : ";
	cin>>number_of_cents;
	cout<<endl;
	cout<<"You can provide this change as follows:"<<endl;

	int change_of_dollars{0};
	int rem_of_dollars{0};
	change_of_dollars=(number_of_cents/dollars);
	rem_of_dollars=number_of_cents%dollars;
	cout<<"dollars: "<<change_of_dollars<<endl;

	int change_of_quater{0};
	int rem_of_quater{0};
	change_of_quater=(rem_of_dollars/quater);
	rem_of_quater=rem_of_dollars%quater;
	cout<<"quater : "<<change_of_quater<<endl;;

	int change_of_dimes{0};
	int rem_of_dimes{0};
	change_of_dimes=(rem_of_quater/dimes);
	rem_of_dimes=rem_of_quater%dimes;
	cout<<"dimes  : "<<change_of_dimes<<endl;

	int change_of_nickels{0};
	int rem_of_nickels{0};
	change_of_nickels=(rem_of_dimes/nickels);
	rem_of_nickels=rem_of_dimes%nickels;
	cout<<"nickels: "<<change_of_nickels<<endl;

	int change_of_pennies{0};
	int rem_of_pennies{0};
	change_of_pennies=(rem_of_nickels/pennies);
	rem_of_nickels=rem_of_nickels%pennies;
	cout<<"pennies: "<<change_of_pennies<<endl;

    cout << endl;
    return 0;
}


