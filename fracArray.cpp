/************************************************
fracArray.cpp
-------------
Por: Edwin Ramos, 20 de agosto de 2013 

Definiciones de las funciones miembro de la clase ArrayOfFractions
*************************************************/ 

#include "fracArray.h"
#include<iostream>
//function ArrayOfFunctions
//	constructor for class ArrayOfFractions, assigns random numbers to each
ArrayOfFractions::ArrayOfFractions(){
        srand(time(NULL));
	int temp, temp2;
         for(int i=0; i<10; i++){
                 temp=1+rand()%9;
                 temp2=1+rand()%9;
                array[i].setDenom(temp);
                array[i].setNum(temp2);
	}
}


//Function: sortAscending
//	Given an array of Fractions will sort them from smallest to greatest
//	Prameters:
//		none
//	returns nothing
void ArrayOfFractions::sortAscending(){
        int startScan, maxIndex, size=10;
        Fraction  maxValue;

         for (startScan = 0; startScan < (size - 1); startScan++){
                 maxIndex = startScan;
                 maxValue = array[startScan];


                for(int index = startScan + 1; index < size; index++){
                        if (!array[index].great(maxValue)){
                                 maxValue = array[index];
                                 maxIndex = index;
                        }
                }
                        array[maxIndex] = array[startScan];
                        array[startScan] = maxValue;
        }
}

//function print
//    prints array
void ArrayOfFractions::print(){
	for(int i=0;i<10;i++){
		array[i].print();
		cout<<endl;
	}
}

// function sum
//    returns Fraction containing sum of all elements in array that calls it
Fraction ArrayOfFractions::sum(){
	Fraction total;
	for(int i=0; i<10; i++){
		total.add(array[i]);
	}
	total.reduce();
	return total;
}
//function max
//	returns largest fraction in array
Fraction ArrayOfFractions::max(){
	Fraction max;
	for(int i=0;i<10;i++){
		if(array[i].great(max)){
			max=array[i];
		}
	}

	return max;
}
//funtion min
//	returns smallest fraction in array
Fraction ArrayOfFractions::min(){
	Fraction min=array[0];
	for(int i=0;i<10;i++){
		if(!array[i].great(min)){
			min=array[i];
		}
	}
	return min;
}

