module BPZ1901.Tolstokorov.Lab3.Task3;
namespace Task3 {
	double f3(const int n) {
		double acc = 0.0;
		int i = 0;
		do {
			acc += a(i);
			i++;
		} while (i <= n);
		return acc;
	};
};