#include "Ejercicio02.h"

Node<char>* Ejercicio02::reverseKGroup(Node<char>* head, int k)
{
    Node<char>* prev = nullptr;
    Node<char>* next = nullptr;
    int valor = 0;
    while (head != nullptr && valor < k) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
        valor++;
    }
    return prev;
}
