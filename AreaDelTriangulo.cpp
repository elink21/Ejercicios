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
    // Programa para calcular el area del triangulo 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    double a;
    double b;
    double c;
    double s;
    double area;
    
    cout << "Introduzca los valores de los tres lados" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    s = (a + b + c) / 2;
    if (s * (s - a) * (s - b) * (s - c) > 0)
    {
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "El area es" << endl;
        cout << area << endl;
    }
    else
    {
        cout << "No son lados validos" << endl;
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
