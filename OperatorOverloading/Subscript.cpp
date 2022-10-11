#include <iostream>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction()
    {
        this->numerator = 1;
        this->denominator = 1;
    }
    Fraction(int n, int d){
        this->numerator = n;
        this->denominator = d;
    }

    int operator[] (int index){
        if(index==0){
            return this->numerator;
        }
        return this->denominator;
    }

    void printFraction(){
        cout << this->numerator << "/" << this->denominator << endl;
    }
};



int main(){
    Fraction f1(2, 4);
    cout << f1[10] << endl;
    return 0;
}