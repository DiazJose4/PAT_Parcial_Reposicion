#pragma once

#include "Node.h"

class Ejercicio02
{
private:
    struct Nodo {
        char data;
        Nodo* next;
        Nodo(char value) : data(value), next(nullptr) {}
    };

public:
	Node<char>* reverseKGroup(Node<char>* head, int k);
};

