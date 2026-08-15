# Rock Paper Scissors (C)

A simple command-line Rock, Paper, Scissors game written in C. You play against the computer, which picks its move randomly.

## Features

- Interactive menu-driven user input with input validation (only accepts 1–3)
- Random computer move generation using `rand()` seeded with `time(NULL)`
- Clear round-by-round output showing both choices
- Win / Lose / Tie detection logic

## How It Works

1. The program prompts the user to choose Rock (1), Paper (2), or Scissors (3).
2. The computer randomly selects one of the three options.
3. Both choices are displayed.
4. The winner is determined using standard Rock-Paper-Scissors rules:
   - Rock beats Scissors
   - Scissors beats Paper
   - Paper beats Rock
5. The result (Win, Lose, or Tie) is printed to the console.

## File Structure

| Function             | Description                                              |
|-----------------------|-----------------------------------------------------------|
| `main()`              | Program entry point; orchestrates the game flow           |
| `getuserChoice()`     | Prompts and validates the user's input                    |
| `getcomputerChoice()` | Generates a random choice (1–3) for the computer          |
| `choosewinner()`      | Compares choices and prints the result                    |

## Requirements

- A C compiler (e.g., GCC)

## Build & Run

```bash
gcc -o rps rock_paper_scissors.c
./rps
```

On Windows (using GCC/MinGW):

```bash
gcc -o rps.exe rock_paper_scissors.c
rps.exe
```

## Example Output

```
*** ROCK PAPER SCISSORS ***
Choose appropiate option (1-3)!!
1. ROCK
2. PAPER
3. SCISSOR
Your Option : 1
You choose ROCK !!
Computer choose SCISSOR !!
You WIN !!!!
```

## Notes / Possible Improvements

- Add a loop to allow multiple rounds without restarting the program
- Track and display a running score
- Use an `enum` instead of raw integers (1, 2, 3) for readability
- Add a "quit" option to exit the loop gracefully
- Replace `switch` statements with array lookups (e.g., `const char* names[] = {"", "ROCK", "PAPER", "SCISSOR"}`) to reduce repetition

## License

Free to use and modify for learning purposes.