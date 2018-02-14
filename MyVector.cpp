//Bryant Wong
//CSCI 2421 Homework 4

#include "MyVector.h"

HW4::MyVector::MyVector()
{
	vec = new ItemType[vsize]; // creates an array of type ItemType of size vsize that is pointed to by pointer vec
}//default constructor

HW4::MyVector::~MyVector()
{
	delete[] vec;
}//destructor


 HW4::ItemType HW4::MyVector::operator[](int index)
{
	return vec[index];		//returns the value of element of the passed index number
}


void HW4::MyVector::pop_back()
{
	if (vsize == 0)
		std::cout << "Vector is empty, cannot remove any items" << std::endl;
	else if (vsize > 0)
		vsize--;		//removes the last item by reducing the size of the array/vector by 1
}


void HW4::MyVector::push_back(ItemType& value)
{
	ItemType* temp = nullptr;			//create a new pointer to the array
	temp = new ItemType[vsize+1];		//set the pointer to point to the first element of a new array of the size of original array +1
	for (int count = 0; count < vsize; count++)
		temp[count] = vec[count];		//set each value in the new array to the value of the old array
	vsize++;							//increment the size
	temp[vsize - 1] = value;			//set the passed value to the last element of the new array
	delete[] vec;						//delete the original array
	vec = temp;							//set the class pointer to the temp pointer
	std::cout << value << " added to array" << std::endl;
}

int HW4::MyVector::size()
{
	return vsize;		//retuns the size of the vector
}

bool HW4::MyVector::empty()
{
	if (vsize == 0)		//if the vector has no elements in it, return true
		return true;
	else
		return false;
}


//searches the vector and returns -1 if it is not in the vector and returns the position if it is
int HW4::MyVector::search(ItemType& value)
{
	int index = 0;
	for (int index = 0; index < vsize; index++)	
	{
		if (vec[index] == value)		//if the element at position index is the passed value, return the index number
			return index;
	}
	return -1;		//if target not found in vector, return -1
}