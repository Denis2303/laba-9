#include <iostream>
using namespace std;

int main(){
	int a;
	setlocale(LC_ALL, "rus");
	cout << "������� ����� K ";
	cin >> a;
	int b;
	cout << "������� ����� N ";
	cin >> b;
	b = (a + b - 1) % 7 == 0 ? (a+b-1) % 7 +1: (a + b - 1) % 7;
	cout << b;
}
