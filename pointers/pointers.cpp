// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void foo(int a)
{
	std::cout << "Adresa var a in foo este " << &a << std::endl;
	std::cout << "Val lui a este: " << a << std::endl;
}

void reverseString(std::string& input)
{
	std::string res = "";
	for (int i = input.length()-1; i >= 0; i--)
	{
		res += input[i];
	}
	input = res;
}


int main()
{
	int a = 5;
	std::cout << "Adresa var a in main este " << &a << std::endl;
	foo(a);
	std::string* food_ptr;
	std::string mancare = "Pizza";
	food_ptr = &mancare;
	std::cout << "Adresa lui mancareee :" << &mancare << std::endl;

	std::cout << "Adresa lui mancareee :" << food_ptr << std::endl;

		std::cout << "Adresa lui mancareee :" << *food_ptr	 << std::endl;
		std::cout << "Adresa lui mancareee :" << mancare << std::endl;
		*food_ptr = "Shaworma";
		std::cout << "Vaal lui mancare dupa modificare este:" << *food_ptr << std::endl;
		
		std::string food = "bergher";
		std::string& my_ref = food;
		std::cout << "Vaal lui mancare dupa modificare este:" << my_ref << std::endl;
		reverseString(my_ref);
		std::cout <<  my_ref<< std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
