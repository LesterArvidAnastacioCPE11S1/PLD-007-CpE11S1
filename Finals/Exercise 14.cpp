#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0)); //Seed the random number generator
	int randomValue = rand(); //Generate random number
	cout <<"Random Value: "<<randomValue<<endl;
	
	return 0;
}
