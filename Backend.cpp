#include <iostream>
#include <cmath>
#include <bits//stdc++.h>

using namespace std;

//Vector Class
class VectorType
{
    private:
    //Parameters
        int x_mag;
        int y_mag;
        int z_mag;
    
    public:
    //Default Contructor
    VectorType():
        x_mag(0), y_mag(0), z_mag(0){}

    //Parameterized Constructor
    VectorType(int x, int y, int z): 
        x_mag(x), y_mag(y), z_mag(z){}

    //Show Vector Function
     void printVector()
     {
        cout << "Vector = [" 
             << x_mag << ", "
             << y_mag << ", "
             << z_mag << "]"
             << endl;
     }
};

//DEBUGGING AND TESTING
int main()
{
    int x1,y1,z1;
    int x2,y2,z2;

    //Input Vector 1 & 2
    cin >> x1 >> y1 >> z1
        >> x2 >> y2 >> z2;

    VectorType v1(x1, y1, z1);
    VectorType v2(x2, y2, z2);

    //Show 2 Vectors
    v1.printVector();
    v2.printVector();
}
