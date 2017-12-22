#include "MooreFSMGraph.h"
#include <sstream>

MooreFSMGraph::MooreFSMGraph()
{

}

MooreFSMGraph::~MooreFSMGraph()
{

}

void MooreFSMGraph::addState(MooreState aState)
{
	//extract signals in conditions and output
	addSignal(aState.getStateOutput());

	vector<MooreState::MooreTransition> transitions = aState.getTransition();
	for (int ctr = 0; ctr < transitions.size(); ctr++)
	{
		addSignal(transitions.at(ctr).mCondition);
	}

	mGraph.push_back(aState);
}

void MooreFSMGraph::addSignal(string aCondition)
{
	//parse the string to extract signals names
	string lSignal;
	const char* lstr = aCondition.c_str();
	int lSignalLength = 0, ctr = 0;

	/* iterate through chars until signal is completely read*/
	while (isalpha(lstr[ctr]) && lstr[ctr] != '\0')
	{
		ctr++;
		lSignalLength++;
	}

	lSignal = aCondition.substr(0, lSignalLength);


	//add string to map
	//signals.insert(lSignal, lSignal);
}