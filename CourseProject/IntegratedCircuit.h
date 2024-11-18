#pragma once

#include "DataStructures.h"

// Contains the data of an integrated circuit
struct IntegratedCircuit {
	std::string name = "";
	std::string expression = "";
	CustomizedString::CharArray tokenizedExpressions;
	CustomizedString::CharArray arguments;
};

IntegratedCircuit createIntegratedCircuit();
void deleteIntegratedCircuit(IntegratedCircuit& circuit);
void printIntegratedCircuit(const IntegratedCircuit& circuit);
bool validateIntegratedCircuit(const IntegratedCircuit& circuit);