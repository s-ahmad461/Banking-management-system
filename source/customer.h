#include "Tree.h"

void customer()
{
	Tree t;
	
	int condition = 0;
	while (condition != 3)
	{
		cout << "welcome CUSTOMER" << endl;
		cout << "choose the following please" << endl;
		cout << "press 1 to see account details" << endl;
		cout << "press 2 to see transaction history  " << endl;
		cout << "press 3 to exit" << endl;
		cin >> condition;
		if (condition == 1)
		{
			int accountno;
			string pass;
			cout << "please enter account number" << endl;
			cin >> accountno;
			cout << "please enter your password" << endl;
			cin >> pass;
			string temp = t.search(accountno,pass);
			if(temp=="")
			{
				cout<< "No match found !" << endl;
			}
			else{
				cout << "Account Details Are :\t\t\t\t\t\t " << endl << endl;
				cout << temp <<endl;
			}
				
		}
		if (condition == 2)
		{
			// TODO
		}
		if (condition == 3)
		{
			condition = 3;
		}

	}
}