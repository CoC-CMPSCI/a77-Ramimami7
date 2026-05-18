#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 10;
const int NUM_ROWS = 6;
const int NUM_COLS = 5;

void findMaxSum(int result[], int num[][NUM_COLS], int rows, int cols);
void findMaxElm(int result[], int num[][NUM_COLS], int rows, int cols);
void findMaxVal(int result[], int num[][NUM_COLS], int rows, int cols);

void findMaxSum(int result[], int num[][NUM_COLS], int rows, int cols)
{
    int maxSum = num[0][0];
    int maxRow = 0;

    for (int r = 0; r < rows; r++) {
        int sum = 0;
        for (int c = 0; c < cols; c++) {
            sum += num[r][c];
        }
        if (sum > maxSum || r == 0) {
            maxSum = sum;
            maxRow = r;
        }
    }

    // Copy the row with the largest sum into result
    for (int c = 0; c < cols; c++) {
        result[c] = num[maxRow][c];
    }
}

void findMaxElm(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // For each row, store the maximum element in result[i]
    for (int r = 0; r < rows; r++) {
        int maxVal = num[r][0];
        for (int c = 1; c < cols; c++) {
            if (num[r][c] > maxVal) {
                maxVal = num[r][c];
            }
        }
        result[r] = maxVal;
    }
}

void findMaxVal(int result[], int num[][NUM_COLS], int rows, int cols)
{
    int globalMax = num[0][0];
    int maxRow = 0;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (num[r][c] > globalMax) {
                globalMax = num[r][c];
                maxRow = r;
            }
        }
    }

    // Copy the row containing the global maximum into result
    for (int c = 0; c < cols; c++) {
        result[c] = num[maxRow][c];
    }
}

#endif