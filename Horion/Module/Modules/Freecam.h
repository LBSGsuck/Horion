#pragma once
#include "Module.h"
class Freecam :
	public IModule
{
public:
	Freecam();
	~Freecam();

	// Inherited via IModule
	virtual std::string getModuleName() override;
};

