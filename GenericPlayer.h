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
	//��� �����.�������������� ��� ����� �����
	void OpenCard();

	//���������� ��������, ���� � ������ ������� -
	virtual bool IsHitting() const = 0;
	bool IsBoosted()const;//�������
	// ���������, ��� ����� ����� �������
	void Bust() const;

	friend std::ostream& operator << (std::ostream &, const GenericPlayer &gp);


};

