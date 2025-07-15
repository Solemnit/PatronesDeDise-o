#include <iostream>
#include "Personaje.h"

Personaje::Personaje(float health, float speed, int damage, float maxHealth, float jumpHeight)
{
	std::cout << "Llamando Constructor con Varaiables" << std::endl;
	_health = health;
	_speed = speed;
	_damage = damage;
	_maxHealth = maxHealth;
	_jumpHeight = jumpHeight;
}


Personaje::Personaje()
{
	std::cout << "Llamando Constructor Default" << std::endl;
	_health = 100;
	_speed = 10;
	_damage = 10;
	_maxHealth = 100;
	_jumpHeight = 10;
}

Personaje::~Personaje()
{
	std::cout << "Llamando Destructor" << std::endl;
}


void Personaje::Saltar()
{
	std::cout << "Saltando" << std::endl;
}

void Personaje::Disparar()
{
	std::cout << "Disparando" << std::endl;
}


float Personaje::GetHealth()
{
	return _health;
}

void Personaje::SetHealth(float health)
{
	_health = health;
}

float Personaje::GetSpeed()
{
	return _speed;
}

void Personaje::SetSpeed(float speed)
{
	_speed = speed;
}

int Personaje::GetDamage()
{
	return _damage;
}

void Personaje::SetDamage(int damage)
{
	_damage = damage;
}

float Personaje::GetMaxHealth()
{
	return _maxHealth;
}

void Personaje::SetMaxHealth(float maxHealth)
{
	_maxHealth = maxHealth;
}

float Personaje::GetJumpHeight()
{
	return _jumpHeight;
}

void Personaje::SetJumpHeight(float jumpHeight)
{
	_jumpHeight = jumpHeight;
}

