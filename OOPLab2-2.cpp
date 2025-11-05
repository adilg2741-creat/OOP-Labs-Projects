#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;
class rectangle{
	private:
		int length;
		int width;
		public:
		rectangle()
		{
			length=width=5;
		}
		rectangle(int len,int wid)
		{
			length=len;
			width=wid;
			int area=len*wid;
		}
		void show_area()
		{
			int area=length*width;
			cout<<"area is equal to :"<<area<<endl;
		}
		~rectangle()
		{
			cout<<"Destructor"<<endl;
		}
};
int main()
{
	rectangle r1;
	rectangle r2(2,5);
	r1.show_area();
	r2.show_area();
}
