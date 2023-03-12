
#include <iostream>
#include "eq2.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	eq2 u1(2, -53, 12);
	eq2 u2(-3, -35, 14);
	eq2 u3;

	u3 = u1 + u2;

	cout << "Решение первого уравнения  -> " << u1.find_X() << "\n";
	cout << "Решение второго уравнения  -> " << u2.find_X() << "\n";
	cout << "Решение третьего уравнения -> " << u3.find_X() << "\n";

	double E;
	cout << "Введите X: ";
	cin >> E;

	cout << "Значение первого уравнения при  X = " << E << " -> " << u1.find_Y(E) << "\n";
	cout << "Значение второго уравнения при  X = " << E << " -> " << u2.find_Y(E) << "\n";
	cout << "Значение третьего уравнения при X = " << E << " -> " << u3.find_Y(E) << "\n";

	return 0;
}
