#include <iostream>
#include <cmath>
using namespace std;

double result(double height, double radius, double pi){
    return height * pow(radius, 2) * pi;
}

int main()
{
    double volume, pi = 3.142;
    float height, radius;
    
    
    cout<< "Enter the height and radius: "<< endl;
    cin >> height>> radius;
    
    volume = result(height, radius, pi);
    cout<< "volume ="<< volume<< endl;

    

    return 0;
}
