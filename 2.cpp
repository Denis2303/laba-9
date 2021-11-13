#include <iostream>
using namespace std;

int main(){
	int a;
	setlocale(LC_ALL, "rus");
	cout << "Введите число K ";
	cin >> a;
	cout <<"Номер дня недели ="<< a%7;
}
