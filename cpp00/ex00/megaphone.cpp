#include <iostream>
#define DEFAULT_NOISE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char **argv)
{
	std::string megaphoneSound;
	if (argc == 1)
		megaphoneSound = std::string(DEFAULT_NOISE);
	else
	{
		megaphoneSound = "";
		for (int i = 1; i < argc; i++)
		{
			megaphoneSound += argv[i];
			if (i < argc - 1)
				megaphoneSound += " ";
		}
	}
	std::string::iterator first = megaphoneSound.begin();
	std::string::iterator last = megaphoneSound.end();
	std::string::iterator result = megaphoneSound.begin();
	for (; first != last; ++first, ++result)
		*result = std::toupper(*first);
	std::cout << megaphoneSound << std::endl;
}
