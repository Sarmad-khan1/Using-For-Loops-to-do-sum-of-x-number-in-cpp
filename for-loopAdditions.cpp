#include <iostream>
using namespace std;
int sum();
int main()
{
	int receiver;
	receiver=sum();
	cout<<"The sum of numbers from 1 to 100 comes out to be: "<<receiver;
}
int sum()
{
	int addition=0;
	
	for(int i=0; i<=100; i++)
	{
		addition=addition+i;	
	}
	return addition;
	
}