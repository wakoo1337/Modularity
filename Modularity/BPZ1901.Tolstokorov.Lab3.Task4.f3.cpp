module BPZ1901.Tolstokorov.Lab3.Task4:f3;
namespace Task4 {
	double f3(const int n) {
		double acc = 0.0;
		for (int i = 0; i <= n; i++) {
			acc += a(i);
		};
		return acc;
	};
}