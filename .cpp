#include "StdAfx.h"
#include <cstdlib>
#include "die.h"


die::die(void)
{
	sides = 6;
}

die::~die(void)
{
}

void die::roll()
{
	position = rand() % sides + 1;
}

int die::getPosition()
{
	return position;
}
