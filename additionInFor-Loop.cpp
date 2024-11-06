#include <iostream>
using namespace std;
int sum();
int main()
{
	int returner;
	returner=sum();
	cout<<"The overall sum comes out to be: "<<returner<<endl;
}
int sum()
{
	int sum=0;
	for(int i=0; i<=5; i++)
	{
		sum=sum+i;
	}
	return sum;
}
