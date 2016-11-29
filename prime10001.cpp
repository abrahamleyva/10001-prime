// Author: Abraham Medina
// Last Modified: 11/18/2016

#include <iostream>
using namespace std;

bool isPrime(int num); // Checks if an int is a prime

int main()
{
	int currentNum = 1; // Holds current int to be checks as prime
	int currentPrime = 0;
	int rotation = 0; // Holds the number associated with the order of a prime
	
	while(rotation <= 10001) // Loops until 10001st prime is checked
	{
		if(isPrime(currentNum))
		{
			currentPrime = currentNum; // Sets currentNum as currentPrime
			rotation++;
		}
		currentNum++;
	}
	
	cout << "100001st Prime: " << currentPrime << endl;
	
	return 0;
}

bool isPrime(int num) // Checks if an int is a prime
{
	for(int i = 2; i < num / 2 + 1; i++)
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	return true;
}
