//  Kenny Du
//  Class (CECS 282-01)
//  Project Name (Prog 5 – STL (GoldRabbits))
//  Due Date (11/29/21)
//
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include <climits>
#include <iostream>
#include <string>
#include <map>

#include "BigInt.h"

using namespace std;

#include "GoldRabbits.tools"

void pause() {cout << "Press Enter to continue..."; getchar();} // utility function

int main()
{
    BigInt B1("123456789123456789123456789123456789");
    BigInt B2(B1);
    BigInt MAX(INT_MAX);
    cout << "B1:"<<B1<<"\nB2:"<<B2<<"\nMAX:"<<MAX<<endl;
    pause();
    cout << "\nB1:";
    B1.print();
    pause();
    BigInt display;

    for(BigInt i=0; i<= BigInt(50); i++)
    {
        cout << "\ngoldRabbits(" << i << ") = " << goldRabbits(i);
    }
    cout<< "\n\nThis is the long value of goldRabbits(3000)\n\n";
    BigInt gR3000 = goldRabbits(BigInt(3000));
    gR3000.print();
    cout<< "\n\nThis is the short value of goldRabbits(3000):"<<gR3000<<endl;
    pause();
    int n = 500;
    try{
        cout << "\nThe value of goldRabbits(" << n << ") is: ";
        cout << goldRabbits(n) << endl;
    }
    catch(const string& error)
    {
        cout << error << endl;
        cout << "Transitioning to BigInt\n";
        cout << goldRabbits(BigInt(n)) << endl;
    }
    pause();

    cout << goldRabbits(BigInt(500));
}






