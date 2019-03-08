#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include "MazeGenerator.h"

using namespace std;

int main() 
{
	char r;
	int rowCount = 15;
	int colCount = 15;
	while (1)
	{
		system("color 0a");
		system("cls");
		cout << "\n\n";
		MazeGenerator generator;
		generator.Generate(rowCount, colCount);
		cout << generator.toString(); //Uses a function which prints what is generated by the 'Generate' function
		srand(time(NULL)); // srand compared to rand takes a single argument to determine where the rand num generator starts.
		// We're using the argument from a library called ctime and it's time(NULL) which updates it's value every second, therefore randomising the number generation.
		for (int i = 0; i < rowCount; i++)
		{
			
			for (int j = 0; j < colCount; j++)
			{
				int no = rand() % 2; //Randomly generates number below specified number. 0 = unblocked. 1 = blocked
				if (no == 0)
				{
					int min = no;
					cout << min << " ";
				}
				else
				{
					int max = no;
					cout << max << " ";
				}
			}
			cout << "\n";
		}
		cout << "\n\n\n\n\nPress Any Key To Rerun Program.\n\nPress Q To Quit.\n>";
		std::cin >> r;
		if (r == 'q' || r == 'Q')
		{ 
			break;
		}
	}
	//system("pause");
	return 0;
}