#include <iostream>

using namespace std;

int main()
{
	int rows, columns;
	cout << "Row size: ";
	cin >> rows;
	
	cout << "Column size: ";
	cin >> columns;
	
	int board[rows][columns];
	
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			cout << "R" << (row+1) << "C" << column+1 << ": ";
			cin >> board[row][column];
		}
	}

    int totalSum = 0;

    for (int row = 0; row < rows; row++)
	{
        int rowSum = 0;

		for (int column = 0; column < columns; column++)
		{
			cout << board[row][column] << " ";
            rowSum += board[row][column];
		}

        totalSum += rowSum * (row + 1);
        cout << endl;
	}

    cout << "Total: " << totalSum << "\n\n\n\n";
	
	return 0;
}
