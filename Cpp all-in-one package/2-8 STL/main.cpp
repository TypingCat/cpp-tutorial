#include <iostream>

#include <vector>
#include <array>
#include <deque>

#include <set>
#include <unordered_set>

int main()
{
	// ∫§≈Õ π›∫ππÆ
	std::vector<int> v{ 1, 2, 3 };
	for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}