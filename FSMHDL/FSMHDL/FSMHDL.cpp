// FSMHDL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GraphGeneration/MooreFSMGraph.h"


int main()
{
	MooreState state1("STATE_A", "a = 1");
	state1.addTransition(MooreState::MooreTransition(&state1, "a = 0"));
	MooreFSMGraph graph;
	graph.addState(state1);
}

