#include <bits/stdc++.h>
using namespace std;
//19 July, 2022

class Swapper{
public:
	int x, y;
	float a, b;
	void swapInts(){
		cout << "Before Swapping:" << endl;
		cout << "x: " << x << " y: " << y << endl;

		int temp = x;
		x = y;
		y = temp;
		cout << "After Swapping:" << endl;
		cout << "x: " << x << " y: " << y << endl;

	}
	void swapFloats(){
		cout << "Before Swapping:" << endl;
		cout << "a: " << a << " b: " << b <<endl;
		float temp = a;
		a = b;
		b = temp;
		cout << "After Swapping:" << endl;
		cout << "a: " << a << " b: " << b << endl;
	}
};

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void swap(float &a, float &b){
	float temp = a;
	a = b;
	b = temp;
}

void simpleSwaps(){

	int x = 5, y = 7, z;

	float a = 10.1, b = 20.5, c;

	cout << "Before Swapping:" << endl;
	cout << "x: " << x << " y: " << y << endl;
	cout << "a: " << a << " b: " << b << endl;

	int choice;
	cout << "1 for direct swap.\n2 for swapping using functions." << endl;
	cin >> choice;

	switch(choice){
		case 1:
		{
			//swapping integers
			cout << "Swapping directly:" << endl;
			z = x;
			x = y;
			y = z;

			
			//swapping floats
			c = a;
			a = b;
			b = c;


			cout << "After Swapping" << endl;
			cout << "x: " << x << " y: " << y << endl;
			cout << "a: " << a << " b: " << b << endl;
			break;
		}
		case 2:
		{
			cout << "Swapping using functions" << endl;
			//swapping using functions
			swap(x, y);
			cout << "x: " << x << " y: " << y << endl;

			swap(a, b);
			cout << "a: " << a << " b: " << b << endl;
			cout << "After Swapping" << endl;

		}
		
	}
}

void swapUsingClass(){
	Swapper s1;
	s1.x = 2;
	s1.y = 3;
	s1.a = 10.1;
	s1.b = 20.2;
	s1.swapInts();
	s1.swapFloats();
}
int main(){
	// simpleSwaps();
	swapUsingClass();
	return 0;
}
