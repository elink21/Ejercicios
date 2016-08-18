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
    // Programa para calcular la hipotenusa de un triangulo 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    double cat1;
    double cat2;
    double hip;
    
    cout << "Introduzca el valor de los dos catetos" << endl;
    cin >> cat1;
    cin >> cat2;
    hip = sqrt(pow(cat1, 2) * pow(cat2, 2));
    cout << "El valor de la hipotenusa es" << endl;
    cout << hip << endl;
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
