//
// Created by kenny on 11/11/2021.
//

#include <iostream>
#include <string>
#include "BigInt.h"

using namespace std;


BigInt::BigInt(int n) {
    while (n > 0){
        int digit = n % 10;         // gets rightmost digit of n
        digits.push_back((char)digit);    // puts that rightmost digit inside our digits vector
        n /= 10;                // shift n once to the right to get next digit
    }
    if (n == 0)
        digits.push_back((char)0);
    reverse(digits.begin(), digits.end());
    numDigits = digits.size();
    isNegative = false;
}

BigInt::BigInt(const string& s) {
    for (int i = 0; i < s.length(); i++) {
        digits.push_back((char) ((int)s[i] - 48));
    }
    numDigits = digits.size();
    isNegative = false;
}

void BigInt::print() {
    for (char i:digits)
        cout << (int) i;
    cout << endl;
}

ostream &operator<<(ostream &out, const BigInt &BigInt) {
    if (BigInt.digits.size() < 14){         // if the number of digits is short, display the whole number
        for (char i:BigInt.digits) {        // (don't need to do scientific notation)
            out << (int) i;
        }

    }
    else{           // display with scientific notation for longer number
        out << (int) BigInt.digits[0] << ".";
        for (int i = 1; i < 14; i++)
            out << (int) BigInt.digits[i];
        out << "e" << BigInt.numDigits - 1;
    }

    return out;


}

BigInt BigInt::operator-(BigInt other) {
    reverse(this->digits.begin(), this->digits.end());  // reverse to start subtracting from right to left
    reverse(other.digits.begin(), other.digits.end());             // (like on paper)

    string totalDifference;

    int borrow = 0;     // keeps track if we need to subtract 1 from next digit (if we borrowed from last sub)

    for(int i = 0; i < other.numDigits; i++){
        int singleDifference = (int) this->digits[i] - (int) other.digits[i] - borrow;

        if (singleDifference < 0){
            borrow = 1;
            singleDifference = 10 + singleDifference;   // add 10 from borrowing
        }
        else
            borrow = 0;
        totalDifference += (to_string(singleDifference));
    }

    for(int i = other.numDigits; i < this->numDigits; i++) {   // appends the rest of the digits from "this" BigInt
        if (borrow == 1) {
            int singleDifference = (int) this->digits[i] - borrow;
            if (singleDifference < 0)
                singleDifference = 10 - singleDifference;
            else
                borrow = 0;
            totalDifference += (to_string(singleDifference));
        }
        else
            totalDifference += (to_string(this->digits[i]));
    }
    reverse(totalDifference.begin(), totalDifference.end());
    reverse(this->digits.begin(), this->digits.end());      // revert "this" object vector to correct order
    BigInt difference(totalDifference);
    if (borrow == 1){
        difference.isNegative = true;
        cout << "something is negative!" << endl;}
    return difference;
}

BigInt BigInt::operator+(BigInt other) {
    reverse(this->digits.begin(), this->digits.end());  // reverse to start adding from right to left (like
    reverse(other.digits.begin(), other.digits.end());             // on paper)
    vector<char> longerVector;
    vector<char> shorterVector;

    if (this->numDigits < other.numDigits){       // assigning longerVector and shorterVector for addition
        longerVector = other.digits;
        shorterVector = this->digits;
    }
    else{
        longerVector = this->digits;
        shorterVector = other.digits;
    }

    string totalSum;
    int carry = 0;

    for (int i = 0; i < shorterVector.size(); i++){     // range is the length of the shorter BigInt
        int singleSum = (int) shorterVector[i] + (int) longerVector[i] + carry;
        carry = singleSum / 10;
        singleSum = singleSum % 10;     // isolating the sum from the carry
        totalSum += (to_string(singleSum));
    }

    for (int i = shorterVector.size(); i < longerVector.size(); i++) {  // appends the rest of the digits in the longer BigInt
        if (carry == 1){
            int singleSum = (int) longerVector[i] + carry;
            carry = singleSum / 10;
            singleSum = singleSum % 10;     // isolating the sum from the carry
            totalSum += (to_string(singleSum));
        }
        else
            totalSum += (to_string(longerVector[i]));
        }
    if (carry == 1) // checking to see if a new digit needs to be added (carry to empty space) ex 9 + 1 = 10 and not 0
        totalSum += "1";

    reverse(totalSum.begin(), totalSum.end());
    reverse(this->digits.begin(), this->digits.end());      // revert "this" object vector to correct order
    return BigInt(totalSum);
}

int BigInt::operator<=(const BigInt& other) const {

    // Iterative way for checking which number is larger, assuming number length is the same
    // Compare the values of both numbers from left to right. Only return a value if we find 2 numbers that are unequal
    //   or if the 2 BigInts are the same
    if (numDigits == other.numDigits){
        for (int i = 0; i < numDigits; i++){
            if ((int) digits[i] != (int)other.digits[i]) {
                return (int) digits[i] < (int) other.digits[i];
            }
        }
        return true;     // if the BigInts are equal
    }
    // When lengths of BigInts differ, compare their lengths
    return numDigits < other.numDigits;
    return (numDigits < other.numDigits);
}

BigInt::BigInt() {

}

int BigInt::operator<(const BigInt &other) const {
    // Iterative way for checking which number is larger, assuming number length is the same
    // Compare the values of both numbers from left to right. Only return a value if we find 2 numbers that are unequal
    //   or if the 2 BigInts are the same
    if (numDigits == other.numDigits){
        for (int i = 0; i < numDigits; i++){
            if ((int) digits[i] != (int)other.digits[i]) {
                return (int) digits[i] < (int) other.digits[i];
            }
        }
        return false;     // if the BigInts are equal
    }
    // When lengths of BigInts differ, compare their lengths
    return numDigits < other.numDigits;
    return (numDigits < other.numDigits);
}

BigInt operator++(BigInt& bigInt, int dummy) {
    bigInt = bigInt + BigInt(1);
    return bigInt;
}






