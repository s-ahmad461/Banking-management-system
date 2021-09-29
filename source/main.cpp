# include "Tree.h"
# include "admin.h"
# include "staff.h"
# include "customer.h"
# include "string.h"
void boot()
{
	Tree T;
	T.load_Server();
}
int main(){
	void boot();

	int flag=0;
	while (flag != 4)
	{
		cout << "\t\t\t\tYOU want to login as:" << endl << endl;
		cout << "\t\t\t\t\t1-ADMIN" << endl;
		cout << "\t\t\t\t\t2-STAFF" << endl;
		cout << "\t\t\t\t\t3-CUSTOMER" << endl;
		cout << "\t\t\t\t\t4-Exit"<< endl;
		cout << "\t\t\tPress key to continue"<<endl;
		cin >> flag;
		if (flag == 1)
		{
			admin();
		}
		if (flag == 2)
		{
			staff();
		}
		if (flag == 3)
		{
			customer();
		}
		if (flag == 4)
		{
			flag = 4;
		}
	}
	return 0;
}