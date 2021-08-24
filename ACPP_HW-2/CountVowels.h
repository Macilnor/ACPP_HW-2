#pragma once
#include <string>
#include <algorithm>

using namespace std;

int CountVowels1(ifstream& s)
{
	string vowels = "aAeEuUiIoO";
	std::istreambuf_iterator<char> it{ s }, end;
	return count_if(it, end, [vowels](char c)
		{return (vowels.find(c) != string::npos); });
}

int CountVowels2(ifstream& s)
{
	string vowels = "aAeEuUiIoO";
	std::istreambuf_iterator<char> it{ s }, end;
	return count_if(it, end, [vowels](char c)
		{
			for (size_t i = 0; i != vowels.size(); i++)
			{
				if (vowels[i] == c)
					return true;
			}
			return false;
		});
}

int CountVowels3(ifstream& s)
{
	int count = 0;
	string vowels = "aAeEuUiIoO";
	std::istreambuf_iterator<char> it{ s }, end;
	for (it; it != end; it++)
	{
		if (vowels.find(*it) != string::npos)
		{
			count++;
		}
	}
	return count;
}

int CountVowels4(ifstream& s)
{
	int count = 0;
	string vowels = "aAeEuUiIoO";
	std::istreambuf_iterator<char> it{ s }, end;
	for (it; it != end; it++)
	{
		for (auto ch : vowels)
		{
			if (ch == *it)
			{
				count++;
			}
		}
	}
	return count;
}