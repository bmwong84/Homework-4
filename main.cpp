//Bryant Wong
//CSCI 2421 Homework 4


#include "MyVector.h"

int main()
{
	HW4::MyVector myvector;			//creates an instance of class MyVector named myvector

	char menuChoice='0';
	int pushBack = 0;
	int target = 0;
	while (menuChoice != '6')
	{
		std::cout << "Menu" << std::endl;
		std::cout << "1. Add entries via push_back" << std::endl;
		std::cout << "2. Remove the last entry via pop_back" << std::endl;
		std::cout << "3. Check vector size (number of elements in vector)" << std::endl;
		std::cout << "4. Check if vector is empty" << std::endl;
		std::cout << "5. Search for a target in vector" << std::endl;
		std::cout << "6. Exit" << std::endl;
		std::cin >> menuChoice;

		switch (menuChoice)
		{
		case '1':
			std::cout << "Enter an integer to add to the vector" << std::endl;
			std::cin >> pushBack;					
			myvector.push_back(pushBack);			//calls the push_back member function, passing an entered value for the array pointed to by vec
			break;
		case '2':
			myvector.pop_back();		//calls the pop_back member function for the array pointed to by vec
			break;
		case'3':
			std::cout << "Vector has " << myvector.size() << " elements." << std::endl;			
			break;
		case '4':
			if (myvector.empty())		//calls the empty member function to check if it is empty, if true
				std::cout << "Vector is empty" << std::endl;
			else
				std::cout << "Vector is not empty.  Vector has " << myvector.size() << " elements" << std::endl;		//if not true, tells user how many elements exist in the vector
			break;
		case '5':
			std::cout << "Enter an integer to search for in the vector" << std::endl;	
			std::cin >> target;
			if (myvector.search(target) == -1)			//if the member function search, passed target, returns -1, the value is not in the vector
				std::cout << target << " is not in the vector" << std::endl;
			else
				std::cout << target << " is at the position " << myvector.search(target) <<  std::endl;	//else the target is at the first element encountered
			break;
		case '6':
			
			break;
		default:
			std::cout << "Invalid entry" << std::endl;
		}
	}
	

	return 0;
}