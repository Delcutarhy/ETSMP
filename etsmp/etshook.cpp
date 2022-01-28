#include <iostream>
using namespace std;

int main()
{
	//Variables for cool ppl (unspecified or idk)
	int solmetnumba;
	char start;
	

	cout << "would u like to find your soulmate?" << endl;
	cout << "if yes enter Y" << endl;
	cout << "if no enter N" << endl;

	cin >> start;

	if (start == 'Y' || start == 'y')
	{
		cout << "give da number pls" << endl;

		cin >> solmetnumba;

		if (solmetnumba == 7 || solmetnumba == 19)
		{
			cout << "hello vector's soulmate <3" << endl;
		}

		else if (solmetnumba == 1 || solmetnumba == 0)
		{
			cout << "hello arise's soulmate <3" << endl;
		}
		else if (solmetnumba == 4 || solmetnumba == 9)
		{
			cout << "hello viki's soulmate <3" << endl;
		}
		
		else if (solmetnumba == 36)
		{
			cout << "hello lucas's soulmate <3" << endl;
		}

		else if (solmetnumba == 103)
		{
			cout << "hello simon's soulmate <3" << endl;
		}

		else if (solmetnumba == 69)
		{
			cout << "hello robin's soulmate <3" << endl;
		}

		else
		{
			cout << "ur gonna die alone" << endl;
		}

	}

	else if (start == 'N' || start == 'n')
	{
		cout << "ok bye, have a nice day :) \n\n\n\n\n\n\n";
		cout << "ik where u live u fucker" << endl;

	}

	else
	{
		return 0;
	}


		return 0;
}
