#pragma once
//#include "include.h"
#include "GenericPlayer.h"
#include <string>

class House :
	public GenericPlayer
{
public:
	House(const std::string& name = "House");
	void FlipFirstCard();

private:
	virtual bool IsHitting() const;

};

