#include <iostream>
#include<string>
#include <ctime>
#include<Windows.h>

using namespace std;

void driving()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "- "; 
		Sleep(500);
	}system("cls");
}
class car
{
private:
	double time;
	int speed;
	string mark;
	string model;
	int year_of_issue;
	int top_speed;
public:
	
		car(string mark,string model,int year_of_issue,int top_speed)
		{
			this ->mark = mark;
			this->model = model;
			this->year_of_issue = year_of_issue;
			this->top_speed = top_speed;
		}
		string getmark()
		{return mark;}
		string getmodel()
		{ return model; }
		int getyear_of_issue()
		{ return year_of_issue; }
		int gettop_speed()
		{ return top_speed; }

		void setmark(string mark) 
		{ this->mark = mark; }
		void setmodel(string model)
		{ this->model = model; }
		void setyear_of_issue(int year_of_issue)
		{ this->year_of_issue = year_of_issue; }
		void settop_speed(int top_speed) 
		{ this->top_speed = top_speed; }

		double getdistance(double times, int speed)
		{

			return times * speed/3600;
		}
	
};
int main()
{
	int choise, setspeed;;
	car automobile("audi", "a6", 2006, 250);
	cout << "parameteres of your car:\nmodel:" << automobile.getmodel() << "\nmark:" << automobile.getmark() <<
		"\nyear of issue:" << automobile.getyear_of_issue() << "\ntop speed:" << automobile.gettop_speed();
	cout << "\nwould you like to start drive?\n";
	cin >> choise;
	system("cls");
	if (choise == 1)
	{
		link:
		cout << "what the speed do you want to set?\n";
		cin >> setspeed;
		if (setspeed>automobile.gettop_speed())
		{
			cout << "your top speed is " << automobile.gettop_speed() << " you cant set this value,try again\n";
			cin >> choise;
			system("cls");
			goto link;
		}
		unsigned int start_time = clock(); 
		cout << "enter stop if you want to stop" << endl;
		cin >> choise;
		system("cls");
		unsigned int end_time = clock(); 
		unsigned int search_time = end_time - start_time;
		cout <<"you drived:" <<search_time/1000 <<" sec"<< endl;
		cout << "your distance is: " << automobile.getdistance(search_time, setspeed) <<" meters" <<endl;
		return 0;
	}
	else return 0;
	
}
