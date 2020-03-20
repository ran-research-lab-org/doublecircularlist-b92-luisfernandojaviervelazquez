//
// Created by rarce on 03/10/20.
//

#include "DoubleCircularList.h"
bool DoubleCircularList::isEmpty() {
    if (head == NULL)
    {
        return true;
    }
    else return false;
}

void DoubleCircularList::add(const Job &data) {

    DNode* p;
    DNode *N = new DNode(data, nullptr, nullptr);
    if (head == NULL) {
        head = N;
        N->next = N;
        N->prev = N;
    } else {
        p = head->prev;
        N->prev = p;
        p->next = N;
        N->next = head;
        head->prev = N;
    }
}

DNode* DoubleCircularList::removeCurrent() {

}

















