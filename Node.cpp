#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};

void ValueGet(Node** head_first, int new_data)
{
    Node* new_nodetype = new Node();
    new_nodetype->data = new_data;
    new_nodetype->next = (*head_first);
    (*head_first) = new_nodetype;
}

int ValueReturn(Node* head, int index)
{
    Node* current = head;
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return(current->data);
        count++;
        current = current->next;
    }
}
int main()
{
    Node* head = NULL;

    ValueGet(&head, 214);
    ValueGet(&head, 300);
    ValueGet(&head, 100);
    ValueGet(&head, 01);

    cout << "At index "<<(head,2)<<" the node has a value of " << ValueReturn(head, 2);
    return 0;
}
