#include "Fruit.h"

Fruit::Fruit(int posX, int posY):
	m_posX(posX),
	m_posY(posY)
{

}

int Fruit::getPosX() {
	return this->m_posX;
};

int Fruit::getPosY() {
	return this->m_posY;
};

void Fruit::setPosX(int posX) {
	this->m_posX = posX;
};

void Fruit::setPosY(int posY) {
	this->m_posY = posY;
};