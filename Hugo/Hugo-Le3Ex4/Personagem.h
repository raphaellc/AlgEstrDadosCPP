#include<string>
#pragma once
#include"libUnicornio.h"
using namespace std;

class Personagem:public ObjetoTileMap
{
protected:
	Sprite spr;
	Vetor2D dir;
	float velo;
public:
	Personagem();
	~Personagem();
	void setSpriteSheet(string spritesheet);
	virtual void atualizar() = 0;
};
