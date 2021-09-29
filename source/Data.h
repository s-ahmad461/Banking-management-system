#pragma once
# include <iostream>
# include <vector>
# include <fstream>
# include <string>
using namespace std;
class Data{
public:
	string name;
	string adress;
	string password;
	int balance;

	Data();
	Data(string, string,string, int);
	
};