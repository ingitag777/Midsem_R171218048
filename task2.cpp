// comparasion of three no.s
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of a b c\n";    //input call
	cin>>a>>b>>c;
	// conditions
	if(a<b&&a<c)           
		cout<<"b  and c are greater than a";
	if(a>b&&a>c)
		cout<<"a is greater than b and c";
	if(b>a&&b>c)
		cout<<"b is greater than a amd c";
	if(b<a&&b<c)
		cout<<"b is less than a and c";
	 if(c>a&&c>b)
                cout<<"c is greater than a and b";
        if(c<a&&c<b)
                cout<<"c is less than a and b";
	else
		cout<<"all are equal";    // final condition
	return 0;
}
