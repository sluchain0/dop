#include <iostream>
#include <string>
#include <string>
using namespace std;

void Rook(int matrix[][8], int x, int y) {
    matrix[x][y] = 2;
    for (int i = 0; i < 8; i++) {
        if (i != x) {
            matrix[i][y] = 1;
        }
    }
    for (int i = 0; i < 8; i++) {
        if (i != y) {
            matrix[x][i] = 1;
        }
    }
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            cout << matrix[j][i] << " ";
        }
        cout << '\n';
    }

}

void Pawn(int matrix[][8], int x, int y) {
    matrix[x][y] = 2;
    matrix[x+1][y] = 1;
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            cout << matrix[j][i] << " ";
        }
        cout << '\n';
    }
}

void Bishop(int matrix[][8], int x, int y) {
    matrix[x][y] = 2;
    for (int i = 1; (x + i) < 8 && (y + i) < 8; i++) {
        matrix[x + i][y + i] = 1;

    }
    for (int i = 1; (x - i) >= 0 && (y - i) >= 0; i++) {
        matrix[x - i][y - i] = 1;
    }
    for (int i = 1; (x + i) < 8 && (y - i) >= 0; i++) {
        matrix[x + i][y - i] = 1;
    }
    for (int i = 1; (x - i) >= 0 && (y + i) < 8; i++) {
        matrix[x - i][y + i] = 1;
    }
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            cout << matrix[j][i] << " ";
        }
        cout << '\n';
    }
}

void Queen(int matrix[][8], int x, int y) {
    matrix[x][y] = 2;
    for (int i = 1; (x + i) < 8 && (y + i) < 8; i++) {
        matrix[x + i][y + i] = 1;

    }
    for (int i = 1; (x - i) >= 0 && (y - i) >= 0; i++) {
        matrix[x - i][y - i] = 1;
    }
    for (int i = 1; (x + i) < 8 && (y - i) >= 0; i++) {
        matrix[x + i][y - i] = 1;
    }
    for (int i = 1; (x - i) >= 0 && (y + i) < 8; i++) {
        matrix[x - i][y + i] = 1;
    }
    for (int i = 0; i < 8; i++) {
        if (i != x) {
            matrix[i][y] = 1;
        }
    }
    for (int i = 0; i < 8; i++) {
        if (i != y) {
            matrix[x][i] = 1;
        }
    }
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            cout << matrix[j][i] << " ";
        }
        cout << '\n';
    }

}
void King(int matrix[][8], int x, int y) {
    matrix[x][y] = 2;
    matrix[x + 1][y] = 1;
    matrix[x][y+1] = 1;
    matrix[x][y - 1] = 1;
    matrix[x - 1][y] = 1;
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            cout << matrix[j][i] << " ";
        }
        cout << '\n';
    }
}

void Knight(int matrix[][8], int x, int y) {
    matrix[x][y] = 2;
    if (x + 2 < 8 && y + 1 < 8) {
        matrix[x + 2][y + 1] = 1;
    }
    if (x + 2 < 8 && y - 1 >= 0) {
        matrix[x + 2][y - 1] = 1;
    }
    if (x - 2 >= 0 && y + 1 < 8) {
        matrix[x - 2][y + 1] = 1;
    }
    if (x - 2 >= 0 && y - 1 >= 0) {
        matrix[x - 2][y - 1] = 1;
    }
    if (x + 1 < 8 && y + 2 < 8) {
        matrix[x + 1][y + 2] = 1;
    }
    if (x + 1 < 8 && y - 2 >= 0) {
        matrix[x + 1][y - 2] = 1;
    }
    if (x - 1 >= 0 && y + 2 < 8) {
        matrix[x - 1][y + 2] = 1;
    }
    if (x - 1 >= 0 && y - 2 >= 0) {
        matrix[x - 1][y - 2] = 1;
    }
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            cout << matrix[j][i] << " ";
        }
        cout << '\n';
    }
}


int main()
{
    int matrix[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matrix[i][j] = 0;
        }
    }


    int a, b;
    string piece_type;
    cout << "enter variable type from the following: Rook,Pawn,Bishop,Queen,King,Knight ";
    cin >> piece_type;
    cout << "enter coordinates up to 9 ";
    cin >> a >> b;

    if (piece_type == "Rook") {
        Rook(matrix, a+1, b + 1);
    }
    else if (piece_type == "Pawn") {
        Pawn(matrix, a + 1, b + 1);
    }
    else if (piece_type == "Bishop") {
        Bishop(matrix, a + 1, b + 1);
    }
    else if (piece_type == "Queen") {
        Queen(matrix, a + 1, b + 1);
    }
    else if (piece_type == "King") {
        King(matrix, a + 1, b + 1);
    }
    else if (piece_type == "Knight") {
        Knight(matrix, a + 1, b + 1);
    }
    else {
        cout << "you entered values ​​different from those suggested";
    }
    for (int i = 0; i < 8; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
