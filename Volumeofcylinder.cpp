#include <iostream>
#include <cmath>
using namespace std;

// Creating a function to calculate the volume
double result(double height, double radius, double pi){
    return height * pow(radius, 2) * pi;
}

int main()
{
    // Declaration of variables
    double volume, pi = 3.142;
    float height, radius;
    
    // prompting the user to enter the height and radius
    cout<< "Enter the height and radius: "<< endl;
    cin >> height>> radius;

    // Function calling
    volume = result(height, radius, pi);
    cout<< "volume ="<< volume<< endl;

    

    return 0;
}
