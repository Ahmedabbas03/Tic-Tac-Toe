#include <iostream>
#include <string>
using namespace std;

int main()
{
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

    // Create players
    const char playerX = 'X';
    const char playerO = 'O';
    char currentPlayer = playerX;
    int r = -1; // default value -1 means player has not made a decision
    int c = -1;
    char winner = ' ';

    // Iterate for 9 turns or until there's a winner
    for (int i = 0; i < 9; i++)
    {
        // Display the board
        cout << "   |   |   " << endl;
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
        cout << "   |   |   " << endl;

        // Check if there's a winner
        if (winner != ' ')
        {
            break;
        }

        // Get user input
        cout << "Current Player is " << currentPlayer << endl;
        while (true)
        {
            cout << "Enter r c from 0-2 for row and column: ";
            cin >> r >> c;

            // Check if values are in range of 0 and 2
            if (r < 0 || r > 2 || c < 0 || c > 2)
            {
                cout << "Invalid input, try again!" << endl;
            }
            // If not white space, tile already has a value
            else if (board[r][c] != ' ')
            {
                cout << "Tile is full, try again!" << endl;
            }
            else
            {
                // Break if we don't have these 2 issues
                break;
            }
            // reset input buffer
            cin.clear();             // clear error flags
            cin.ignore(10000, '\n'); // discard values
        }

        // Place the current player's mark on the board
        board[r][c] = currentPlayer;
        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;

        // check for winners

        // rows - horizontal
        for (int row = 0; row < 3; row++)
        {
            if (board[row][0] != ' ' && board[row][0] == board[row][1] && board[row][1] == board[row][2])
            {
                winner = board[row][0];
                break;
            }
        }

        // columns - vertical
        for (int col = 0; col < 3; col++)
        {
            if (board[0][col] != ' ' && board[0][col] == board[1][col] && board[1][col] == board[2][col])
            {
                winner = board[0][col];
                break;
            }
        }

        // diagonals
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            winner = board[0][0];
        }
        else if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            winner = board[0][2];
        }
    }
    // declare the winner
    if (winner != ' ')
    {
        cout << "Player " << winner << " is the winner!" << endl;
    }
    else
    {
        cout << "Tie!" << endl;
    }
}
