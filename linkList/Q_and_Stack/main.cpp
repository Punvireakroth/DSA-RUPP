#include <iostream>
using namespace std;

class Link
{
public:
    int Value;
    Link *Next;

    Link()
    {
        Next = NULL;
    }
};

class LinkedList
{
public:
    Link *First;
    Link *Tail;

    LinkedList()
    {
        First = NULL;
        Tail = NULL;
    }

    void InsertFirst(Link *L);
    void InsertTail(Link *L);
    void RemoveFirst();
};

void LinkedList::InsertFirst(Link *L)
{
    L->Next = First;
    First = L;
    if (Tail == NULL)
    {
        Tail = First;
    }
}

void LinkedList::InsertTail(Link *L)
{
    if (Tail == NULL)
    {
        First = L;
        Tail = L;
    }
    else
    {
        Tail->Next = L;
        Tail = L;
    }
}

void LinkedList::RemoveFirst()
{
    if (First == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Link *temp = First;
    First = First->Next;
    if (First == NULL)
    {
        Tail = NULL;
    }
    delete temp;
}

int main()
{
    // Create a new linked list
    LinkedList list;

    // Insert three links with values 1, 2, and 3
    Link *link1 = new Link();
    Link *link2 = new Link();
    Link *link3 = new Link();
    link1->Value = 1;
    link2->Value = 2;
    link3->Value = 3;
    list.InsertFirst(link1);
    list.InsertFirst(link2);
    list.InsertFirst(link3);

    // Remove the first link
    list.RemoveFirst();

    // Print the remaining links
    Link *current = list.First;
    while (current != NULL)
    {
        cout << current->Value << " ";
        current = current->Next;
    }
    cout << endl;

    // Insert two more links with values 4 and 5
    Link *link4 = new Link();
    Link *link5 = new Link();
    link4->Value = 4;
    link5->Value = 5;
    list.InsertTail(link4);
    list.InsertTail(link5);

    // Remove the first link
    list.RemoveFirst();

    // Print the remaining links
    current = list.First;
    while (current != NULL)
    {
        cout << current->Value << " ";
        current = current->Next;
    }
    cout << endl;

    return 0;
}
