#pragma once
#include <iostream>
class ComplexNumber {
private:
	double real;
	double imag;
public:
	ComplexNumber(); //Defaultkonstruktør
	explicit ComplexNumber(double re); //explicit slik at foo(100) ikke skal fungere( se main)
	ComplexNumber(double re, double im); //Hjelpekonstruktør

	double abs();

	ComplexNumber operator+(const ComplexNumber& rhs)const;
	ComplexNumber& operator+=(const ComplexNumber& rhs);
	
	friend std::ostream& operator<<(std::ostream& os, const ComplexNumber &rhs);
	
	ComplexNumber operator*(const ComplexNumber& rhs)const;
	ComplexNumber& operator*=(const ComplexNumber& rhs);

	ComplexNumber operator*(double rhs)const;
	friend ComplexNumber operator* (double vhs, const ComplexNumber& rhs);

	bool operator==( const ComplexNumber& rhs);

	const ComplexNumber operator-()const;
	const ComplexNumber operator!()const; //Brukes for komplekskonjugant. Ikke egentlig god skikk siden det ikke kommer tydelig frem fre operatoren,
	
	const double& operator[](int index)const; //En for bruk på konstante objekter
	double& operator[](int index);			// Og en for vanlige objekter
};
