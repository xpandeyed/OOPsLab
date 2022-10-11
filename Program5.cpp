#include <bits/stdc++.h>
using namespace std;


class Point{
    int x;
    int y;

    public:
    void setter(int x, int y){
        this->x = x;
        this->y = y;
    }

    friend class Cal;
};

class Cal{
    public:
    
    int dis(Point p1, Point p2){
        int x1 = p1.x;
        int y1 = p1.y;
        int x2 = p2.x;
        int y2 = p2.y;
        return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    }

};



int main(){
    Point p1;
    Point p2;
    
    p1.setter(10, 0);
    p2.setter(20, 0);

    Cal c;
    cout << c.dis(p1, p2);

    return 0;
}