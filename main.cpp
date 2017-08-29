#include "Complex.h"

using namespace std;

void foo(ComplexNumber cn) {};

int main() {
	double number=10;
	ComplexNumber a(2, 1);
	ComplexNumber b(3, 4);
	ComplexNumber c(number);
	foo(a);
	//foo(7); Dersom ComplexNumber(double real)-konstruktøren ikke er explicit er dette lov.
	cout << "A: " << a << "   B: " << b << "  C: " << c << endl;

	cout << "A+B= " << a + b << endl;
	cout << "A*B= " << a*b << endl;
	cout << "Komplekskonjugat av A " << !a << endl; //Egentlig ikke greit å bruke ! som komplekskonjugat
	cout << "-A= " << -a << endl;
	cout << "A==B? " << (a == b) << "  A==C? " << (a == c) << endl;
	cout << "|B|= " << b.abs() << endl;
	cout << "8*A*2= " << 8 * a * 2 << endl;
	cout << "Setter A sin imagdel til : " << (a[1] = 6) << endl;
	cout << "A inneholder> realdel: " << a[0] << " , imagdel: " << a[1] << endl;
}
