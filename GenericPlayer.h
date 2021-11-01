#pragma once
//#include"include.h"
#include <iostream>
#include <string>
#include "Hand.h"

class GenericPlayer :
	public Hand
{
protected:
	std::string m_Name;
public:
	GenericPlayer(const std::string& name = "");

	virtual ~GenericPlayer();
	//мой метод.Переворачивает все карты лицом
	void OpenCard();

	//возвращает значение, если у игрока перебор -
	virtual bool IsHitting() const = 0;
	bool IsBoosted()const;//перебор
	// объявляет, что игрок имеет перебор
	void Bust() const;

	friend std::ostream& operator << (std::ostream &, const GenericPlayer &gp);


};

