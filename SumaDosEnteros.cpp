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
    // Programa para sumar 2 enteros 
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    int a;
    int b;
    int k;
    
    cout << "Introduzca el primer entero" << endl;
    cin >> a;
    cout << "Introduzca introduzca el segundo entero" << endl;
    cin >> b;
    k = a + b;
    cout << "La suma es" << endl;
    cout << k << endl;
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
