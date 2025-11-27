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
    
    public:
    //Default Contructor
    VectorType():
        Vector_Size(0){}

    //Parameterized Constructor
    VectorType(int size): 
        Vector_Size(size)
        {
            cout << "Input the Vector's Elements!" << endl;
            double Vector[Vector_Size];
            for (int i = 0; i<Vector_Size; i++)
            {
                cin >> Vector[i]; 
            }
        }
    
    //printVector Function
     void printVector()
     {
        double Vector[Vector_Size];
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
        cout << "]";
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


    //Show 2 Vectors
    //v1.printVector();
    //v2.printVector();
}
