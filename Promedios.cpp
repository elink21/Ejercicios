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
    // Programa para promediar 5 numeros 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    double a1;
    double a2;
    double a3;
    double a4;
    double a5;
    double sum;
    double prom;
    
    cout << "Introduzca los 5 numeros a promediar" << endl;
    cin >> a1;
    cin >> a2;
    cin >> a3;
    cin >> a4;
    cin >> a5;
    sum = a1 + a2 + a3 + a4 + a5;
    prom = sum / 5;
    cout << "El promedio es" << endl;
    cout << prom << endl;
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
