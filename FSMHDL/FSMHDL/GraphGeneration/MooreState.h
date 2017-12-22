#ifndef MOOORE_STATE_H
#define MOORESTATE_H

#include <string>
#include <vector>
using namespace std;

class MooreState
{
public:

	//constructor
	MooreState(string aStateName, string aOutput);
	~MooreState();

	struct MooreTransition
	{
		MooreTransition(MooreState* aNextState, string aCondition) :mNextState(aNextState), mCondition(aCondition){};
		MooreState* mNextState;
		string mCondition;
	};

	inline string getStateName() { return mStateName; };
	inline string getStateOutput(){return mStateOutput;};
	inline vector<MooreTransition> getTransition() { return mTransitions;};
	void addTransition(MooreTransition aState) { mTransitions.push_back(aState); };
	

private:
	string mStateName;
	string mStateOutput;
	vector<MooreTransition> mTransitions;





};


#endif

