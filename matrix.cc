#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


Matrix::Matrix(int n)
{
    this->n = n;
    table = new int*[n];
    for (int a = 0; a < n; a++)
    {
        table[a] = new int[n];
    }
    //zero out the values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            table[i][j] = 0;
        }
    }
}

void Matrix::printMatrix()
{
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            printf("%d  ", table[a][b]);
        }
        printf("\n");
    }
}

void Matrix::fillMatrix(int row, int col, int value)
{
    if (row > n || col > n) { return; }
    table[row][col] = value;
}

int Matrix::getValue(int row, int col)
{
    return this->table[row][col];
}



int Matrix::getSize()
{
    return this->n;
}





int temp1[2][2] = { {3, 4}, {4, 53}};
int temp2[2][2] = {{8, 43}, {43, 65}};

int main()
{
    Matrix mt(2);
    Matrix mv(2);
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            mt.fillMatrix(a, b, temp1[a][b]);
            mv.fillMatrix(a, b, temp2[a][b]);
        }
    }
    mt.printMatrix();
    mv.printMatrix();

    Matrix* ml = 
    return 0;
}
