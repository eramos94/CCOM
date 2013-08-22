//Edwin Ramos//
//17 de agosto 2013
//frac.cpp
//definicion de member functions para clase Fraction

#include "frac.h"
#include <iostream>
#include <cmath>
using namespace std; 
//constructor
Fraction::Fraction(){
	denom=1;
	num=0;
}
//denom getter
int Fraction::getDenom(){
	return denom;
}
//num getter
int Fraction::getNum(){
	return num;
}
//num setter
void Fraction::setNum(int x){
	num=x;
}
//denom setter
void Fraction::setDenom(int x){
	if(x!=0){
		denom=x;
	}


	else{
		cout<<"denom can't be 0 \n";
	}
};
//prints fraction
void Fraction::print(){
	cout<<num<<"/"<<denom;
};
//function add
//	parameter:
//		Fraction f: to be added to calling object
//	returns sum of fractions
Fraction Fraction::add(Fraction f){
	Fraction mew;
	int newDenom=denom*f.getDenom();
	int newNum= (num*f.getDenom())+ (denom*f.getNum());

	mew.setDenom(newDenom);
	mew.setNum(newNum);
	
	return mew;
};
	
//function sub
//	parameters:
//		fraction f: fraction to be subtracted
//	returnsnew  fraction result of subtraction of parameter to calling object
Fraction Fraction::sub(Fraction f){
	Fraction mew;
	int newDenom=denom*f.getDenom();
        int newNum= (num*f.getDenom())- (denom*f.getNum());

	mew.setDenom(newDenom);
	mew.setNum(newNum);

	return mew;
};

//function mul
//parameter f: fraction to be multiplied by
//returns result of multiplication
Fraction Fraction::mul(Fraction f){
	Fraction mew;
	int newDenom= denom*f.getDenom();
	int newNum= (num*f.getDenom())*(denom*f.getNum());

	mew.setDenom(newDenom);
	mew.setNum(newNum);

	return mew;
}
//funtion div 
//	parameter: f: fraction to be divided by
//	returns result of division
Fraction Fraction::div(Fraction f){
	Fraction mew;
	int newDenom= denom* f.getNum(); 
	int newNum= num* f.getDenom(); 

	mew.setDenom(newDenom); 
	mew.setNum(newNum); 

	return mew; 
} 
//function great
// parameters f: fraction for comparison
//	checks if calling object is greater than parameter, returns true if
//	greater, false if not
bool Fraction::great(Fraction f){ 
	if(static_cast<double>(num)/static_cast<double>(denom) > static_cast<double>(f.getNum())/static_cast<double>(f.getDenom())){ 
		return true; 
	} 

	else 
		return false; 
} 
//function reduce
//	simplifies fraction as much as possible
void Fraction::reduce(){ 

	for(int i= static_cast<int>(sqrt(denom)); i>=1; i--){
		if (denom%i==0 &&  num%i==0){
			denom/=i;
			num/=i;
		}
	}
}

		  
