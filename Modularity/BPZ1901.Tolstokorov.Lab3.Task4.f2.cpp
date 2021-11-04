module BPZ1901.Tolstokorov.Lab3.Task4:f2;
namespace Task4 {
	double f2(const double x) {
		return (x < 3.2) ? (pow(x, 4.0) + 9.0) : 54 * pow(x, 4.0) / (-5.0 * x * x + 7.0);
	};
};