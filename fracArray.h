#ifndef arra
#define arra
#include"frac.cpp"
//declaration of class ArrayOfFractions



class ArrayOfFractions{
	private:
		Fraction array[10];


	public:
		ArrayOfFractions();
		void sortAscending();
		void print();
		Fraction min();
		Fraction max();
		Fraction sum();
};

#endif
