#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial;

class Term{
	friend Polynomial;
private:
	float coef;
	int exp;
};

class Polynomial{
private:
	Term *termArray;
	int capacity;
	int terms;
public:
	Polynomial(int =0);
	float Eval(float );
	~Polynomial();
};

#endif