# include "Data.h"
Data:: Data()
{
	name = "";
    adress = "";
    password = "";
    balance = 0;
}
Data:: Data(string name, string adress, string password, int balance)
{
	this->name = name;
	this->adress = adress;
	this->balance = balance;
	this->password = password;
}
