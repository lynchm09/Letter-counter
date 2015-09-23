#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int option;
	do

	{
		string word;
		cout << "1) Input word" << endl;
		cout << "2) Display number of letters in your word" << endl;
		cout << "3) Exit program" << endl;
		cout << "Please select an option by entering the number before option." << endl;
		cin >> option;

		if (option == 1)
		{
			cout << "Type your word now" << endl;
			cin >> word;
		}
		else if (option == 2)
		{
			cout << word.size() << endl;
		}
		else if (option == 3)
		{
			cout << "See ya!" << endl;
		}
		else
		{
			cout << "Invalid option." << endl;
		}
	
		

	}while (option != 3);

		return 0;
}
