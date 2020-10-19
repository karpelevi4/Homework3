#include <iostream>
#include <math.h>
#include <fstream>
using namespace  std;

int main() {

	setlocale(LC_ALL, "Russian");

	// Задача «Заем». Месячная выплата m по займу в S рублей 
	//на n лет под процент p вычисляется по формуле.
	double m, S, p, r, n, power;
	cout << "Размер займа S: ";
	cin >> S;
	cout << "Количество лет n: ";
	cin >> n;
	cout << "Процент p: ";
	cin >> p;
	r = p / 100;
	power = pow((1 + r), n);
	if (power == 1) {
		cout << "Невозможно вычислить.";
	}
	else {
		m = (S * r * power) / (12 * (power - 1));
		cout << "m = " << m;
	}
	cout << endl << endl;

	// Задача «Ссуда». Под какой процент p выдана ссуда величиной S рублей, 
	// которая гасится месячными выплатами величиной m в течение n лет.
	// Формула приведена в предыдущей задаче.
	double S1, m1, n1, r1, p1;
	cout << "Величина ссуды S: ";
	cin >> S1;
	cout << "Месячные выплаты величиной m: ";
	cin >> m1;
	cout << "Количество лет n: ";
	cin >> n1;
	if (!S) {
		cout << "Невозможно вычислить.";
	}
	else {
		r1 = 12 * m1 * n1 / S1 - 1;
		p1 = r1 * 100;
		cout << "p = " << p1;
	}
	cout << endl << endl;

;

	return 0;
}