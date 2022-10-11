#include <iostream>
#include <string>
using namespace std;

class String {
    string str;
public:
    String (string s) {
        str = s;
    }
    void display() {
        cout<<str<<endl;
    }
    friend String operator+ (const String &A, const String &B);
};

String operator+ (const String &A, const String &B) {
    String C(A.str + B.str);
    return C;
}

int main() {
    String s1("Welcome to "), s2("Jamia Millia Islamia");
    String s3 = s1 + s2;
    s3.display();
    return 0;
}