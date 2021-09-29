#pragma once
# include "Data.h"
# include <bits/stdc++.h>
class Tree
{
	//vector <int> v;
public:
	Tree();
	void add_Account(string, string,int, string, int);
	void delete_Account(int);
	void withdraw(int,int);
	void deposit(int,int);
	void editaccount_byAdmin();
	void transfer(int,int,int);
	void transaction_history();
	void load_Server();
	void update_server();
	string search(int,string);
	void printoinfo();
	void displayPasswords();
private:
	unordered_map<int,Data> mp;
	set<int> s;
};