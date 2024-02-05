#include<iostream>
using namespace std;
class data{
	private:
		int a;
	public:
		void getdata()
		{
			cout<<"Enter data member";
			cin>>a;
		}
	friend int operator >=(data d1,data d2);
	
};
int operator >=(data d1,data d2)
{
	return(d1.a>=d2.a)?true:false;
}
int main()
{
	data c1,c2;
	c1.getdata();
	c2.getdata();
	if(c1>=c2)cout<<"c1 is greater";
	else cout<<"c2 is greater";
	return 0;
}
