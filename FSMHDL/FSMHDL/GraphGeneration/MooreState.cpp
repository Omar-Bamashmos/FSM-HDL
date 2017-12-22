#include "MooreState.h"

MooreState::MooreState(string aStateName, string aOutputName)
{
	mStateName = aStateName;
	mStateOutput = aOutputName;
}

MooreState::~MooreState()
{
	//does nothing
}