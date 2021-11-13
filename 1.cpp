#include <iostream>
using namespace std;

int main(){
	int a;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите количество секунд с начала суток: ";
	cin >> a;
	cout << "— начала последней минуты прошло " << a%60 << " секунд";
}
