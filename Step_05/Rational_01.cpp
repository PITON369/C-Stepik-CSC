//https://stepik.org/lesson/559/step/3?unit=882

/*Вам дан класс Rational, который описывает рациональное число. В нем определены методы add, sub, mul и div, которые прибавляют к нему число, отнимают число, умножают на число и делят на число соответственно. Кроме того в нем определен метод neg, который меняет знак на противоположный.

Вам нужно определить операторы +=, -=, *=, /= для класса Rational так, чтобы они могли принимать в качестве аргументов и объекты типа Rational и целые числа. Кроме того вам необходимо определить операторы унарного минуса и плюса для класса Rational.

Требования к реализации: ваш код не должен вводить или вводить что-либо, реализовывать функцию main не нужно. Кроме того, нельзя (это совершенно не нужно) использовать динамическую память или подключать какие-либо библиотеки.*/

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational & operator +=(int i)
	{
		numerator_ = numerator_ + i*denominator_;
        return *this;
	}

    Rational & operator -=(int i)
	{
		numerator_ = numerator_ - i*denominator_;
        return *this;
	}
    
    Rational & operator *=(int i)
	{
		numerator_ = numerator_ * i;
        return *this;
	}
    
    Rational & operator /=(int i)
	{
		denominator_ = i*denominator_;
        return *this;
	}
    
    //const Rational
    Rational & operator +=(Rational const& r)
	{
		numerator_ = numerator_ * r.denominator_ + r.numerator_*denominator_;
        denominator_ = denominator_ * r.denominator_;   
        return *this;
	}

    Rational & operator -=(Rational const& r)
	{
		numerator_ = numerator_ * r.denominator_ - r.numerator_*denominator_;
        denominator_ = denominator_ * r.denominator_;   
        return *this;
	}
    
    Rational & operator *=(Rational const& r)
	{
		numerator_ = numerator_ * r.numerator_;
        denominator_ = denominator_ * r.denominator_;  
        return *this;
	}
    
    Rational & operator /=(Rational const& r)
	{
		numerator_ = numerator_ * r.denominator_;
        denominator_ = denominator_ * r.numerator_;   
        return *this;
	}
 
    //Unar Rat

    Rational operator-() const 
	{
		//numerator_ = - numerator_;
        return Rational(-numerator_,
                        denominator_);
	}    

    Rational operator+() const
	{
		return *this;
	}  
    

  
    
private:
    int numerator_;
    int denominator_;
};
