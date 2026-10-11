#include <iostream>
using namespace std;

const int MAX = 10;

class Matrix {
    int arr[MAX][MAX];

public:
    int rows, coloumns;

    Matrix(int r, int c) {
        rows = r;
        coloumns = c;
    }

    void input() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < coloumns; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < coloumns; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& n) const {
        Matrix temp(rows, coloumns);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < coloumns; j++) {
                temp.arr[i][j] = arr[i][j] + n.arr[i][j];
            }
        }

        return temp;
    }
};

int main() {
    int r, c;

    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;

    if (r <= 0 || c <= 0 || r > MAX || c > MAX) {
        cout << "Invalid dimensions. Enter values between 1 and "
             << MAX << "." << endl;
        return 1;
    }

    Matrix m1(r, c);
    Matrix m2(r, c);

    cout << "\nEnter elements of the first matrix:\n";
    m1.input();

    cout << "\nEnter elements of the second matrix:\n";
    m2.input();

    Matrix m3 = m1 + m2;

    cout << "\nFirst matrix:\n";
    m1.display();

    cout << "\nSecond matrix:\n";
    m2.display();

    cout << "\nSum of the matrices:\n";
    m3.display();

    return 0;
}