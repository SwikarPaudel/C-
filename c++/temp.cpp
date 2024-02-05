#include<iostream>
class temperature{
	public:
		float &temp(float &a,float &b)
		{
			if(a>b)
			{
				return a;
			}
			else 
			{
				return b;
			}
		}
	
};
int main()
{
	temperature degree;
	float temp1,temp2,t;
	std::cout<<"Enter two temperature";
	std::cin>>temp1>>temp2;
	t=degree.temp(temp1,temp2);
	degree.temp(temp1,temp2)=100;
	std::cout<<temp1<<std::endl<<temp2;
	return 0;
}
