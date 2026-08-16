# Simple Banking Program (C)

A console-based banking simulator written in C. It lets a user check their balance, deposit money, and withdraw money through a menu-driven interface.

## Features

- **Check Balance** — displays the current account balance.
- **Deposit Money** — prompts for an amount and adds it to the balance (rejects negative amounts).
- **Withdraw Money** — prompts for an amount and subtracts it from the balance, with checks for negative amounts and insufficient funds.
- **Exit** — ends the program with a thank-you message.

The program runs in a loop, repeatedly showing the menu until the user chooses to exit.

## How It Works

The program is built around three functions plus `main()`:

| Function | Signature | Purpose |
|---|---|---|
| `checkbalance` | `void checkbalance(float balance)` | Prints the current balance. |
| `depoist` | `float depoist()` | Prompts for a deposit amount, validates it, and returns it to be added to the balance. |
| `withdraw` | `float withdraw(float balance)` | Prompts for a withdrawal amount, validates it against the current balance, and returns the amount to be subtracted. |

`main()` holds the account `balance` and drives a `do...while` loop with a `switch` statement that dispatches to the appropriate function based on the user's menu choice.

## Menu Options

```
1. CHECK BALANCE
2. DEPOSIT MONEY
3. WITHDRAW MONEY
4. EXIT
```

## Building and Running

Compile with any standard C compiler, e.g. GCC:

```bash
gcc banking.c -o banking
./banking
```

## Sample Session

```
WELCOME TO OUR BANK

Select Appropiate Option:
1.CHECK BALANCE
2.DEPOIST MONEY
3.WITHDRAW MONEY
4.EXIT
CHOOSE YOUR OPTION :2
ENTER AMOUNT TO DEPOIST : 500
Successfully Depoisted Rs.500.00

Select Appropiate Option:
1.CHECK BALANCE
2.DEPOIST MONEY
3.WITHDRAW MONEY
4.EXIT
CHOOSE YOUR OPTION :1
Your Current Balance is Rs.500.00
```

## Known Issues / Suggested Improvements

- **Missing format argument:** in `withdraw()`, the "Insufficient Balance" message uses `%.2f` but doesn't pass `balance` as an argument to `printf`, so it currently prints garbage instead of the balance. Fix:
  ```c
  printf("Insufficient Balance! Your balance is %.2f\n", balance);
  ```
- **Non-numeric input isn't handled:** `scanf` doesn't validate that the input is actually a number, which can cause an infinite loop of invalid-option messages if the user types letters.
- **Typos in output text:** "Appropiate" → "Appropriate", "Depoist"/"Depoisted" → "Deposit"/"Deposited" (cosmetic only, but worth cleaning up for a polished UI).
- **No persistence:** the balance resets to 0 every time the program restarts, since it isn't saved to a file or database.
- **Single account only:** there's no concept of multiple users, PINs, or authentication.

## License

Free to use and modify for learning purposes.