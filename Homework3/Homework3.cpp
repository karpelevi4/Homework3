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
	double S1, m1, n1, r1, power1, power2;
	double p1 = -1;

	cout << "Величина ссуды S: ";
	cin >> S1;
	cout << "Месячные выплаты величиной m: ";
	cin >> m1;
	cout << "Количество лет n: ";
	cin >> n1;
	power1 = 12 * m1 / S1;
	do {
		r1 = p1 / 100;
		power2 = r * pow((1 + r1), n1) / (pow((1 + r), n) - 1);
		p1 += 1;
	} while ((power1 - .01 >= power2) || (power2 >= power1 + .01));
	cout << p1 -1 << endl << endl;



	return 0;
}