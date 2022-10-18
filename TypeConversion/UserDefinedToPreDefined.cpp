#include <bits/stdc++.h>
using namespace std;
class String{
    public:
    string str;
    
    void printString(){
        cout << str << endl;
    }
    String(){
        str = "";
    }
    String(string s){
        str = s;
    }
    operator string(){
        return str;
    }
};
int main(){
    String s1;
    s1.str = "iloveindia";
    //userdefined to predefined
    string s2 = s1;
    cout << s2 << endl;
    string s3 = "ilovebooks";
    //predefined to user defined
    String s4 = s3;
    s4.printString() ;
    return 0;
}