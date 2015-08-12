#include <iostream>
using namespace std;
int isEven(unsigned long int i)
{
	if(i%2==0)
		return 1;
	else 
		return 0;
}

int main() {
	
	unsigned long int N = 1000000007; //Max value
	unsigned long int count = 0 ; //F(10^8) will not exceed 18 digits so long int is enough
	unsigned long int fcount = 0;
	unsigned long int stop1 = 10000;
	unsigned long int stop2 = 100000000;
	
	for(unsigned long int i = 1; ; i++)
	{
//Greedy Approach since S0 is 0 so Player 1 selects the last number in the sequence  
		if(isEven(i))
			fcount += count;
		if(i == 100 )
			cout << "F(100) is "<< fcount << endl;
		if(i == stop1 ) 
			cout << "F(10^4) is " << fcount << endl;
		if(i == stop2 )
		{ 
			cout << "F(10^8) is " << fcount << endl;
			break;
		}

		count = ((count * count )+45)% N;

	}
	return 0;
}
