module BPZ1901.Tolstokorov.Lab3.Task2;
namespace Task2 {
	double f(const double x) {
		return 1 / (sqrt(x) + sqrt(2.0));
	};
	double f2(const double x) {
		if (x < 3.2) return (pow(x, 4.0) + 9.0);
		else return 54 * pow(x, 4.0) / (-5.0 * x * x + 7.0);
	};
	double a(const int i) {
		return (1.0 - ((2.0 * i - 1.0) / (2.0 * (i + 1.0)))) * ((i % 2) ? -1.0 : 1.0);
	};
	double f3(const int n) {
		double acc = 0.0;
		int i = 0;
		while (i <= n) {
			acc += a(i);
			i++;
		};
		return acc;
	};
	double f4(const double eps) {
		double prev = a(0);
		double curr = a(1);
		double acc = prev + curr;
		int i = 2;
		while (abs(prev - curr) > eps) {
			prev = curr;
			curr = a(i);
			i++;
			acc += curr;
		};
		return acc;
	};
};