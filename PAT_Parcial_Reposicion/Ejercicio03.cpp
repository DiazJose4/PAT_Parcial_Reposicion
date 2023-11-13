#include "Ejercicio03.h"

Node<int>* Ejercicio03::detectCycle(Node<int>* head)
{
    if (!head || !head->next) {
        return nullptr;
    }

    Node<int>* tortuga = head;
    Node<int>* liebre = head;

    // Punto de encuentro
    while (liebre && liebre->next) {
        tortuga = tortuga->next;
        liebre = liebre->next->next;

        if (tortuga == liebre) {
            break;
        }
    }

    //Ciclo
    if (liebre == nullptr || liebre->next == nullptr) {
        return nullptr;
    }

    // Bucle de encuentro
    tortuga = head;
    while (tortuga != liebre) {
        tortuga = tortuga->next;
        liebre = liebre->next;
    }

    return tortuga;
}
