#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите стороны прямоугольника: ";
	cin >> a >> b;
	cout << "Введите сторону квадрата: ";
	cin >> c;
	int p;
	int d;
	d = a / c * b / c;
	cout << "на прямоугольнике со сторонами А Б можно разместить " << d << " квадрата со стороной С";
	cout << "\nплощадь незанятой части = " << a * b - (c * c * d);
}
