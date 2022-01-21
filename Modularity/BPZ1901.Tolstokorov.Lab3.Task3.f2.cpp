module BPZ1901.Tolstokorov.Lab3.Task3;
namespace Task3 {
	double f2(const double x) {
		if (x < 3.2) return (pow(x, 4.0) + 9.0);
		else return 54.0 * pow(x, 4.0) / (-5.0 * x * x + 7.0);
	};
};