#include <iostream>
#include <math.h>
#include <bits//stdc++.h>

using namespace std;

//Vector Class
class VectorType
{
    public:
    //Parameters
        int x_magnitude;
        int y_magnitude;
        int z_magnitude;
    
    //Contructor, Standard Vector
    VectorType();
    VectorType(int x_magnitude, int y_magnitude, int z_magnitude)
    {
        this->x_magnitude = x_magnitude;
        this->y_magnitude = y_magnitude;
        this->z_magnitude = z_magnitude;    
    }
};

//DEBUGGING AND TESTING
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    VectorType vector1(x, y, z);
    
    cout << vector1.x_magnitude << "\n";
    cout << vector1.y_magnitude << "\n";
    cout << vector1.z_magnitude << "\n";

    
}
