#ifndef DECLARATION_H
#define DECLARATION_H

#include <iostream>
#include <vector>
#include <cmath>

// Vector Class
class VectorType
{
    private:
    // Parameters
        std::vector<double> myVector;
        
    public:
    // A. Default & Parameterized Contructor
    VectorType();
    VectorType(int size);
    
    // B. User-Defined Member Functions
    double normVector() const;
    double innerProduct(const VectorType& other) const;
    double outerProduct(const VectorType& other) const;

    // C. Operator Overloading

    VectorType operator+(const VectorType& other) const;
    VectorType operator-(const VectorType& other) const;
    VectorType operator*(double scalar) const;
    VectorType operator/(double scalar) const;

    friend std::ostream& operator<<(std::ostream& output_stream, const VectorType& v);
    

    bool operator==(const VectorType& other) const;
    bool operator!=(const VectorType& other) const;

    //Pre-fix 
    VectorType operator++();
    VectorType operator--();

    //Post-fix 
    VectorType operator++(int);
    VectorType operator--(int);

    VectorType operator-() const;

    double& operator[](int i);
    

};

class MatrixType
{
    private:
    // Parameters
    std::vector<std::vector<double>> myMatrix;

    public:
    // A. Default & Parameterized Contructor
    MatrixType();
    MatrixType(int size_rows, int size_columns);
};

#endif