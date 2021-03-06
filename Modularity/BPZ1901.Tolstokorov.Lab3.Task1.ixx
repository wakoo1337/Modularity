export module BPZ1901.Tolstokorov.Lab3.Task1;

import <cmath>;

namespace Task1 {
	export double f(const double x) {
		return 1 / (sqrt(x) + sqrt(2.0));
	};
	export double f2(const double x) {
		return (x < 3.2) ? (pow(x, 4.0) + 9.0) : 54 * pow(x, 4.0) / (-5.0 * x * x + 7.0);
	};
	double a(const int i) {
		return (1.0 - ((2.0 * i - 1.0) / (2.0 * (i + 1.0)))) * ((i % 2) ? -1.0 : 1.0);
	};
	export double f3(const int n) {
		double acc = 0.0;
		for (int i = 0; i <= n; i++) {
			acc += a(i);
		};
		return acc;
	};
	export double f4(const double eps) {
		double prev = a(0);
		double curr = a(1);
		double acc = prev + curr;
		for (int i = 2; abs(prev - curr) > eps; i++) {
			prev = curr;
			curr = a(i);
			acc += curr;
		};
		return acc;
	};
};