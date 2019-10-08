#include <iostream>
#include <cmath>
using namespace std;

void bhaskara(int a, int b, int c){
	double x1 = 0, x = 0;
	double x2 = 0;
	int delta = 0;

	delta = (pow(b, 2) - ((4*a)*c));

	if(delta < 0){
		cout << "There are no roots!";
	}else	if(delta == 0){
		cout << "There is only one root!\n";
		x = -b/(2*a);
		cout << "x = " << x;
	}else	if(delta > 0){
		cout << "There are two roots!";

		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);

		cout << "x1 = " << x1;
		cout << "x2 = " << x2;
	}
}

int main(void){
	int a = 0, b = 0, c = 0;

	cout << "Please enter the first term of equation: ";
	cin >> a;
	cout << "Please enter the second term of equation: ";
	cin >> b;
	cout << "Please enter the third term of equation: ";
	cin >> c;
	
	bhaskara(a, b, c);

}
