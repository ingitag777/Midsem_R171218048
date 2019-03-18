// printing truth table
#include<iostream>
using namespace std; 

class Table

{

public:
 
	void t1()
	{
	
		int x,y,z;

 		cout<<"X\tY\tZ\tXY+Z";

}for(x=0;x<=1;++x)

			for(y=0;y<=1;++y)

				for(z=0;z<=1;++z)

				{
		
			if(x*y+z==2)

						cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t1";
		
			else
						cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z;
				
}

	}

};

int main()

{

Table obj;

obj.t1();

return 0;

}

