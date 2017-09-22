class lab2
{
public:
	int factorial(int number) {
		int result = 0; // initial declaration
		if (number == 0 || number == 1) { // base class
			return 1; // base class will retun 1 
		}
		else { // recursion class
			result = number * factorial(number - 1); // calling recursive function
			return result; // returning final answer
		} 
	}
};

