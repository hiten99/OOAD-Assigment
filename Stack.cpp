// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment. 
//
// Stack
//constructor
template <typename T>
Stack <T>::Stack (void)
	:s_top(0),
	max_len(0),
	s_data_(0)
{

}

//
// Stack
//copy constructor
template <typename T>
Stack <T>::Stack (const Stack & stack)
	:s_top(stack.s_top),
	max_len(stack.max_len),
	s_data_(stack.s_data_)
{

}

//
// ~Stack
//destructor
template <typename T>
Stack <T>::~Stack (void)
{

}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{

	//for first element pushed in stack
	if (s_top==0 && max_len==0)
	{
		s_top=1;
		max_len=s_top+5;
		s_data_.resize(max_len);
		s_data_[s_top]=element;
	}
	// when stack top is less than max_len
	else if(s_top<max_len)
	{
		s_top++;
		//checking if max_len and s_top is equal or no if yes increasing its size by 1
		if(max_len-s_top==0)
		{
			max_len=s_top+1;
			s_data_.resize(max_len);
		}
		s_data_[s_top]=element;
	}
	// when stack top is greater than max_len
	else if(s_top>max_len)
	{
		s_top++;
		s_data_.resize(s_top);
		max_len=s_top+5;
		s_data_[s_top]=element;
	}
	// when stack top is equal to max_len
	else if (s_top==max_len)
	{
		s_top++;
		max_len=s_top+3;
		s_data_.resize(max_len);
		s_data_[s_top]=element;
	}
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	if (s_top==0)
	{
		throw empty_exception();
	}
	// removing the element from stack
	s_top--;
	
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	// for rhs greater than s_data_
	if (s_data_.size()<rhs.size())
	{
		// resizing the s_data_ according to rhs size
		s_data_.resize(rhs.size());
		s_top=rhs.size();
		// increasing size of max_len
		max_len=rhs.size()+5;
		s_data_=rhs.s_data_;
	}
	// for rhs smaller than s_data_
	else
	{
		s_top=rhs.s_top;
		s_data_=rhs.s_data_;
	}
	return *this;
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
	//clearing the stack
	s_top=0;
}
