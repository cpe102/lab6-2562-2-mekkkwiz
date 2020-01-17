#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char outp;
	if ( x >= 'A' && x <= 'Z' )
	{
		if (x==65)
		{
			outp = 'Z';
		}
		else
		{
			outp = x-1;
		}
		return outp ;
		
	}
	else
	{
		return '0';
	}
	
	
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
