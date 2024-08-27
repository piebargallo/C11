#include <memory>

int main()
{
	{
		int* i = new int();
		std::declare_reachable(i);
	}

	return std::get_pointer_safety() == std::pointer_safety::relaxed;
	return 0;
}