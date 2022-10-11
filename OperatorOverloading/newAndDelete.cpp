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

    void* operator new (size_t size){
        cout << "New operatlor is called" << endl;
        void *res = malloc(size);
        return res;
    }

    void operator delete(void* ptr){
        cout << "delete operator called" << endl;
        free(ptr);
    }

    void printFraction(){
        cout << this->numerator << "/" << this->denominator << endl;
    }
};



int main(){
    Fraction * f = new Fraction(2, 4);
    f->printFraction();
    delete f;
    // f->printFraction();
    return 0;
}