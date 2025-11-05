#include<iostream>
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
	void operator++()
	{
		n=n+1;
	}
	
};
int main()
{
	count c;
	c.show();
	++c;
	c.show();
}
