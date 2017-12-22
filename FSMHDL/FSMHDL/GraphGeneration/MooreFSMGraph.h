#include "MooreState.h"

#include <map>
#include <ctype.h>

class MooreFSMGraph
{
public:
	//constructor
	MooreFSMGraph();

	//destructor
	~MooreFSMGraph();

	void addState(MooreState aState);
	

private:
	vector<MooreState> mGraph;
	map<string, string> signals;

	void addSignal(string aSignalName);

};
