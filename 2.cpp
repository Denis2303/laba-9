#include <iostream>
using namespace std;

int main(){
	int a;
	setlocale(LC_ALL, "rus");
	cout << "������� ����� K ";
	cin >> a;
	cout <<"����� ��� ������ ="<< a%7;
}
