#include <iostream>
#include <string>
using namespace std;
class student
{
private:
	string name;
	int age;
	double middlegrade;
public:
	
	student(string name,int age,double middlegrade)
	{
		this->name = name;
		this->age = age;
		this->middlegrade = middlegrade;
	}
	string get_name()
	{
		return name;
	}
	int get_age()
	{
		return age;
	}
	double get_middlegrade()
	{
		return middlegrade;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	void set_age(int age)
	{
		this->age = age;
	}
	void set_middlegrade(double middlegrade)
	{
		this->middlegrade = middlegrade;
	}
};
int main()
{
	
	int age;
	double middlegrade;
	string name;
	int choise;
	bool flag=true;
	cout << "\n   Enter your name : \n";
	cin >> name;
	system("cls");
	cout << "\n   Enter your age : \n";
	cin >> age;
	system("cls");
	cout << "\n   Enter your middlegrade : \n";
	cin >> middlegrade;
	system("cls");
	student human1(name, age, middlegrade);
	cout << "\n   Would you like to see your parametres? \n";
	cin >> choise;
	if (choise == 1)
	{
		
		
		while (flag ==1)
		{
			cout << "\n   Would you like to see?\n";
			cout << "\n   1.name\n";
			cout << "\n   2.age\n";
			cout << "\n   3.middlegrade\n";
			cin >> choise;
			system("cls");

			switch (choise)
			{
			case 1:
				cout << human1.get_name() << endl;
				break;
			case 2:
				cout << human1.get_age() << endl;
				break;
			case 3:
				cout << human1.get_middlegrade() << endl;
				break;

			default:
				break;
			}
			cout<<"\n   Would you like to see yep?\n";
			cout << "\n   1.yes\n";
			cout << "\n   0.no\n";
			cin >> flag;
			system("cls");
		}

	}
	else return 0;

}