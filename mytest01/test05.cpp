#include <iostream>
#include <string>
using namespace std;


class Fraction
{
public:
	Fraction(int numerator, int denominator = 1)
		:m_numerator(numerator), m_denominator(denominator)
	{
	}

    // int operator+(const int& x,const Fraction& ff);
	// //转换函数
	// int operator+(const Fraction& ff) const
	// {
	// 	return ff.m_numerator +5 ;
	// }
    int get_num() const {return m_numerator;}
 
private:
	int m_numerator;        //分子
	int m_denominator;      //分母
};


//转换函数
int operator+(const int& x,const Fraction& ff) 
	{
		return ff.get_num() +x ;
	}

 
int main()
{
	Fraction f(3,5);
    Fraction f1(30,50);
	int sum = 60 + f1;
	std::cout << "sum = " << sum << std::endl;   //sum = 4.6


    return 0;
}