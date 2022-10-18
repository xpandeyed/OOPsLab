#include <iostream>
using namespace std;

class Dollar;
class Rupee;

class Rupee{
    public:
    int val = 0;
    Rupee(){
        val = 0;
    }
    Rupee(int r){
        val = r;
    }
    void printRupees(){
        cout << "Rupees: " << val << endl;
    }
};

class Dollar{
    public:

    int val;
    Dollar(){
        val = 0;
    }
    Dollar(int v){
        val = v;
    }
    Dollar(Rupee r){
        val = (r.val)/80;
    }
    void printDollars(){
        cout << "Dollars: " << val << endl;
    }

    operator Rupee(){
        return Rupee(val*80);
    }

};




int main(){
    Dollar d1 = 2;
    Rupee r1 = 80;
    d1 = r1;
    d1.printDollars();

    Rupee r2 = 160;
    Dollar d2 = 1;
    r2 = d2;
    r2.printRupees();

    return 0;
}