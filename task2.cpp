#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b\n";    //input call
	cin>>a>>b;
	if(a<b)           
		cout<<"b is greater than a";
	if(a>b)
		cout<<"a is greater than b";
	else 
		cout<<"both are equal";
	return 0;
}
