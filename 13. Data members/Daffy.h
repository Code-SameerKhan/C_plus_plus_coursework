#pragma once
#ifndef DAFFY_H_
#define DAFFY_H_

class Daffy				// Function Prototyping
{
public:					// Public function -> Available readily
	void speak();
	void happyMood();
	void sadMood();

private:
	bool happy;			// Private member -> Needs Constructor method to call
};

#endif /*DAFFY_H_*/
