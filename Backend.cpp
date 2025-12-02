#include "Declaration.h"
using namespace std;

    // A. Default & Parameterized Contructor
    VectorType::VectorType()
    {
        myVector = {};
    }

    VectorType::VectorType(int size)
    {
        myVector.resize(size);
        cout << "Input the Vector's Elements!" << endl;
        for(int i = 0; i < size; i++)
        {
                cin >> myVector[i];
        }
    }
  
    
     // B. User-Defined Member Functions
    double VectorType::normVector() const
    {
        double sum_Norm = 0.0;
        for(int i; i < myVector.size(); i++)
        {
            sum_Norm += myVector[i] * myVector[i];
        }
        
        return sqrt(sum_Norm);
    }

    double VectorType::innerProduct(const VectorType& other) const
    {
        double sum_InnerProduct = 0.0;
        for(int i; i < myVector.size(); i++)
        {
            sum_InnerProduct += myVector[i] * other.myVector[i];
        }
        
        return sum_InnerProduct;
    }
    

    // C. Operator Overloading
    // Addition (v1 + v2)
    VectorType VectorType::operator+(const VectorType& other) const
    {
        VectorType additionVector(myVector.size());
        for (int i = 0; i < myVector.size(); i++)
        {
            additionVector.myVector[i] = myVector[i] + other.myVector[i];
        }

        return additionVector;
    }

    // Substraction (v1 - v2)
    VectorType VectorType::operator-(const VectorType& other) const
    {
        VectorType substractionVector(myVector.size());
        for (int i = 0; i < myVector.size(); i++)
        {
            substractionVector.myVector[i] = myVector[i] - other.myVector[i];
        }

        return substractionVector;
        
    }
    
    // Multiplication (v1 * scalar)
    VectorType VectorType::operator*(double scalar) const
    {
        VectorType multiplicationVector(myVector.size());
        for (int i = 0; i < myVector.size(); i++)
        {
            multiplicationVector.myVector[i] = myVector[i] * scalar;
        }

        return multiplicationVector;
    }
    
    // Division (v1 / scalar)
    VectorType VectorType::operator/(double scalar) const
    {
        VectorType divisionVector(myVector.size());
        for (int i = 0; i < myVector.size(); i++)
        {
            divisionVector.myVector[i] = myVector[i] / scalar;
        }

        return divisionVector;
    }
    
    // Stream Output Function
    std::ostream& operator<<(std::ostream& output_stream, const VectorType& v)
    {
        output_stream << "[";

        for (size_t i = 0; i < v.myVector.size(); i++)
        {
            output_stream << v.myVector[i];
                if (i < v.myVector.size() - 1)
                    output_stream << ", ";
        }

        output_stream << "]";
        return output_stream;
    }
    // Friend -> A function that's able to access a private/proctected member of a class
    // Using size_t instead of int -> C++ indexing for STL (something, lookup later)

    // Equality and Inequality
    bool VectorType::operator==(const VectorType& other) const
    {
        if (myVector == other.myVector)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Increment and Decrement
    // No int parameter -> Prefix
    VectorType VectorType::operator++()
    {
        for (size_t i = 0; i < myVector.size(); i++)
        {
            ++myVector[i]; 
        }
            
        return *this;
    }

    VectorType VectorType::operator--() 
    {
        for (size_t i = 0; i < myVector.size(); i++)
        {
            --myVector[i]; 
        }
            
        return *this;
    }

    // Has (int) parameter -> Postfix
    VectorType VectorType::operator++(int) 
    {
        VectorType postfix_increase = *this;

        for (size_t i = 0; i < myVector.size(); i++)
        {
            ++myVector[i];
        }

        return postfix_increase;
    }

    VectorType VectorType::operator--(int)
    {
        VectorType postfix_decrease = *this;

        for (size_t i = 0; i < myVector.size(); i++)
        {
            --myVector[i];
        }

        return postfix_decrease;
    }
    // Writings for prefix nor postfix operators are same; they are differentiated by having a parameter or not

    // Negation
    VectorType VectorType::operator-() const
    {
        VectorType negationVector(myVector.size());

        for (int i = 0; i < myVector.size(); i++)
        {
            negationVector.myVector[i] = -myVector[i];
        }

        return negationVector;
        
    }

    // Element Access (Vector member value changer)
    // To make the vector accessible like an array
    double& VectorType::operator[](int i)
    {
        return myVector[i];
    }
