#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "������� ������� ��������������: ";
	cin >> a >> b;
	cout << "������� ������� ��������: ";
	cin >> c;
	int p;
	int d;
	d = a / c * b / c;
	cout << "�� �������������� �� ��������� � � ����� ���������� " << d << " �������� �� �������� �";
	cout << "\n������� ��������� ����� = " << a * b - (c * c * d);
}
