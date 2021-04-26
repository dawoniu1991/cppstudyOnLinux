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
	//转换函数
	operator double() const
	{
		return (double)m_numerator / m_denominator;
	}

    //转换函数
operator string() const
{	
	return to_string(m_numerator) + "/" + to_string(m_denominator);
}
 
private:
	int m_numerator;        //分子
	int m_denominator;      //分母
};
 
int main()
{
	Fraction f(3,5);
	double sum = 4 + f;
	std::cout << "sum = " << sum << std::endl;   //sum = 4.6

    string str = f ;
    std::cout << "Result is: " << str << std::endl; //Result is: 3/5

    // std::string pi = "pi is " + std::to_string(3.1415926);
    // std::cout << "Result is: " << to_string(222) << std::endl; 
    // std::cout << "Result is: " << "to_string(222)" << std::endl; 
    return 0;
}