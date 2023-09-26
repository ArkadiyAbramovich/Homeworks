#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

    Fraction operator+(const Fraction& fraction) {
            int numerator, denominator;
            if(denominator_ == fraction.denominator_) {
                numerator = numerator_ + fraction.numerator_;
                denominator = denominator_;
                return Fraction(numerator, denominator);
            } else {
                numerator = (numerator_ * fraction.denominator_) + (denominator_ * fraction.numerator_);
                denominator = denominator_ * fraction.denominator_;
                return Fraction(numerator, denominator);
            }

    }

	Fraction operator-(const Fraction& fraction) {
		int numerator, denominator;
            if(denominator_ == fraction.denominator_) {
                numerator = numerator_ - fraction.numerator_;
                denominator = denominator_;
                return Fraction(numerator, denominator);
            } else {
                numerator = (numerator_ * fraction.denominator_) - (denominator_ * fraction.numerator_);
                denominator = denominator_ * fraction.denominator_;
                return Fraction(numerator, denominator);
            }
	}

	Fraction operator*(const Fraction& fraction) {
        int numerator, denominator;
        numerator = numerator_ * fraction.numerator_;
        denominator = denominator_ * fraction.denominator_;
		return Fraction(numerator, denominator);
	}

	Fraction operator/(const Fraction& fraction) {
        int numerator, denominator;
        numerator = numerator_ * fraction.denominator_;
        denominator = denominator_ * fraction.numerator_;
		return Fraction(numerator, denominator);
	}

	Fraction operator-() {

        numerator_ = -numerator_;
		return (*this);
	}

	Fraction operator--() {
		numerator_ -= denominator_;
        return (*this);
	}

    Fraction operator--(int) {
		Fraction fraction = *this;
        --(*this);
        return fraction;
	}

    Fraction operator++() {
		numerator_ += denominator_;
        return (*this);
	}

    Fraction operator++(int) {
		Fraction fraction = *this;
        ++(*this);
        return fraction;
	}

    // friend std::ostream& operator<<(std::ostream& out, Fraction& fraction);

    void print() {

        while(true) {

            if (numerator_ % 2 == 0 && denominator_ % 2 == 0) {
                numerator_ /= 2;
                denominator_ /=2;
            } else if(numerator_  % 3 == 0 && denominator_ % 3 == 0) {
                numerator_ /= 3;
                denominator_ /= 3;
            } else if (numerator_  % 5 == 0 && denominator_ % 5 == 0) {
                numerator_ /= 5;
                denominator_ /= 5;
            } else {
                std::cout << numerator_ << "/" << denominator_ << std::endl;
                break;
            }
        }
    }

    int getNumerator() {
        return numerator_;
    }

    int getDenominator() {
        return denominator_;
    }
};


// std::ostream& operator<<(std::ostream& out, Fraction& fraction) {

//         if (fraction.getNumerator() % 2 == 0 && fraction.getDenominator() % 2 == 0) {
//             fraction.getNumerator() / 2;
//             fraction.getDenominator()/ 2;
//         } else if(fraction.getNumerator() % 3 == 0 && fraction.getDenominator() % 3 == 0) {
//             fraction.getNumerator() / 3;
//             fraction.getDenominator() / 3;
//         } else if (fraction.getNumerator() % 5 == 0 && fraction.getDenominator() % 5 == 0) {
//             fraction.getNumerator() / 5;
//             fraction.getDenominator() / 5;
//         } else {
//             out << fraction.getNumerator() << "/" << fraction.getDenominator() << std::endl;
//         }
        
//     return out;
// }

int main(int argc, char** argv) {

    int numerator1, denominator1, numerator2, denominator2;

    std::cout << "Введите числитель дроби 1: ";
    std::cin >> numerator1;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> denominator1;

    std::cout << "Введите числитель дроби 2: ";
    std::cin >> numerator2;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> denominator2;

    Fraction fraction1(numerator1, denominator1);
    Fraction fraction2(numerator2, denominator2);

    Fraction addFrac = (fraction1 + fraction2);
    std::cout << fraction1.getNumerator() << "/" << fraction1.getDenominator() << " + " << fraction2.getNumerator() << "/" << fraction2.getDenominator() << " = ";
    addFrac.print();

    Fraction subFrac = (fraction1 - fraction2);
    std::cout << fraction1.getNumerator() << "/" << fraction1.getDenominator() << " - " << fraction2.getNumerator() << "/" << fraction2.getDenominator() << " = ";
    subFrac.print();

    Fraction mulFrac = (fraction1 * fraction2);
    std::cout << fraction1.getNumerator() << "/" << fraction1.getDenominator() << " * " << fraction2.getNumerator() << "/" << fraction2.getDenominator() << " = ";
    mulFrac.print();

    Fraction devFrac = (fraction1 / fraction2);
    std::cout << fraction1.getNumerator() << "/" << fraction1.getDenominator() << " / " << fraction2.getNumerator() << "/" << fraction2.getDenominator() << " = ";
    devFrac.print();

    

    Fraction mulPref = (++fraction1 * fraction2);
    std::cout << "++" << fraction1.getNumerator() << "/" << fraction1.getDenominator() << " * " << fraction2.getNumerator() << "/" << fraction2.getDenominator() << " = ";
    mulPref.print();

    std::cout << "Значение дроби 1 = " << fraction1.getNumerator() << "/" << fraction1.getDenominator() << std::endl;

    

    Fraction multPostf = (fraction1-- * fraction2);
    std::cout << fraction1.getNumerator() << "/" << fraction1.getDenominator() << "--" << " * " << fraction2.getNumerator() << "/" << fraction2.getDenominator() << " = ";
    multPostf.print();

    std::cout << "Значение дроби 1 = " << fraction1.getNumerator() << "/" << fraction1.getDenominator() << std::endl;

    ++fraction1;
    fraction1.print();

    fraction1++;
    fraction1.print();

    --fraction1;
    fraction1.print();

    fraction1--;
    fraction1.print();

    -fraction1;
    fraction1.print();

    return 0;

}