#include <iostream>
#include <vector>
#include <cmath>

// Vector Class
class VectorClass
{
    private:
    // Parameters
        int size_vector;
    
    // Pointer
        double* Vector;
        
    public:

    // A. Default & Parameterized Contructor
    VectorType();
    VectorType(int n);
    
    // B. User-Defined Member Functions
    double normVector();
    double innerProduct();
    double outerProduct();

    // C. Operator Overloading


    // Implement Destructor
     ~VectorType();
};

class MatrixType
{
    private:
    // Parameters
    int size_row, size_column;

    //pointer
    double* Matrix;

    public:
    
    // A. Default & Parameterized Contructor
    MatrixType();
    MatrixType(int r, int c); // <- Matrix Size??
    
    // B. User-Defined Member Functions
    double normMatrix();
    {
        double normSum_Matrix = 0;
        for (int 0; i<MatrixSize; i++)
        {
            normSum_Matrix += Matrix[i] * Matrix[i];
        }

        return sqrt(normSum_Matrix);
    }
    // Lookup the Euclidean Norm Sum for Matrix Funcion

    double tranposeMatrix();

    // C. Operator Overloading
    MatrixType MVMultiplication();

    // Addition
    MatrixType operator+(const MatrixType& otherMatrix)
    {
        MatrixType result (rows, columns);

        for (int i=0; i < size_row; i++)
            for (int j=0; j < size_column; j++)
                result.matrix[i][j] = this->matrix[i][j] + otherMatrix.matrix[i][j];

        return result;
    }

    // Substraction
    MatrixType operator-(const MatrixType& otherMatrix)
    {
        MatrixType result (rows, columns);

        for (int i=0; i < size_row; i++)
            for (int j=0; j < size_column; j++)
                result.matrix[i][j] = this->matrix[i][j] + otherMatrix.matrix[i][j];

        return result;
    }

    // Multiplication
    MatrixType MatrixMult();
    MatrixType MatrixDiv();
    

    // Increment and Decement 
    {
        
    }

    // Unary Negation 
    {
        
    }

    // Element Access
    {

    }

    // Implement Destructor
    ~MatrixType()
    {
        delete[] Matrix;
    }
}