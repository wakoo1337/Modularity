module BPZ1901.Tolstokorov.Lab3.Task4:f4;
namespace Task4 {
	double f4(const double eps) {
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
}