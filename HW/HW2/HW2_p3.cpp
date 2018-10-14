//ref source: www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr

#include <iostream>
#include "LElement.h"

using namespace std;

void printList(LElement head)
{
    cout << "Show integers: ";
    while(true)
    {
        cout << head.val << " ";
        if (head.next != NULL) head = *(head.next);
        else break;
    }
    cout << endl;
}

int main ()
{
    cout << "Please input 5 positive integers: ";
    int cntDwn = 5;
    int input;
    LElement* head = NULL;
    LElement* tail = NULL;
    while(cntDwn--)
    {
        cin >> input;
        LElement* temp = new LElement;
        temp->val = input;
        temp->next = NULL;
        if(head==NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    printList(*head);

    return 0;
}
