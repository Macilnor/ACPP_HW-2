#pragma once
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void SortPointers(vector<T*>& v)
{
	sort(v.begin(), v.end(), [](T* a, T* b)
		{return *a < *b; });
}
