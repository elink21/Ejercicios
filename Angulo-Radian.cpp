#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main()
{
    // Programa para convertir angulos a radianes 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    double angulo;
    double radian;
    
    radian = 0;
    cout << "Introduzca el valor a convertir" << endl;
    cin >> angulo;
    if (angulo == 0)
    {
        cout << "No es un numero valido" << endl;
    }
    else
    {
        radian = M_PI * angulo / 180;
        cout << "El valor es igual a" << endl;
        cout << radian << endl;
        cout << "radianes" << endl;
    }
}

// The following implements type conversion functions.

string toString (double value)  //int also
{
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text)
{
    return atoi(text.c_str());
}

double toDouble (string text)
{
    return atof(text.c_str());
}
