#include <bits/stdc++.h>
using namespace std;

class Matrix
{
public:
    static int count;
    static void incCount()
    {
        count++;
    }
    static void setCount(int x)
    {
        count = x;
    }
    static void printCount()
    {
        cout << "Count is: " << count << endl;
    }
    vector<vector<int>> matrix;
    Matrix()
    {
    }
    Matrix(vector<vector<int>> m)
    {
        this->matrix = m;
    }
    Matrix(const Matrix &m)
    {
        this->matrix = m.matrix;
        int rows = this->matrix.size();
        int cols = this->matrix[0].size();
        for (int i = 1; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                this->matrix[i][j]--;
            }
        }
    }
    void printer()
    {
        cout << "Printing Matrix:" << endl;
        for (auto x : matrix)
        {
            for (auto y : x)
            {
                cout << y << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int Matrix::count = 0;

vector<vector<int>> multiply(vector<vector<int>> A, vector<vector<int>> B)
{
    Matrix::setCount(0);
    vector<vector<int>> result(A.size(), vector<int>(B[0].size(), 0));
    if (A[0].size() == B.size())
    {
        const int N = A[0].size();
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < B[0].size(); j++)
            {

                for (int k = 0; k < A[0].size(); k++)
                {
                    Matrix::incCount();
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    Matrix::printCount();
    return result;
}

int main()
{

    vector<vector<int>> m = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    Matrix m1(m), m2(m1);

    m1.printer();
    m2.printer();

    Matrix res;
    res.matrix = multiply(m1.matrix, m2.matrix);

    res.printer();

    return 0;
}
// m*n
// n*p
