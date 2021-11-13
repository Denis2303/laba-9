#include <iostream>
using namespace std;

int main(){
	int a;
	setlocale(LC_ALL, "rus");
	cout << "Введите номер года: ";
	cin >> a;
	a = a% 100 == 0 ? a / 100: a / 100 + 1;
	cout <<"Номер столетия - " << a;
}
