#include <iostream>
#include<time.h>
#include<iomanip>
#include <string>
#include <climits>
#include <map>

#include "BigInt.h"

using namespace std;

int goldRabbits(int); // prototype or signature

void pause() {cout << "Press Enter to continue..."; getchar();} // utility function




BigInt goldRabbits(BigInt n) {
    static map<BigInt, BigInt> rabbit_map;

    // insert value BigInt(1) if n is 0 or 1
    if (n <= BigInt(1)) {
        rabbit_map.insert({n, BigInt(1)});
    }

    // check if the key exists for 'n'
    else if (rabbit_map.find(n) == rabbit_map.end())
        //it does not exist
        // make a key in the map and return the value of the key
        rabbit_map[n] = goldRabbits(n - BigInt(1)) + goldRabbits(n - BigInt(2));

    // value now exists for key 'n' inside of map- return the value
    return rabbit_map.at(n);
}

// this is the goldRabbits function
int goldRabbits(int n)
{
    // keeps track of all previously calculated results for goldRabbits(n)
    static map<int, int> int_rabbit_map;

    if (n==0 || n==1)
        int_rabbit_map.insert({n, 1});

    // if the key doesn't exist
    else if (int_rabbit_map.find(n) == int_rabbit_map.end()){
        int rabbits = goldRabbits(n - 1) + goldRabbits(n - 2);
        // checks for overflow. if rabbits < 0 (or negative), then we have overflow
        if (rabbits > 0)
            int_rabbit_map.insert({n, rabbits});
        else{
            string except = "Overflow Error - goldRabbits overflowed using " + to_string(n);
            throw except;
        }
    }
        return int_rabbit_map.at(n);
}




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

//    B1++;
//    cout<<"\nB1++:";
//    B1.print();
//    BigInt b10 = B1 + BigInt(1);
//    cout << "\nb10: ";
//    b10.print();
//
//    BigInt b11(0);
//    cout << "\nb11: ";
//    b11.print();
//    b11 = b11 + BigInt(1);
//    cout << "b11 after + BigInt(1): ";
//    b11.print();
//
//    BigInt b12(3000);
//    b12 = b12 - BigInt(2);
//    cout << "\nb12:" << b12 << endl;
//    b12 = B1;
//    cout << "\nb12:";
//    b12.print();
//    B1++;
//    cout << "\nb12:";
//    b12.print();
//    BigInt b30 = MAX;
//    cout << "\nb30:" << b30 << endl;
//    MAX = MAX - BigInt(10);
//    cout << "\nb30:" << b30 << endl;
//
//    cout<< "BigInt(50):" << BigInt(50) << endl;
//
//    cout << "\ncomparing 51 and 50: " << (BigInt(51) <= BigInt(50)) << endl;

}




