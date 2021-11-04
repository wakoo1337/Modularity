module BPZ1901.Tolstokorov.Lab3.Task4:a;
namespace Task4 {
	double a(const int i) {
		return (1.0 - ((2.0 * i - 1.0) / (2.0 * (i + 1.0)))) * ((i % 2) ? -1.0 : 1.0);
	};
}