// ClassTest1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void generateBoard();

int row = 0;
int coloum = 0;

int** battleGround;

void outPutBattleGround();


int main()
{
	
	generateBoard();




    std::cout << "Hello World!\n";
}



void generateBoard() {
	cout << "Pleast Enter The Row : " << endl;
	int t_row;
	cin >> t_row;
	row = t_row;
	cout << "The row you entered is: " << t_row <<endl;
	cout << "Pleast Enter The Coloum : " << endl;
	int t_coloum;
	cin >> t_coloum;
	coloum = t_coloum;
	cout << "The coloum you entered is: " << t_coloum << endl;

	/**battleGround = new int[coloum];
	battleGround = new int* [row];*/

	battleGround = new int* [row];
	for (int i = 0; i < row; i++)
	{
		battleGround[i] = new int[coloum];
	}

	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coloum; j++)
		{
			battleGround[i][j] = 0;
		}
	}

	outPutBattleGround();
}

void outPutBattleGround() {

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coloum; j++)
		{
			cout << battleGround[i][j];
		}
		cout << endl;
	}

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
