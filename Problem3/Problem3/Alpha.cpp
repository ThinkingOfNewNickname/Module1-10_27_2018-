#include "Alpha.h"


Alpha::Alpha()
{
	N = new int(alphaSerialNumber);
	++alphaSerialNumber;
}

Alpha::~Alpha()
{
	while (elements.size() != 0)
	{
		popBack();
	}

	S = S - 2 * *N + 11;
}