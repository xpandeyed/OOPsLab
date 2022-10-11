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
    Fraction operator|(Fraction f)
    {
        Fraction res;
        res.numerator = this->numerator | f.numerator;
        res.denominator = this->denominator | f.denominator;
        return res;
    }
    Fraction operator&(Fraction f)
    {
        Fraction res;
        res.numerator = this->numerator & f.numerator;
        res.denominator = this->denominator & f.denominator;
        return res;
    }
    Fraction operator~()
    {
        this->numerator = ~this->numerator;
        this->denominator = ~this->denominator;
        return *this;
    }

    void printFraction(){
        cout << this->numerator << "/" << this->denominator << endl;
    }
};



int main(){
    Fraction f1(2, 4), f2(3, 5);
    Fraction res1 = f1 & f2, res2 = f1 | f2, res3 = ~f1;
    res1.printFraction();
    res2.printFraction();
    res3.printFraction();
    return 0;
}