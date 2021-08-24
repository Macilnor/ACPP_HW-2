#pragma once

template <class T>
void Swap(T* a, T* b)
{
	T temp = move(*a);
	*a = move(*b);
	*b = move(temp);
};
