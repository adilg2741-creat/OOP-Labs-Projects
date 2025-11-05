#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
class classroom{
	private:
	int chairs;
	int windows;
	int board;
	int students;
	public:
	void get_data()
	{
		cout<<"Welcome to the Classroom"<<endl;
		cout<<"How many chairs are there in the Classroom? "<<endl;
		cin>>chairs;
		cout<<"How many windows are there ?"<<endl;
		cin>>windows;
		cout<<"How many Boards ?"<<endl;
		cin>>board;
		cout<<"How many students does it has?"<<endl;
		cin>>students;
		
	}
	void get_output()
	{
		cout<<"There are "<<chairs<<" chairs in the class"<<endl;
		cout<<"There are "<<windows<<" windows in the class"<<endl;
		cout<<"There are "<<board<<" board(s) in the class"<<endl;
		cout<<"There are "<<students<<" students in the class"<<endl;
	}
};
int main()
{
	classroom c;
	c.get_data();
	c.get_output();
}
