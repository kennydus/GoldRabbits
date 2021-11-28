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

int main()
{
//    int const months = 12 * 10;  			    // this is 10 years or 120 months
//    int start = time(0);  				// number of seconds since Jan 1, 1970

    map<int, BigInt> results;
//
//    for(int i=0; i<months; i++)
//    {
//        int current = time(0);  			// number of seconds since program started
//        cout << setw(5)<<current-start<<":";	// print elapsed seconds
//        cout << "  GoldRabbits("<<setw(2)<<i<<") = ";
//        cout << setw(11)<< goldRabbits(i) <<endl;// the call to goldRabbits
//    }

    BigInt B1("123456789123456789123456789123456789");
    BigInt B2(B1);
    BigInt MAX(INT_MAX);
    cout << "B1:"<<B1<<"\nB2:"<<B2<<"\nMAX:"<<MAX<<endl;
    pause();
    cout << "\nB1:";
    B1.print();
    pause();

    BigInt B3 = B1 + B2;
    cout << "\nB3:";
    B3.print();

    BigInt B4 = B1 - BigInt("9999");
    cout << "\nB4:";
    B4.print();

    cout<<"creating neg..." << endl;
    BigInt neg = B1 - (BigInt("123456789123456789123456789123456790"));
    cout << "\nneg:";
    neg.print(); cout << endl;


    cout << "B1:"<<B1<<"\nB2:"<<B2<<"\nMAX:"<<MAX<<endl;

    cout << "\n0 < 1: " << (0<1) << "\n1 < 0:" << (1<0) << endl;

}

// this is the goldRabbits function
int goldRabbits(int n)
{
    static map<int, BigInt> rabbit_map;     // keeps track of all previously calculated results for goldRabbits(n)

    if (n==0 || n==1)
        return 1;
    else
        return goldRabbits(n-1) + goldRabbits(n-2);
}

BigInt goldRabbits(BigInt n){
    static map<BigInt, BigInt> rabbit_map;
    if (n < BigInt(0) || n < BigInt(1)){

    }

    return BigInt(0);
}
