#include<iostream>
using namespace std;
class temperature{
	float celsius;
	public:
	temperature()
	{
		celsius=0;
	}
	temperature(float f)
	{
		 celsius=(5/9)*(f-32);
		
		
	}
	void display()
	{
	cout<<celsius;	
	}
};
	int main()
	{
		temperature t;
		float fahrenheit;
		cout<<"Enter temperature in fahrenheit=";
		cin>>fahrenheit;
		t=temperature(fahrenheit);
		cout<<"Temperature in celsius="
		t.display();;
	
	return 0;	
	}
