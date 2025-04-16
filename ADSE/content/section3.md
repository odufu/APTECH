Absolutely Joel! Here's a **comprehensive C Programming course** focusing on **Data Types**, **`printf`**, and **Functions**. This course is structured at **three complexity levels**: Basic, Intermediate, and Advanced. It includes:

- **Explanation**
- **Examples**
- **Classwork/Exercises**
- **Assignments**

Finally, it ends with a **Quadratic Equation Solver** program that encapsulates the logic in a function.

---

## 📘 C Programming Mini Course

---

## 🧱 **1. BASIC LEVEL**

### 📌 Topics:
- Basic Data Types (`int`, `float`, `char`)
- `printf()` function
- Writing and calling simple functions

---

### 🔎 Explanation:

#### ✅ Data Types:
- `int`: Used for whole numbers. E.g., `int age = 25;`
- `float`: Used for decimal numbers. E.g., `float salary = 1200.50;`
- `char`: Used to store a single character. E.g., `char grade = 'A';`

#### ✅ `printf()`:
Used to print output to the screen.

Example:
```c
printf("Age is: %d", age);
```
- `%d` for `int`
- `%f` for `float`
- `%c` for `char`

#### ✅ Functions:
```c
void greet() {
    printf("Hello, C Programmer!\n");
}
```

Call the function like this:
```c
greet();
```

---

### 🧪 Examples:
```c
#include <stdio.h>

void greet() {
    printf("Welcome to C Programming!\n");
}

int main() {
    int age = 20;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    greet();

    return 0;
}
```

---

### 📝 Class Work:
1. Declare and print your name (as a string), age (int), and GPA (float).
2. Write a function that prints "I love coding in C!".

---

### 🧠 Assignment:
- Write a program that declares your favorite number, your height, and the first letter of your name. Print all using `printf()`.
- Create a function that prints your full name.

---

## 🏗️ **2. INTERMEDIATE LEVEL**

### 📌 Topics:
- Function with return values
- Function parameters
- More formatting in `printf`

---

### 🔎 Explanation:

#### ✅ Functions with Parameters:
```c
void greetUser(char name[]) {
    printf("Hello, %s!\n", name);
}
```

#### ✅ Function with Return Value:
```c
int add(int a, int b) {
    return a + b;
}
```

#### ✅ Print Formatting:
```c
printf("Price: $%.2f\n", 25.5);
```

---

### 🧪 Example:
```c
#include <stdio.h>

int square(int num) {
    return num * num;
}

void printDetails(char name[], int age) {
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
}

int main() {
    printDetails("Joel", 30);
    int result = square(5);
    printf("Square of 5: %d\n", result);
    return 0;
}
```

---

### 📝 Class Work:
1. Create a function `multiply(int a, int b)` that returns the product.
2. Write a function that prints your name and address using parameters.

---

### 🧠 Assignment:
- Write a function that converts Celsius to Fahrenheit and returns the result.
- Write a function that calculates the area of a rectangle (length × width) and returns it.

---

## 🚀 **3. ADVANCED LEVEL**

### 📌 Topics:
- Function that returns multiple values (via pointers)
- Understanding scope (local/global)
- Creating a utility function (e.g., calculator, quadratic solver)

---

### 🔎 Explanation:

#### ✅ Return Multiple Values via Pointers:
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

#### ✅ Scope:
Variables declared inside a function are local to that function.

---

### 🧪 Example: Swap Two Numbers
```c
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    return 0;
}
```

---

### 📝 Class Work:
1. Create a function that takes 3 numbers and returns the largest.
2. Create a function that calculates simple interest.

---

### 🧠 Assignment:
- Build a calculator function that handles +, -, ×, ÷
- Create a function that computes the perimeter and area of a circle using radius as input.

---

## 🧮 QUADRATIC EQUATION SOLVER (FINAL PROJECT)

### 🧠 Formula:
For `ax² + bx + c = 0`, the roots are:
```text
x = (-b ± √(b² - 4ac)) / 2a
```

---

### ✅ Code:

```c
#include <stdio.h>
#include <math.h>

// Function to calculate quadratic roots
void solveQuadratic(float a, float b, float c) {
    float discriminant = b*b - 4*a*c;
    float root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Two Real Roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("One Real Root: %.2f\n", root1);
    } else {
        float realPart = -b / (2*a);
        float imagPart = sqrt(-discriminant) / (2*a);
        printf("Complex Roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}

// Main function
int main() {
    float a, b, c;
    printf("Enter coefficients a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);

    solveQuadratic(a, b, c);

    return 0;
}
```

---

### ✅ Sample Run:
```
Enter coefficients a, b and c:
1 -3 2
Two Real Roots: 2.00 and 1.00
```

---
Great question, Joel! Let's break it down clearly:

---

## ✅ Are there only **three primitive data types** in C?

No — **C has more than three primitive data types**. Here's a better classification.

---

### 🔹 **C Primitive Data Types:**

| Type     | Keyword(s)           | Description                              |
|----------|----------------------|------------------------------------------|
| **Integer** | `int`, `short`, `long`, `long long` | Whole numbers (positive/negative)       |
| **Floating Point** | `float`, `double`, `long double` | Decimal numbers                        |
| **Character** | `char`              | Single character (stored as 1 byte)      |
| **Void** | `void`              | No value (e.g., functions that return nothing) |

So we can say:

🔑 **Primitive types in C** include:
- `int`
- `float`
- `double`
- `char`
- `void`

---

## 🔍 How does C handle...

---

### 1. ✅ **Strings**

C **does not** have a `string` data type like Python or JavaScript.

Instead, C uses:
```c
char str[] = "Joel";
```

- Strings in C are **arrays of characters** terminated by the **null character `'\0'`**.

**Example:**
```c
char name[6] = "Joel";  // Stored as 'J' 'o' 'e' 'l' '\0'
```

Alternatively:
```c
char name[] = {'J', 'o', 'e', 'l', '\0'};
```

To manipulate strings, use functions from the `string.h` library like:
- `strlen()`, `strcpy()`, `strcmp()`, `strcat()`

---

### 2. ⚠️ **Null**

In C:

- `NULL` is a **macro** used to represent **a null pointer**, i.e., a pointer that doesn’t point to anything.

```c
int *ptr = NULL;
```

- This is **not the same** as JavaScript `null`, which can apply to any type.
- In C, `NULL` is used only for **pointers**.

---

### 3. 🚫 **Undefined**

- **C does not have a defined "undefined"** value like JavaScript.

But:
- In C, a variable that is declared but **not initialized** has an **undefined value** (i.e., garbage in memory).

```c
int x; // value is undefined (random)
```

- Accessing such a value is **undefined behavior** — should be avoided.

---

### 4. 🟢 **Boolean**

- C99 introduced `_Bool` and `stdbool.h` for boolean values.

Include the header:

```c
#include <stdbool.h>
```

Then use:
```c
bool isActive = true;
if (isActive) {
    printf("It's active!\n");
}
```

Without `stdbool.h`, people often use `int` for booleans:

```c
int isActive = 1;  // true
int isAlive = 0;   // false
```

---

## 🔚 Summary Table

| Concept       | C Equivalent               | Notes                                      |
|---------------|----------------------------|--------------------------------------------|
| `string`      | `char[]`                   | Array of characters, null-terminated       |
| `null`        | `NULL`                     | Used for pointers                          |
| `undefined`   | Uninitialized variable     | Unsafe; contains garbage value             |
| `boolean`     | `_Bool`, `bool` (C99+)     | `true` and `false` via `stdbool.h`         |

---


Absolutely Joel! Here's a **detailed course-style breakdown** for each **C data type and concept**: `int`, `float`, `char`, `string`, `NULL`, `undefined`, and `boolean`. For each, you’ll get:

- ✅ **Explanation**
- 💡 **Examples**
- 🧪 **Classwork** at:
  - Basic level
  - Intermediate level
  - Advanced level

---

# 📘 C Programming Deep Dive: Data Types & Concepts

---

## 🔢 **1. INT (Integer)**

### ✅ Explanation:
- Stores **whole numbers** (positive or negative)
- Declared with `int`
- Size: typically 4 bytes

### 💡 Example:
```c
int age = 25;
```

---

### 🧪 Classwork:

#### 🟢 Basic:
- Declare two `int` variables `x = 10`, `y = 20`, and print their sum.

#### 🟡 Intermediate:
- Create a function `add(int a, int b)` that returns their sum.

#### 🔴 Advanced:
- Write a program that checks if an integer is **even or odd** using a function.

---

## 🔣 **2. FLOAT**

### ✅ Explanation:
- Stores **decimal numbers**
- Declared with `float` or `double` (for higher precision)

### 💡 Example:
```c
float pi = 3.14;
```

---

### 🧪 Classwork:

#### 🟢 Basic:
- Declare a `float` and print it with **2 decimal places**.

#### 🟡 Intermediate:
- Function `float celsiusToFahrenheit(float c)` to convert temperature.

#### 🔴 Advanced:
- Program to calculate the average of N float numbers input by user using arrays.

---

## 🔠 **3. CHAR**

### ✅ Explanation:
- Stores **a single character** (e.g., 'A', 'Z', '9')
- Enclosed in **single quotes**

### 💡 Example:
```c
char grade = 'A';
```

---

### 🧪 Classwork:

#### 🟢 Basic:
- Declare and print a `char` variable.

#### 🟡 Intermediate:
- Write a function `isVowel(char c)` that returns true if `c` is a vowel.

#### 🔴 Advanced:
- Convert a lowercase letter to uppercase using ASCII math.

---

## 🧵 **4. STRING (char arrays)**

### ✅ Explanation:
- C doesn't have a native `string` type.
- Strings are **arrays of characters** ending with `\0` (null terminator).

### 💡 Example:
```c
char name[] = "Joel";
```

---

### 🧪 Classwork:

#### 🟢 Basic:
- Declare and print your name.

#### 🟡 Intermediate:
- Write a function `int stringLength(char str[])` that returns string length without using `strlen()`.

#### 🔴 Advanced:
- Create a program that takes two strings and concatenates them.

---

## 🕳️ **5. NULL (Pointer Concept)**

### ✅ Explanation:
- Used to **initialize a pointer** that doesn’t yet point to anything.
- Prevents **dangling pointers**

### 💡 Example:
```c
int *ptr = NULL;
```

---

### 🧪 Classwork:

#### 🟢 Basic:
- Declare a pointer and assign it `NULL`. Print the address.

#### 🟡 Intermediate:
- Check if pointer is NULL before using it to avoid errors.

#### 🔴 Advanced:
- Write a function that returns `NULL` if memory allocation fails (`malloc`), and handle it gracefully.

---

## 🚫 **6. Undefined (Uninitialized Variables)**

### ✅ Explanation:
- In C, variables declared without initialization may have **random garbage values**.
- **Never** use a variable without initializing it.

### 💡 Example:
```c
int x;  // undefined value
printf("%d", x); // unpredictable!
```

---

### 🧪 Classwork:

#### 🟢 Basic:
- Declare an `int` and initialize it before using.

#### 🟡 Intermediate:
- Declare a function that accepts an `int`, checks if it's initialized using logic (e.g., compare to 0 or a default value).

#### 🔴 Advanced:
- Write a safe input function that prompts user to enter a number and verifies input before using it.

---

## 🔘 **7. Boolean (`_Bool`, `stdbool.h`)**

### ✅ Explanation:
- C (from C99) allows `bool` using `#include <stdbool.h>`
- Values: `true`, `false`

### 💡 Example:
```c
#include <stdbool.h>
bool isOnline = true;
```

---

### 🧪 Classwork:

#### 🟢 Basic:
- Declare a `bool` and print a message if it's `true`.

#### 🟡 Intermediate:
- Function `bool isEven(int num)` returns true if number is even.

#### 🔴 Advanced:
- Simulate user login: use `bool` to track login status, and check credentials.

---

## 💻 Want the Practical Program?

Here's a **mini-challenge combining types**:

```c
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void greetUser(char name[], int age, bool isMember) {
    printf("Welcome %s, age: %d\n", name, age);
    if (isMember)
        printf("You are a registered member!\n");
    else
        printf("You are not a member yet.\n");
}

int main() {
    char name[20] = "Joel";
    int age = 28;
    bool isMember = true;

    greetUser(name, age, isMember);

    return 0;
}
```

---