#include <iostream>

import BPZ1901.Tolstokorov.Lab3.Task1;
import BPZ1901.Tolstokorov.Lab3.Task2;
import BPZ1901.Tolstokorov.Lab3.Task3;
import BPZ1901.Tolstokorov.Lab3.Task4;
import BPZ1901.Tolstokorov.Lab3.Task5;

int main() {
	const double x = 13.37;
	const int i = 15;
	const int n = 150;
	const double eps = 0.001;

	std::cout << "Values" << std::endl;
	std::cout << "  x   = " << x << std::endl;
	std::cout << "  i   = " << i << std::endl;
	std::cout << "  n   = " << n << std::endl;
	std::cout << "  eps = " << eps << std::endl;

	std::cout << std::endl << "Task 1" << std::endl;
	std::cout << "f(" << x << ") = " << Task1::f(x) << std::endl;
	std::cout << "f2(" << x << ") = " << Task1::f2(x) << std::endl;
	// Тут раньше был вызов функции a, но теперь она не экспортируется
	std::cout << "f3(" << n << ") = " << Task1::f3(n) << std::endl;
	std::cout << "f4(" << eps << ") = " << Task1::f4(eps) << std::endl;

	std::cout << std::endl << "Task 2" << std::endl;

	std::cout << "f(" << x << ") = " << Task2::f(x) << std::endl;
	std::cout << "f2(" << x << ") = " << Task2::f2(x) << std::endl;
	std::cout << "a(" << i << ") = " << Task2::a(i) << std::endl;
	std::cout << "f3(" << n << ") = " << Task2::f3(n) << std::endl;
	std::cout << "f4(" << eps << ") = " << Task2::f4(eps) << std::endl;

	std::cout << std::endl << "Task 3" << std::endl;

	std::cout << "f(" << x << ") = " << Task3::f(x) << std::endl;
	std::cout << "f2(" << x << ") = " << Task3::f2(x) << std::endl;
	std::cout << "a(" << i << ") = " << Task3::a(i) << std::endl;
	std::cout << "f3(" << n << ") = " << Task3::f3(n) << std::endl;
	std::cout << "f4(" << eps << ") = " << Task3::f4(eps) << std::endl;

	std::cout << std::endl << "Task 4" << std::endl;

	std::cout << "f(" << x << ") = " << Task4::f(x) << std::endl;
	std::cout << "f2(" << x << ") = " << Task4::f2(x) << std::endl;
	std::cout << "a(" << i << ") = " << Task4::a(i) << std::endl;
	std::cout << "f3(" << n << ") = " << Task4::f3(n) << std::endl;
	std::cout << "f4(" << eps << ") = " << Task4::f4(eps) << std::endl;

	std::cout << std::endl << "Task 5" << std::endl;

	std::cout << "f(" << x << ") = " << Task5::f(x) << std::endl;
	std::cout << "f2(" << x << ") = " << Task5::f2(x) << std::endl;
	std::cout << "a(" << i << ") = " << Task5::a(i) << std::endl;
	std::cout << "f3(" << n << ") = " << Task5::f3(n) << std::endl;
	std::cout << "f4(" << eps << ") = " << Task5::f4(eps) << std::endl;
}