#include<iostream>
using namespace std;
class complex{
	int real,imag;
	public:
		complex(){
		}
		complex(int a,int b)
		{
			real=a;
			imag=b;
		}
		void display()
		{
			cout<<"("<<real<<","<<imag<<")";
		}
		complex operator-(complex c1)
		{
			c1.real=-c1.real;
			c1.imag=-c1.imag;
			return c1;
		}
};
int main()
{
	complex c(10,20);
	c.display();
	 s=-c;
	c.display();
	return 0;
}
