/*Matrix class represents a square n-by-n matrix that can also be used for
 * matrix operations */


class Matrix
{
    private:
        int n;   //square size of the matrix
        int** table; //holds the values of the matrix
    public:
        Matrix(int n);
        int getSize();   //returns the square size of the matrix
        void printMatrix(); 
        void fillMatrix(int row, int col, int value);
        int getValue(int row, int col);
};
