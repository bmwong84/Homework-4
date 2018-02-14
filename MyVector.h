//Bryant Wong
//CSCI 2421 Homework 4

#ifndef MYVECTOR_
#define MYVECTOR_
/*Defines a MyVector type which mirrors the STL vector class.  It uses templates and dynamic memory allocation*/
#include <iostream>



namespace HW4
{
typedef int ItemType;
class MyVector
{
private:
    int vsize = 0;		//size of the "vector" so max size of the array
    ItemType* vec = nullptr;	//pointer vec pointing to the array 

public:
    MyVector();				//default constructor declaration
	~MyVector();			//destructor declaration
    ItemType operator[] (int index);		//overloaded operator for [] brackets to return value of element
    void pop_back();				//declaration for member function to remove last element from the "vector"
    void push_back(ItemType& value);		//declaration for member function to add the value to the end of the "vector"
    int size();				//returns the vector size
    bool empty();				//determine if is empty
    int search(ItemType& Value);		//declaration for member function to search for the target in the vector and return its element position
    
    
};

}//namespace
#endif
