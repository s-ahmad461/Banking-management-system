# include<bits/stdc++.h>
# include "Tree.h"

using namespace std;
Tree:: Tree() {}
void Tree:: update_server()
{
	ofstream write;
	write.open("server.txt");
	auto itr=s.begin();
	while(itr!=s.end()){
		write<<*itr<<' '<<mp[*itr].name<<' '<<mp[*itr].adress<<' '<<mp[*itr].password<<' '<<mp[*itr].balance<<endl;
		itr++;
	}
	write.close();
}

void Tree:: load_Server()
{
	ifstream read;
	read.open("server.txt", ios::app);
	string name = "";
	string adress = "";
	int accountno = 0;
	string password ="";
	int balance = 0;
	cin.ignore();
	while (!read.eof())
	{
		read>>accountno>>name>>adress>>password>>balance;
		auto temp=new Data(name,adress,password,balance);
		s.insert(accountno);
		mp[accountno] = *temp;

	}
	read.close();
}

void Tree:: add_Account(string name, string adress, int accountno, string password, int balance)
{
	//Add the entry to BST

	if(s.find(accountno)==s.end()){
		auto temp=new Data(name,adress,password,balance);
		s.insert(accountno);
		mp[accountno]=*temp;
		cout<<"Account added successfully"<<endl;
	}
	else{
		cout<<"This account number is not available"<<endl;
	}
	update_server();
}

void Tree:: delete_Account(int accountno)
{	
	if(s.find(accountno)==s.end())
		cout<<"Account number is not found"<<endl;
	else{
		auto temp=new Data("","","",0);
		mp[accountno]=*temp;
		s.erase(accountno);
		cout<<"Account successfully deleted"<<endl;
		update_server();
	}
}

void Tree:: withdraw(int accountno,int amount)
{
	int availbal=(mp[accountno].balance)-amount;
	cout<<availbal<<endl;
	if(availbal<0)
		cout<<"Insufficient Funds"<<endl;
	else{
		mp[accountno].balance=availbal;
		update_server();
	}
}

void Tree:: deposit(int accountno,int amount)
{
	/*auto itr=s.begin();
	while(itr!=s.end()){
		cout<<*itr<<' ';
		itr++;
	}
	cout<<endl;*/
	if(s.find(accountno)==s.end())
		cout<<"Account number not found"<<endl;
	else{
		mp[accountno].balance=(mp[accountno].balance)+amount;
		update_server();
	}
}

void Tree::editaccount_byAdmin()
{
	//TODO
}

void Tree::transfer(int sender_accountno,int reciever_accountno,int sender_amount)
{
	withdraw(sender_accountno,sender_amount);
	deposit(reciever_accountno,sender_amount);
}

void Tree::transaction_history()
{
	//TODO
}

string Tree:: search(int accountno,string pass)
{
	string temp=mp[accountno].password;
	cout<<temp<<endl;
	//if(temp->password==pass)
		//return "Name ---"+temp->name+"Address ---"+temp->adress+"Balance ---"+to_string(temp->balance);
	return "";
}

void Tree:: printoinfo()
{
	auto itr=s.begin();
	while(itr!=s.end()){
		cout<<*itr<<' '<<"------"<<' '<<mp[*itr].name<<' '<<mp[*itr].adress<<' '<<mp[*itr].balance<<endl;
		itr++;
	}
}

void Tree:: displayPasswords(){
	auto itr=s.begin();
	while (itr!=s.end())
	{
		cout<<*itr<<' '<<"-----"<<' '<<mp[*itr].password<<endl;
		itr++;
	}
	
}