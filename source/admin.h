#pragma once
#include "Tree.h"
void admin()
{
	Tree t;

	int condition = 0;
	while (condition != 6)
	{
		cout << "welcome ADMIN" << endl;
		cout << "choose the following please" << endl;
		cout << "press 1 to add account " << endl;
		cout << "press 2 to delete account " << endl;
		cout << "press 3 to check all account " << endl;
		cout << "press 4 to see password of account " << endl;
		cout << "press 5 to edit account " << endl;
		cout << "press 6 to exit" << endl;
		cin >> condition;
		if (condition == 1)
		{
			t.load_Server();
			string n = "", a = "",p="";
			int acc, b;
			cout << "enter name" << endl;
			cin >> n;
			cout << "enter adress" << endl;
			cin >> a;
			cout << "enter account number" << endl;
			cin >> acc;
			cout << "enter password" << endl;
			cin >> p;
			cout << "enter balance" << endl;
			cin >> b;
			t.add_Account(n, a, acc, p, b);
		}
		if (condition == 2)
		{
			int acc = 0;
			cout << "enter account number" << endl;
			cin >> acc;
			t.load_Server();

			// Delete from BST
			t.delete_Account(acc);
			cout << "Deleted from BST" << endl;


			//Update the server.txt file
			remove("server.txt");
			t.update_server();

			cout << "Database files updated" << endl;

		}
		if (condition == 3)
		{
			// Load the data from server.txt to the BST;
			t.load_Server();
			
			// Print the data of BST
			t.printoinfo();
		}
		if (condition == 4)
		{
			t.displayPasswords();
		}
		if (condition == 5)
		{

		}
		if (condition == 6)
		{
			condition = 6;
		}
	}
}