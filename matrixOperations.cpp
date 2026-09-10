#include<iostream>
using namespace std;
void addMatrices(int row, int col, int m1[][10], int m2[][10], int result[][10]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
void subtractMatrices(int row, int col, int m1[][10], int m2[][10], int result[][10]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            result[i][j] = m1[i][j] - m2[i][j];
        }
    }
}
void multiplyMatrices(int row1, int col1, int m1[][10], int row2, int col2, int m2[][10], int result[][10]){
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < col1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}
void transposeMatrix(int row, int col, int m[][10], int result[][10]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            result[j][i] = m[i][j];
        }
    }
}
void displayMatrix(int row, int col, int m[][10]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;
    int choice;
    cout<<"Enter the number of rows and columns for Matrix 1: ";
    cin>>rows1>>cols1;
    cout<<"Enter the elements of Matrix 1:\n";
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter the number of rows and columns for Matrix 2: ";
    cin>>rows2>>cols2;
    cout<<"Enter the elements of Matrix 2:\n";
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            cin>>matrix2[i][j];
        }
    }
    cout<<"\nSelect operation to perform: \n";
    cout<<"1. Add Matrices\n2. Subtract Matrices\n3. Multiply Matrices\n4. Transpose Matrix 1\n5. Transpose Matrix 2\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice) {
        case 1:
            if (rows1 == rows2 && cols1 == cols2) {
                addMatrices(rows1, cols1, matrix1, matrix2, result);
                cout << "\nResult of Addition:\n";
                displayMatrix(rows1, cols1, result);
            } 
            else {
                cout << "Addition not possible. Matrices must have the same dimensions.\n";
            }
            break;

        case 2:
            if (rows1 == rows2 && cols1 == cols2) {
                subtractMatrices(rows1, cols1, matrix1, matrix2, result);
                cout << "\nResult of Subtraction:\n";
                displayMatrix(rows1, cols1, result);
            } 
            else {
                cout << "Subtraction not possible. Matrices must have the same dimensions.\n";
            }
            break;

        case 3:
            if (cols1 == rows2) {
                multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                cout << "\nResult of Multiplication:\n";
                displayMatrix(rows1, cols2, result);
            } 
            else {
                cout << "Multiplication not possible. Number of columns in Matrix 1 must equal number of rows in Matrix 2.\n";
            }
            break;

        case 4:
            transposeMatrix(rows1, cols1, matrix1, result);
            cout << "\nTranspose of Matrix 1:\n";
            displayMatrix(cols1, rows1, result);
            break;

        case 5:
            transposeMatrix(rows2, cols2, matrix2, result);
            cout << "\nTranspose of Matrix 2:\n";
            displayMatrix(cols2, rows2, result);
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
