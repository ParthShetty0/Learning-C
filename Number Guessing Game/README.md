# 🎯 Number Guessing Game (C)

A simple command-line game written in C where the program picks a random number between **1 and 100**, and the player has to guess it. After each guess, the program tells the player whether their guess was too high or too low, and keeps count of how many tries it took to win.

---

## 📋 How It Works

1. The program generates a random number between `min` (1) and `max` (100).
2. The player is repeatedly asked to guess the number.
3. After each guess:
   - If the guess is **lower** than the answer → prints `Too Low !!`
   - If the guess is **higher** than the answer → prints `Too High`
   - If the guess is **correct** → the loop ends
4. Once the correct number is guessed, the program prints:
   - The correct answer
   - The total number of tries it took

---

## 🛠️ Requirements

- A C compiler (e.g. `gcc`)
- Works on Windows, macOS, or Linux terminals

---

## ▶️ How to Compile & Run

```bash
# Compile
gcc guessing_game.c -o guessing_game

# Run
./guessing_game
```

On Windows (using gcc via MinGW):
```bash
gcc guessing_game.c -o guessing_game.exe
guessing_game.exe
```

---

## 🧠 Code Walkthrough

### 1. Seeding the random number generator
```c
srand(time(NULL));
```
`rand()` on its own produces the *same* sequence of numbers every time you run the program. `srand(time(NULL))` "seeds" the random number generator using the current time, so you get a different sequence each run.

### 2. Generating the random answer
```c
int answer = (rand() % (max - min + 1)) + min;
```
- `rand()` generates a large random number.
- `% (max - min + 1)` shrinks it down to fit within the number of values in your range (`100 - 1 + 1 = 100` possible values).
- `+ min` shifts that result up so it starts at `1` instead of `0`.

Result: a random number between `1` and `100`, inclusive.

### 3. The guessing loop
```c
do {
    ...
} while(guess != answer);
```
A `do...while` loop is used here because you always want to ask for **at least one guess** before checking whether the game should stop. It keeps looping — asking for another guess — as long as the guess is not equal to the answer.

### 4. Counting tries
```c
tries++;
```
This increases the `tries` counter by 1 every time the loop runs (i.e., every time the player submits a guess). By the end of the game, `tries` holds the total number of guesses the player made.

### 5. Feedback per guess
```c
if(guess < answer){
    printf("Too Low !!\n");
}
else if(guess > answer){
    printf("Too High\n");
}
else{
    printf("Correct!!\n");
}
```
Simple comparison logic to guide the player closer to the answer.

---

## 🚀 Possible Improvements

- Fix the missing `%d` format specifier in the "Correct!!" message so it also prints the answer at that point.
- Add input validation (currently, entering non-numeric input can break the loop).
- Add a maximum number of allowed tries (e.g., "Game Over" after 10 wrong guesses).
- Let the player choose the difficulty (range of numbers, e.g. 1–50 vs 1–1000).
- Add a play-again option using another loop around `main()`'s logic.

---

## 📄 License

Free to use and modify for learning purposes.