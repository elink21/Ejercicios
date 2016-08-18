
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
    // Programa para convertir radianes a angulos 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    double angulo;
    double radian;
    
    cout << "Introduzca el valor a convertir" << endl;
    cin >> radian;
    if (radian == 0)
    {
        cout << "No es un numero valido" << endl;
    }
    else
    {
        angulo = radian * 180 / M_PI;
        cout << "El valor es igual a" << endl;
        cout << angulo << endl;
        cout << "grados" << endl;
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
