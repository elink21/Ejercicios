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
    int a;
    
    // Programa para determinar si tienes edad para votar 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    cin >> a;
    if (a >= 18)
    {
        cout << "Si tienes edad para votar" << endl;
    }
    else
    {
        cout << "Aun no tienes edad para votar" << endl;
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
