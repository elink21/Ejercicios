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
    // Programa para determinar el numero mayor 
    //  
    // Elias Edgardo Segundo Antonio  
    // ICO 21 2016B 
    int a;
    int b;
    
    cout << "Dame un numero" << endl;
    cin >> a;
    cout << "Dame otro numero" << endl;
    cin >> b;
    if (a == b)
    {
        cout << "Son iguales" << endl;
    }
    else
    {
        if (b > a)
        {
            cout << b << endl;
            cout << "Es mayor" << endl;
        }
        else
        {
            cout << "Es mayor" << endl;
            cout << a << endl;
        }
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
