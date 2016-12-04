// -*- C++ -*-
// $Id: Stack.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
	return s_top;
}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const
{
	if (s_top==0)
	{
		throw empty_exception();
	}
	else
	{
		// return element at the top of stack
		return s_data_[s_top];
	}
	
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
	// checking if stack top is empty
	if (s_top==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}











