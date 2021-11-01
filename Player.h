#pragma once
//#include "include.h"
#include "GenericPlayer.h"



class Player:public GenericPlayer
{
public:
	Player(const std::string& name = "");
	virtual bool IsHitting() const;
	//��� �����. ��������������� ����� � ������
	void FlipCard();


private:
	
	void Win() const;
	void Lose() const;
	void Push() const;

};



