# Shopping Cart Simulator

A simple console-based shopping cart calculator written in C. The program takes an item name, its unit price, and the desired quantity from the user, then computes and displays the formatted total cost in rupees (`rs`).

## Features
* **Custom Item Entry:** Reads multi-word item names safely using `fgets()`.
* **Dynamic Cost Calculation:** Multiplies unit price by quantity to calculate the exact bill amount.
* **Formatted Output:** Outputs the final amount with 2 decimal precision (`%.2f`).

## Prerequisites
To compile and run this program, you will need a standard C compiler installed (such as GCC, Clang, or MSVC).

## How to Compile and Run

1. **Save the code:** Save your C source file as `shopping_cart.c`.
2. **Open your terminal / command prompt:** Navigate to the folder containing the file.
3. **Compile the code:**
   ```bash
   gcc shopping_cart.c -o shopping_cart