#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;
class student
{
	private:
	string name;
	int roll_no;
	float totalMarks;
	int perc;
	public:
		void get_Display()
		{
			cout<<" Enter name "<<endl;
			getline(cin,name);
			cout<<"Enter roll number"<<endl;
			cin>>roll_no;
			cout<<"Total Marks"<<endl;
			cin>>totalMarks;
			cout<<" Percentage "<<endl;
			perc= (totalMarks/100)*100;
		}
		void show_Display()
		{	
		cout<<"Your name is:"<<endl;
			cout<<name<<endl;
			cout<<"Your roll number: "<<endl;
			cout<<roll_no<<endl;
			cout<<"Total marks are: "<<endl;
			cout<<totalMarks<<endl;
			cout<<"Your percentage is:"<<endl;
			cout<<perc;
		}
	
};

int main()
{
	student s;
	s.get_Display();
	s.show_Display();	
}
