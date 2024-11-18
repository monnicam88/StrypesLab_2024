#include "IntegratedCircuitStorage.h"

// Create a container for integrated circuits
CircuitStorage makeCircuitStorage(const int capacity) {
    CircuitStorage storage;
    storage.container = new IntegratedCircuit[capacity];
    storage.capacity = capacity;
    return storage;
}

// Deallocate memory used from the container
void deleteCircuitStorage(CircuitStorage& storage) {
    for (int i = 0; i < storage.size; i++)
        deleteIntegratedCircuit(storage.container[i]);
 
    delete[] storage.container;
    storage.container = nullptr;
    storage.capacity = storage.size = 0;
}

// Print all of the integrated circuits in the container
void printCircuitStorage(const CircuitStorage& storage) {
    for (int i = 0; i < storage.size; i++) {
        std::cout << " " << i + 1 << ".";
        printIntegratedCircuit(storage.container[i]);
    }
}

// Make a copy of an circuit in the storage
void addCircuitToStorage(CircuitStorage& storage, const IntegratedCircuit& circuit) {
    assert(storage.size < storage.capacity && "Circuit storage capacity exceeded.");

    storage.container[storage.size] = createIntegratedCircuit();
    auto& storageCircuit = storage.container[storage.size];
    // Copy the arguments of the circuit
    for (int i = 0; i < circuit.arguments.length; i++) {
        const char currentArgument = circuit.arguments.data[i];
        addToCharArray(storageCircuit.arguments, currentArgument);
    }
    // Copy the logical expression
    for (int i = 0; i < circuit.tokenizedExpressions.length; i++) {
        const char currentToken = circuit.tokenizedExpressions.data[i];
        addToCharArray(storageCircuit.tokenizedExpressions, currentToken);
    }

    storageCircuit.name = circuit.name;
    storageCircuit.expression = circuit.expression;
    storage.size++;
}

// Check if specific circuit is in the container
bool isCircuitInStorage(const CircuitStorage& storage, const std::string& name) {
    for (int i = 0; i < storage.size; i++) {
        if (storage.container[i].name == name)
            return true;
    }
    return false;
}

// Look for a specific circuit and return it, if it is in the storage
IntegratedCircuit* findCircuit(const CircuitStorage& storage, const std::string& name) {
    for (int i = 0; i < storage.size; i++) {
        if (storage.container[i].name == name)
            return &storage.container[i];
    }
    return nullptr;
}