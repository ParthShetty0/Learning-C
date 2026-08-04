# Shopping Cart Simulator in C

A lightweight, terminal-based shopping cart simulator written in C. This program prompts the user to select an item, input its price and desired quantity, and then calculates and displays the total cost.

---

## Features

* Interactive command-line interface.
* Safe string input handling using `fgets` (preventing buffer overflows).
* Automatic cleanup of trailing newline characters from standard input.
* Precise currency formatting.

---

## Prerequisites

To compile and run this program, you need a C compiler installed on your system (such as `gcc`, `clang`, or MSVC).

---

## Getting Started

### 1. Source Code (`cart.c`)

```c
#include <stdio.h>
#include <string.h>

int main(){

    // SHOPPING CART SIMULATOR
    char item[50] = "";
    float price = 0.00f;
    char currency[] = "rs";
    int quantity = 0;

    printf("What would you like to have?\n");
    fgets(item, sizeof(item), stdin);
    
    // Remove the trailing newline character left by fgets, if present
    item[strcspn(item, "\n")] = 0;

    printf("What is the price of the %s?\n", item);
    scanf("%f", &price);

    printf("How many would you like to have?\n");
    scanf("%d", &quantity);

    // Calculate total and print correctly
    float total = price * quantity;
    printf("Your total will be %.2f %s\n", total, currency);

    return 0; 
}
