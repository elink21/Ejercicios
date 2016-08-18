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
    // Programa para determinar el area de un circulo 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    double area;
    double radio;
    
    cout << "Introduzca el diametro" << endl;
    double d;
    
    cin >> d;
    radio = d / 2;
    area = M_PI * pow(radio, 2);
    cout << "El area es:" << endl;
    cout << area << endl;
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
