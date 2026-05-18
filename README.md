[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23939610&assignment_repo_type=AssignmentRepo)
# A77: 2D Array — Sum of Row and Column

**Code your program here:** [https://classroom.github.com/a/GpTOypD2](https://classroom.github.com/a/GpTOypD2)

---

## 3. Elaborate on Errors and Troubleshooting

- Programming algorithms used
- Errors encountered and troubleshooting steps taken
- Error experiences and lessons learned (how you identified and fixed each error)

---

## [Programming Assignment Guide]

**Read the Assignment Directions below, then complete the following main.cpp in your cloned Repository.**

In this assignment, you will complete **findMaxSum()**, **findMaxElm()**, and **findMaxVal()** in main.hpp. The 2D array has 5 columns (NUM_COLS = 5). **Do NOT edit main.cpp.**

Full assignment instructions are embedded below. Read them carefully before coding.

Implementation Hint

| Function 1: void findMaxSum(int result[], int num[][5], int rows, int cols) |
|---|
| • Compute the sum of every row.<br>• Find the row index whose row-sum is the largest.<br>• Copy that row into result[] (so result[j] = num[maxRow][j] for j = 0..cols-1). |

Implementation Hint

| Function 2: void findMaxElm(int result[], int num[][5], int rows, int cols) |
|---|
| • For each row i, find the maximum element of that row.<br>• Store the row's max in result[i].<br>• The result array has length rows. |

Implementation Hint

| Function 3: void findMaxVal(int result[], int num[][5], int rows, int cols) |
|---|
| • Scan every cell to find the global maximum value across the whole 2D array.<br>• Identify the row that contains that maximum value.<br>• Copy that row into result[]. |

**How to compile and run your program:**

- To compile your program in VS Code, open the new terminal (ctrl-`) and type: g++ main.cpp -o main
- To run your program: ./main

**How to test your program:**

- To run all tests: make test
- To run a specific test (e.g., T1): make test ARGS="[T1]"

**[Expected Output]**

*Your output should contain the correct values. The exact wording or formatting may differ — tests check values only, not the entire output.*

Example run on a 6x5 matrix:

```cpp
The row values are:    8    8    7    8    9
The Max values in the rows are:
    9
   10
    9
    9
    9
    3
The row that has the max value     6    1    8   10    4
```

**How to pass the test:**

Test items: **compile, run, T1, T2, T3, T4**

| Test | Input | Expected Values (checked by test) | Points |
|---|---|---|---|
| T1 | findMaxSum on 6x5 reference matrix; on 3x5 with row 1 having max sum | [8,8,7,8,9] and [10,10,10,10,10] | 20 |
| T2 | findMaxElm on the 6x5 reference and a 4x5 mixed matrix | [9,10,9,9,9,3] and [5,7,9,100] | 20 |
| T3 | findMaxVal on the 6x5 reference and on a 3x5 with value 99 in row 2 | [6,1,8,10,4] and [3,1,99,2,4] | 20 |
| T4 | single-row matrix and a uniform-value 3x5 matrix | all three functions return correct row / per-row maxes / chosen row | 20 |

To test your program, type the command in your terminal: make test

**Make sure that your program passes the test and there is ✓ in your GitHub Classroom Repository.**

