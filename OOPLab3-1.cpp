#include<iostream>
#include<string.h>
using namespace std;
class student{
	
	private:
	string name;
	int age;
	public:
	student()
	{
		name="Omar";
		age=21;
	}
	student(string n, int a)
	{
		name=n;
		age=a;
	}
	student(const student &s)
	{
		name=s.name;
		age=s.age;
	}
	void show()
	{
		cout<<"Your name is "<<name<<endl;
		cout<<"Your age is "<<age<<endl;
	}
};
int main()
{
	student s1;
	student s2("ahmed",19);
	student s3=s2;
	s1.show();
	s2.show();
	s3.show();
}
