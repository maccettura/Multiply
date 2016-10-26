// Source.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	srand(time(0));
	string name = " ";

	int response, i, c, qnum, correct;
	qnum = 0;
	correct = 0;

	cout << "Welcome to MULTIPLY!\n";
	cout << "What is your name?\n";
	cin >> name;
	cout << "Hello " << name << ", are you ready?\n";
	system("pause");
	system("cls");

	do {
		cout << "MULTIPLY will teach you your multiplication tables!" << endl
			<< "What would you like to do " << name << " ?" << endl
			<< "1.) Study multiplication table" << endl
			<< "2.) Take quiz" << endl
			<< "3.) Quit" << endl;
		cin >> response;

		if (response == 1)
		{
			system("cls");
			cout << "Multiplication table:\n"
				<< "  1\t2\t3\t4\t5\t6\t7\t8\t9\n"
				<< "---------------------------------------------------------"
				<< "---------\n";

			for (c = 1; c < 10; c++)
			{
				cout << c << "| ";
				for (i = 1; i < 10; i++)
				{
					cout << i * c << '\t';
				}
				cout << endl;
			}
			system("pause");
			system("cls");
		}


		else if (response == 2)
		{
			system("cls");
			int guess = 0;
			int x = (rand() % 10 + 1);
			int y = (rand() % 10 + 1);
			int answer = (x*y);


			cout << "Are you ready?\n";
			system("pause");
			system("cls");


			do
			{
				int guess = 0;
				int x = (rand() % 10 + 1);
				int y = (rand() % 10 + 1);
				int answer = (x*y);
				qnum++;

				cout << x << " * " << y << " ?\n";
				cin >> guess;
				if (guess != answer)
					cout << "Incorrect!\n";
				if (guess == answer)
				{
					correct++;
					cout << "Great job!\n";
				}
				if (qnum >= 10)
				{
					cout << "You got " << correct << " out of 10!\n" << endl << endl;
				}

				system("pause");
				system("cls");
			} while (qnum < 10);
			break;
		}

	} while ((response > 1) || (response < 3));
}

