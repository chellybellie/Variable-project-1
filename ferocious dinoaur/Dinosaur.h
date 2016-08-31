#pragma once
// header file for declarations
// source files for definitions

struct Dinosaur
{
	char name[80];
	int health;
	char size[80];
	int claws;
	int teeth;
	int agressive;
	int gentle;

};

// Application Programming Interface
Dinosaur CreateChar();

void modifychar(Dinosaur &one);

void printchar(const Dinosaur &one);

