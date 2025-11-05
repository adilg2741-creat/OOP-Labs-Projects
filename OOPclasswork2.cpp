#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string.h>
using namespace std;
class count{
	private:
		int n;
	public:
	count()
	{
		n=0;
	}
	void show()
	{
		cout<<"Value of n is: "<<n <<endl;
	}
	void operator++(int) // int tells us we are going to use prefix operator for example obj++ or c++
	{
		n=n+1;
	}
	
};
int main()
{
	count c;
	c.show();
	c++;
	c.show();
}
