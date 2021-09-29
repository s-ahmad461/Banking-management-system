#pragma once
#include "Tree.h"
void staff()
{
	Tree t;
	int condition = 0;
	while (condition != 5)
	{
		cout << "welcome STAFF" << endl;
		cout << "choose the following please" << endl;
		cout << "press 1 to see transaction history  " << endl;
		cout << "press 2 to transfer " << endl;
		cout << "press 3 to withdraw " << endl;
		cout << "press 4 to deposit " << endl;
		cout << "press 5 to exit" << endl;
		cin >> condition;
		if (condition == 1)
		{
			//TODO
		}
		if (condition == 2)
		{
			int senderaccountno = 0, amount = 0, recieveraccountno=0;
			cout << "please enter  sender account number" << endl;
			cin >> senderaccountno;
			cout << "please enter  receiver account number" << endl;
			cin >> recieveraccountno;
			cout << "please enter amount" << endl;
			cin >> amount;
			t.load_Server();
			t.transfer(senderaccountno,recieveraccountno,amount);
		}
		if (condition == 3)  // withdraw
		{
			int accountno = 0, amount = 0;
			cout << "please enter account number" << endl;
			cin >> accountno;
			cout << "please enter amount" << endl;
			cin >> amount;
			t.load_Server();
			t.withdraw(accountno, amount);
			remove("server.txt");
			t.update_server();
		}
		if (condition == 4)
		{
			int accountno = 0, amount = 0;
			cout << "please enter account number" << endl;
			cin >> accountno;
			cout << "please enter amount" << endl;
			cin >> amount;
			t.load_Server();
			t.deposit(accountno, amount);
		}
		if (condition == 5)
		{
			condition = 5;
		}

	}

}