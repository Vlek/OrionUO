/****************************************************************************
**
** GameObject.h
**
** Copyright (C) September 2015 Hotride
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
*****************************************************************************
*/
//---------------------------------------------------------------------------
#ifndef GamePlayerH
#define GamePlayerH
//--------------------------------------------------------------------------
class TPlayer: public TGameCharacter
{
private:
	short m_Str; //����
	short m_Int; //���������
	short m_Dex; //��������

	WORD m_MaxWeight; //������������ ���
	WORD m_Weight; //������� �������� ����

	short m_Armor; //�������� �����

	DWORD m_Gold; //���������� ����� �� �����

	//������������ ����� ������
	WORD m_StatsCap;
	
	CHARACTER_RACE_TYPE m_Race;

	//���������� ����������� �������
	BYTE m_Followers;

	//������������ ���������� ����������� �������
	BYTE m_MaxFollowers;
	
	short m_FireResistance;
	short m_ColdResistance;
	short m_PoisonResistance;
	short m_EnergyResistance;
	
	short m_Luck;
	
	short m_MinDamage;
	short m_MaxDamage;
	
	DWORD m_TithingPoints;

	bool m_Warmode; //����� ���

	TSkill *m_Skills; //��������� �� ������
public:
	TPlayer(DWORD serial);
	virtual ~TPlayer();
	
	SETGET(short, Str);
	SETGET(short, Int);
	SETGET(short, Dex);
	SETGET(WORD, MaxWeight);
	SETGET(WORD, Weight);
	SETGET(short, Armor);
	SETGET(DWORD, Gold);
	SETGET(bool, Warmode);
	SETGET(WORD, StatsCap);
	SETGET(BYTE, Followers);
	SETGET(BYTE, MaxFollowers);
	SETGET(short, FireResistance);
	SETGET(short, ColdResistance);
	SETGET(short, PoisonResistance);
	SETGET(short, EnergyResistance);
	SETGET(short, Luck);
	SETGET(short, MinDamage);
	SETGET(short, MaxDamage);
	SETGET(DWORD, TithingPoints);
	SETGET(CHARACTER_RACE_TYPE, Race);
	void SetName(string val);

	void SetSkillBaseValue(int index, float val);
	void SetSkillValue(int index, float val);
	void SetSkillCap(int index, float val);
	void SetSkillStatus(int index, BYTE val);
	
	float GetSkillBaseValue(int index) const;
	float GetSkillValue(int index) const;
	float GetSkillCap(int index) const;
	BYTE GetSkillStatus(int index) const;

	//��� ������ ������ � ����� (� ���������)
	TGameItem *FindBandage();

	bool IsPlayer() {return true;}
};
//---------------------------------------------------------------------------
extern TPlayer *g_Player; //������ �� ������
//---------------------------------------------------------------------------
#endif