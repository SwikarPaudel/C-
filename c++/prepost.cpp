#include<iostream>
class counter{
	private: 
	int count;
	public:
		counter()     //default constructor
		{
			count=0;
		}
		counter(int n)   //paranthesized constructor
		{
			count =n;
		}
		int ret_count()
		{
			return count;
		}
		friend counter operator++(counter &c);   //prefix
		friend counter operator++(counter &c,int); //postfix		
};
	counter operator++(counter &c)
	{
		return(c.count++);
	}
	counter operator++(counter &c,int)
	{
		return (++c.count);
	}
	int main(){
		counter c1,c2;
		std::cout<<"c1:"<<c1.ret_count()<<std::endl;
		std::cout<<"c2:"<<c2.ret_count()<<std::endl;
		c1++;
		++c2;
		std::cout<<"c1:"<<c1.ret_count()<<std::endl;
		std::cout<<"c2:"<<c2.ret_count()<<std::endl;
		return 0;
	}
	
