#include<iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    cout << "\nSum of two matrices is: \n";
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
            if(j == cols - 1)
                cout << endl;
        }

    return 0;
}