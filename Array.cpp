// $Id: Array.cpp 1473 2014-01-20 15:48:07Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
//
// Array
//
template <typename T>
Array <T>::Array(void)
	:data_(0),
	cur_size_(0),
	max_size_(0)
	// Hitendra, initialize each member variable on its own line in
	// the base member initialization section. This allow each variable
	// to be initialize properly, and have a distinct line for error
	// reporting and debugging.

	// Dr.Hill, I have initialize each member variable on its own line in
	// the base member initialization section.

{
	//Constructor.
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array(size_t length)
	:data_(new T[length]),
	cur_size_(length),
	max_size_(length)
	// Hitendra, initialize each member variable on its own line in
	// the base member initialization section. This allow each variable
	// to be initialize properly, and have a distinct line for error
	// reporting and debugging.

	// Dr.Hill, I have initialize each member variable on its own line in
	// the base member initialization section.

{
	//Parameterized Constructor with length. 
}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array(size_t length, T fill)
	:data_(new T[length]),
	cur_size_(length),
	max_size_(length)
	// Hitendra, initialize each member variable on its own line in
	// the base member initialization section. This allow each variable
	// to be initialize properly, and have a distinct line for error
	// reporting and debugging.

	// Dr.Hill, I have initialize each member variable on its own line in
	// the base member initialization section.

{
	// Parameterized Constructor with length and fill.
	for (size_t i = 0; i < length; i++) 
	{
		data_[i] = fill;
	}
}


//
// Array (const Array &)
//
template <typename T>
Array <T>::Array(const Array & array)
	:data_(new T[array.max_size_]),
	cur_size_(array.cur_size_),
	max_size_(array.max_size_)

	// Hitendra, initialize each member variable on its own line in
	// the base member initialization section. This allow each variable
	// to be initialize properly, and have a distinct line for error
	// reporting and debugging.

	// Dr.Hill, I have initialize each member variable on its own line in
	// the base member initialization section.

{
	//copy constructor. 
	for (size_t i = 0; i < max_size_; i++) 
	{
		// copying array elements.
		data_[i] = array.data_[i];
	}
}

//
// ~Array
//
template <typename T>
Array<T>::~Array(void) {
	//destructor.
	if(data_!=0)
	{
		delete [] data_;
	}
}

//
// operator =
//
template <typename T>
const Array<T> & Array<T>::operator=(const Array & rhs) {
	// Hitendra, you should only delete data_ if you have to allocate
	// a larger array to hold the contents of rhs. Otherwise, you should
	// be reusing the same array.

	// Dr.Hill, I have deleted data in case when max_size < cur_size_ allocated a new array to hold the contents of data 
	// and in the other case i.e.max_size_> cur_size_ just reduced the size of cur_size_

	if(max_size_<rhs.cur_size_)
	{
		T *temp=new T[rhs.cur_size_];
		cur_size_=rhs.cur_size_;
		max_size_ = rhs.cur_size_;
		for (size_t i = 0; i < cur_size_; i++) 
		{
			// copying array elements.
			temp[i] = rhs.data_[i];
		}
		T * swap=data_;
		data_=temp;
		temp=swap;
		delete [] temp;
		return *this;
	}
	else
	{
		cur_size_=rhs.cur_size_;
		for (size_t i = 0; i < cur_size_; i++) 
		{
			// copying array elements.
			data_[i] = rhs.data_[i];
		}
		return *this;
	}

}

//
// operator []
//
template <typename T>
T & Array<T>::operator[](size_t index) {
	if(index<cur_size_)
	{
		return data_[index];
	}
	else
	{
		throw std::out_of_range("Invalid \a index value");
	}
}

//
// operator [] 
//
template <typename T>
const T & Array<T>::operator[](size_t index) const {
	if(index<cur_size_)
	{
		return data_[index];
	}
	else
	{
		throw std::out_of_range("Invalid \a index value");
	}
}

//
// get
//
template <typename T>
T Array<T>::get(size_t index) const {
	if(index<=cur_size_)
	{
		return data_[index];
	}
	else
	{
		throw std::out_of_range("Invalid \a index value");
	}

}

//
// set
//
template <typename T>
void Array<T>::set(size_t index, T value) {
	if(index<=cur_size_)
	{
		data_[index] = value;
	}
	else
	{
		throw std::out_of_range("Invalid \a index value");
	}
}

//
// resize
//
template <typename T>
void Array<T>::resize(size_t new_size) {
	// checking if new size is greater than current size

	if (new_size > max_size_) 
	{
		// Hitendra, right now you are copying the data twice between two
		// arrays. Instead, you should copy the data to the new array, swap
		// the pointers, and then delete the old data.

		// Dr.Hill, I have swapped the pointers and deleted the old data in temp

		T* temp=new T[new_size];	
		// storing current array elements in temporary array
		for(size_t i=0;i<cur_size_;i++)
		{
			temp[i]=data_[i];
		}
		max_size_=cur_size_=new_size;
		T * swap=data_;
		data_=temp;
		temp=swap;
		delete [] temp;
	}
	else if (new_size < max_size_) 
	{
		// Hitendra, there is need need to allocate new array if the current array
		// is large enough to hold the new size.

		//Dr.Hill, I have not allocated new array and only changed the current size equal to new size	

		//checking if new size is less than current size.
		cur_size_=new_size;
	}
}

//
// find (char)
//
template <typename T>
int Array<T>::find(T ch) const {
	size_t a=0;
	for (size_t i = 0; i < cur_size_; i++) 
	{
		if (data_[i] == ch) 
		{ 
			// finding the character.
			a = i;
			break;
		} 
	}a=-1;
	return a;
}

//
// find (char, size_t) 
//
template <typename T>
int Array<T>::find(T ch, size_t start) const {
	if(start<cur_size_)
	{
		size_t a=0;
		for (size_t i = start; i < cur_size_; i++)
		{
			// finding the character from a given position.
			if (data_[i] == ch) {
				a = i;
				break;
			}
		}
		a=-1;
		return a;
	
	}
	else{
		throw std::out_of_range("Invalid index");
	}
}
//
// operator ==
//
template <typename T>
bool Array<T>::operator==(const Array & rhs) const {
	bool a;
	if (cur_size_ == rhs.cur_size_ ) 
	{
		// checking current size
		a = true;
	}
	else 
	{
		a = false;
	}
	if(a==true)
	{
		for (size_t i = 0; i < cur_size_; i++) 
		{
			// checking array elements
			if (data_[i] == rhs.data_[i])
			{	
				a = true;
			}
			else
			{
				a = false;
				break;
			}
		}
	}
	return a;
}

//
// operator !=
//
template <typename T>
bool Array<T>::operator!=(const Array & rhs) const {
	// Hitendra, it would be easier to write this method in terms of
	// operator ==. For example, return !(*this == rhs)

	// Dr.Hill, I have implemented as above	
	return !(*this == rhs);
}

//
// fill
//
template <typename T>
void Array<T>::fill(T ch) {
	for (size_t i = 0; i < max_size_; i++) 
	{
		// filling the array with char ch
		data_[i] = ch;
	}
}