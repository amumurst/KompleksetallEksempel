#include "Complex.h"
#include <cmath>
ComplexNumber::ComplexNumber() {
	real = 0;
	imag = 0;
}

ComplexNumber::ComplexNumber(double re, double im){
	real = re;
	imag = im;
}
ComplexNumber::ComplexNumber(double re) {
	real = re;
	imag = 0;
}

double ComplexNumber::abs() {
	return sqrt(real*real + imag*imag);
}


ComplexNumber ComplexNumber::operator+(const ComplexNumber& rhs)const {
	ComplexNumber retVal=*this;
	retVal+=rhs;
	return retVal;
}
ComplexNumber& ComplexNumber::operator+=(const ComplexNumber& rhs) {
	this->real+=rhs.real;
	this->imag+=rhs.imag;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const ComplexNumber &rhs) {
	os << rhs.real << " + " << rhs.imag << "i ";
	return os;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& rhs)const {
	ComplexNumber retVal;
	retVal.real = real*rhs.real - imag*rhs.imag;
	retVal.imag = imag*rhs.real + rhs.imag*real;
	return retVal;
}
ComplexNumber& ComplexNumber::operator*=(const ComplexNumber& rhs) {
	*this = *this * rhs;
	return *this;
}

ComplexNumber ComplexNumber::operator*(double rhs)const {
	ComplexNumber retVal;
	retVal.real = real*rhs;
	retVal.imag = imag*rhs;
	return retVal;
}
ComplexNumber operator* (double vhs, const ComplexNumber& rhs) {
	return rhs*vhs;
}

bool ComplexNumber::operator==(const ComplexNumber& rhs) {
	return (real == rhs.real) && (imag == rhs.imag);
}
const ComplexNumber ComplexNumber::operator-()const {
	ComplexNumber ret(-real,-imag);
	return ret;
}

const ComplexNumber ComplexNumber::operator!()const {
	return ComplexNumber(real, -imag);
}

const double& ComplexNumber::operator[](int index)const {
	if (index == 0) {
		return real;
	}
	if (index == 1) {
		return imag;
	}
	//Dersom du inekserer utenfor vil programmet ditt krasje fordi du ikke returnerer. 
	//enkelte kompilatorer vil ikke la deg ha en funksjon som ikke garanterer å returnere noe.
	//Her vil man da typisk kjøre en slags feilmelding (noe vi skal se på senere i faget)

}
double& ComplexNumber::operator[](int index){
	if (index == 0) {
		return real;
	}
	if (index == 1) {
		return imag;
	}
	//Dersom du inekserer utenfor vil programmet ditt krasje fordi du ikke returnerer. 
	//enkelte kompilatorer vil ikke la deg ha en funksjon som ikke garanterer å returnere noe.
	//Her vil man da typisk kjøre en slags feilmelding (noe vi skal se på senere i faget)
}
