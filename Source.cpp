#include <iostream>
#include <string>
using namespace std;
class user
{
private:
	string name;
	string password;
public:
	double balance = 0;
	user(string a, string b)
	{
		name = a;
		password = b;
	}
	bool checkpassword(string pass)
	{
		if (pass == password)
		{
			cout << "password is correct" << endl;
			return 1;
		}
		else
		{
			cout << "invalid password" << endl;
			return 0;
		}
	}
	bool checkname(string nam)
	{
		if (nam == name)
		{
			cout << "username is correct" << endl;
			return 1;
		}
		else
		{
			cout << "username is invalid" << endl;
			return 0;
		}
	}
	int startmenu()
	{
		cout << "welcome to ATM of ADIL group" << endl;
		cout << "press 1 for balance inquiry" << endl;
		cout << "press 2 for amount deposit" << endl;
		cout << "press 3 for amount withdraw" << endl;
		cout << "press 4 to exit " << endl;
		cout << "enetr your choice 1, 2, 3 or 4" << endl;
		int option;
		cin >> option;
		return option;
	}
};
int main()
{
	user u1 = user("adil", "1234");
	string c =  " ";
	string d =  " ";
	cout << "enter username" << endl;
	cin >> c;
	cout << "enter password" << endl;
	cin >> d;
	if (u1.checkname(c) && u1.checkpassword(d))
	{
	start:
		int i;
		i = u1.startmenu();

		switch (i)
		{
		case 1:
		{
				  cout << "your balance is" << u1.balance << endl;
				  break;
		}
		case 2:
		{
				  cout << "enter amount to deposit" << endl;
				  double dep;
				  cin >> dep;
				  u1.balance += dep;
				  break;
		}
		case 3:
		{
				  cout << "enter amount to withdraw" << endl;
				  double with;
				  cin >> with;
				  if (with > u1.balance)
				  {
					  cout << "insufficient balance" << endl;
				  }
				  else
				  {
					  u1.balance -= with;
				  }
				  break;
		}
		case 4:
			break;
		}
		cout << endl;
		cout << "Thankyou!";
		cout << " so much";
		cout << " for using our atm system" << endl;
		cout << "Our atm system is based upon islamic principles" << endl;
		cout << "would you like to continue" << endl;
		int option;
		cout << "press 1 to continue" << endl;
		cout << "press 2 to exit" << endl;
		cin >> option;
		cout << endl;
		if (option == 1)
		{
			system("cls");
			goto start;
		}
	}
	return 0;
}