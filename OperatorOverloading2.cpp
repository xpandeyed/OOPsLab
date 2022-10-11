#include <bits/stdc++.h>
using namespace std;

class matrix {
    int r, c;
    int mat[100][100];
    public:
        static int matrixCount;
        matrix(bool isInput = false) {
            if (isInput == false) {
                return;
            }
            cout<<"Enter the number of rows"<<endl;
            cin>>this->r;
            cout<<"Enter the number of columns"<<endl;
            cin>>this->c;

            matrixCount++;
        }
        matrix(int r, int c) {
            this->r = r;
            this->c = c;

            matrixCount++;
        }
        void setMatrix() {
            cout<<"Enter Matrix"<<endl;
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    cin>>mat[i][j];
                }
            }
        }
        void show() {
            cout<<endl;
            for(int i = 0; i < r; i++) {
                for(int j = 0;j < c; j++) {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        bool checkForAdd(matrix &obj) {
            if(obj.r == this->r and obj.c == this->c) {
                return true;
            }
            return false;
        }
        bool checkForMultiply(matrix &obj) {
            if(this->c == obj.r) {
                return true;
            }
            return false;
        }
        matrix operator * (matrix const &obj) {
            matrix res;
            res.r = r;
            res.c = obj.c;
            for(int i = 0; i < r; i++) {    
                for(int j = 0; j < obj.c; j++) {    
                    res.mat[i][j] = 0;    
                    for(int k = 0; k < c; k++) {    
                        res.mat[i][j] += mat[i][k] * obj.mat[k][j];    
                    }    
                }    
            }
            return res;  
        }
        matrix operator + (matrix const &obj) {
            matrix res;
            res.r = r;
            res.c = c;
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    res.mat[i][j] = mat[i][j] + obj.mat[i][j];
                }
            }
            return res;
        }
};

int matrix::matrixCount = 0;

int main() {
    matrix m1(1), m2(1);
    m1.setMatrix();
    m2.setMatrix();
    if (!m1.checkForMultiply(m2)) {
        cout<<"The Matrices cannot be multiplied"<<endl;
    }
    else {
        matrix m3 = m1 * m2;
        m3.show();
    }
    if (!m1.checkForAdd(m2)) {
        cout<<"The Matrices cannot be added"<<endl;
    }
    else {
        matrix m4 = m1 + m2;
        m4.show();
    }
    return 0;
}