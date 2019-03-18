#include<iostream>
#include<math.h>
using namespace std;
class shapes
{
	int area=314;
	private:
		
	    float circle()
	    {
		    int radius=sqrt(314/3.14);
		    float pc=2*3.14*radius;
			return pc;		
	    }
	    float square()
	    {
	    	float side=sqrt(area);
	    	float ps=4*side;
		    return ps;
		}
		int rectangle()
		{
			int length=2;
			int breadth=area/length;
			int pr=2*(length+breadth);
			return pr;
		}
		float triangle()
		{
			int height=4;
			int base=(2*area)/height;
			float hyp=sqrt(height*height+base*base);
			float pt=height+base+hyp;
			return pt;
		}
		public:
		void result()
		{
			float p1,p2,p3,p4;
			p1=circle();
			p2=square();
			p3=rectangle();
			p4=triangle();
			if (p1>p2&&p1>p4&&p1>p3)
			{
			cout<<"Perimeter of circle is greatest"<<endl;
		    }
			else if (p2>p1&&p2>p4&&p2>p3)
			{
			cout<<"Perimeter of square is greatest"<<endl;
			}
			else if (p3>p1&&p3>p2&&p3>p4)
			{
			cout<<"Perimeter of rectangle is greatest"<<endl;
			}
			else if (p4>p1&&p4>p2&&p4>p3)
			{
			cout<<"Perimeter of triangle is greatest"<<endl;
		    }
		    
			if (p1<p2&&p1<p3&&p1<p4)
			{
			cout<<"Perimeter of circle is smallest"<<endl;
			}
			else if (p2<p1&&p2<p3&&p2<p4)
			{
			cout<<"Perimeter of square is smallest"<<endl;
			}
			else if (p3<p1&&p3<p2&&p3<p4)
			{
			cout<<"Perimeter of rectangle is smallest"<<endl;
			}
			else if (p4<p1&&p4<p2&&p4<p3)
			{
			cout<<"Perimeter of triangle is smallest"<<endl;
			}
		}
};
		int main()
		{
			shapes s1;
			s1.result();
		}

