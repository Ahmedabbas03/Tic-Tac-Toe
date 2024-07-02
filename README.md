# Tic-Tac-Toe in C++

This is a simple command-line Tic-Tac-Toe game implemented in C++. Two players take turns to mark the cells in a 3×3 grid with X and O. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.

## Getting Started

These instructions will help you set up and run the game on your local machine.

### Prerequisites

- A C++ compiler (e.g., g++, clang)

### Running the Game

1. Clone the repository to your local machine.

   ```bash
   git clone https://github.com/your-username/tic-tac-toe.git
   ```

2. Navigate to the project directory.

   ```bash
   cd tic-tac-toe
   ```

3. Compile the code.

   ```bash
   g++ -o tic-tac-toe main.cpp
   ```

4. Run the game.

   ```bash
   ./tic-tac-toe
   ```

## How to Play

- The game board is a 3x3 grid.
- Players take turns to place their mark (X or O) on an empty cell.
- To place a mark, enter the row and column numbers when prompted.
- The game ends when there is a winner or all cells are filled.

## Code Overview

The main parts of the code are:

- **Board Initialization**: The board is initialized as a 3x3 array filled with spaces.
- **Player Turn Management**: The game alternates turns between player X and player O.
- **Input Validation**: Ensures that player input is within the valid range and the chosen cell is empty.
- **Winner Checking**: After each turn, the code checks for a winning combination in rows, columns, and diagonals.
- **Game End**: The game ends when there is a winner or the board is full, and the result is displayed.

## Example Gameplay

```
   |   |   
   |   |   
___|___|___
   |   |   
   |   |   
___|___|___
   |   |   
   |   |   
   |   |   

Current Player is X
Enter r c from 0-2 for row and column: 1 1

   |   |   
   |   |   
___|___|___
   |   |   
   | X |   
___|___|___
   |   |   
   |   |   
   |   |   
```

## Contributing

If you have suggestions for improvements, feel free to fork the repository and create a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

Enjoy the game!
