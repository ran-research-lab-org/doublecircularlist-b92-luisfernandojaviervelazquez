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
    DNode *N = new DNode(data, NULL, NULL);
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
    if (head != NULL) {
        DNode *p = head;
        head = head->next;
        p->prev->next = p->next;
        p->next->prev = p->prev;
        p->next = NULL;
        p->prev = NULL;
        return p;
    }
    else return NULL;
}

DNode* DoubleCircularList::getCurrent() {
        return head;
}

void DoubleCircularList::next() {
        head = head->next;
}

string DoubleCircularList :: toString() const
{
    string sData;
    DNode* p = head;
   /*while(p != head)
   {
        sData += p->data.toString();
        p = p->next;
    }*/

   do {
       sData += p->data.toString();
       p = p->next;
   }
    while(p != head);

    return sData;
}











