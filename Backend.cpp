#include <iostream>
#include <cmath>
#include <bits//stdc++.h>

using namespace std;

//Vector Class
class VectorType
{
    private:
    //Parameters
        int Vector_Size;
    
    //Pointer
        double* Vector;
        
    public:

    ///////////////
    //CONSTRUCTOR//
    ///////////////

    //Default Contructor
    VectorType():
        Vector_Size(0){}

    //Parameterized Constructor
    VectorType(int size): 
        Vector_Size(size)
        {
            cout << "Input the Vector's Elements!" << endl;
            Vector = new double[Vector_Size];
            for (int i = 0; i<Vector_Size; i++)
            {
                cin >> Vector[i]; 
            }
        }

    /////////////
    //FUNCTIONS//
    /////////////
    
    //Euclidean Norm Function
    double normFunction()
    {
        double normSum = 0;
        for (int i = 0; i<Vector_Size; i++)
        {
            normSum += Vector[i] * Vector[i];
        }
        return sqrt(normSum);
    }

    //printVector Function
     void printVector()
     {
        cout << "[";
        for (int i = 0; i<Vector_Size; i++)
        {
            if (i<Vector_Size-1)
                {
                    cout << Vector[i] << ", ";
                }
            else
                {
                    cout << Vector[i];
                }
        }
        cout << "]" << endl;
     }

     //Destructor
     ~VectorType()
     {
        delete[] Vector;
     }
     
};

//DEBUGGING AND TESTING
int main()
{
    int n1,n2;

    //Input Vector 1 & 2
    cin >> n1;

    VectorType v1(n1);
    v1.printVector();
    cout << v1.normFunction();

    //Show 2 Vectors
    //v1.printVector();
    //v2.printVector();
}
