//declaration of class Fraction
#ifndef FRACTION
# define FRACTION
class Fraction{


	private:
		int denom;
		int num;

	public:
		Fraction();

		int getDenom();
		void setDenom(int);
	
		int getNum();
		void setNum(int);
	
		void print();
		Fraction add(Fraction);
		Fraction sub(Fraction);
		Fraction mul(Fraction);
		Fraction div(Fraction);
		bool great(Fraction); 	 
		void reduce(); 
};

#endif
