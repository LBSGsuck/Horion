#include "SayCommand.h"

SayCommand::SayCommand() : IMCCommand("say", "Sends a chat message", "<message>")
{
}

SayCommand::~SayCommand()
{
}

bool SayCommand::execute(std::vector<std::string>* args)
{
	assertTrue(args->size() > 1);

	std::ostringstream os;
	for (int i = 1; i < args->size(); i++) {
		if (i > 1)
			os << " ";
		os << args->at(i);
	}
	
	

	clientMessageF("[%sHorion%s] %sSent Message", GOLD, WHITE, GREEN);
	return true;
}
