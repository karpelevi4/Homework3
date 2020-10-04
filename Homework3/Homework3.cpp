#include <iostream>
#include <math.h>
using namespace  std;

int main() {
	// Задача «Заем». Месячная выплата m по займу в S рублей 
	//на n лет под процент p вычисляется по формуле.
	double m, S, p, r, n, power;
	cout << "Loan S: ";
	cin >> S;
	cout << "Amount of years n: ";
	cin >> n;
	cout << "Percenage p: ";
	cin >> p;
	r = p / 100;
	power = pow((1 + r), n);
	m = (S * r * power) / (12 * (power - 1));
	cout << "m = " << m << endl << endl;

	// Задача «Ссуда». Под какой процент p выдана ссуда величиной S рублей, 
	// которая гасится месячными выплатами величиной m в течение n лет.
	// Формула приведена в предыдущей задаче.
	double S1, m1, n1, r1, p1;
	cout << "Loan S: ";
	cin >> S1;
	cout << "Monthly payment m: ";
	cin >> m1;
	cout << "Amount of years n: ";
	cin >> n1;
	r1 = pow((12 * m) / (12 * m - S * r), 1 / n1) - 1;
	p1 = r1 * 100;
	cout << "p = " << p1 << endl << endl;

	return 0;
}
