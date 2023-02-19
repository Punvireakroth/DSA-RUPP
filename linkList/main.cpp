#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // function to create 10 links
    void createLinks()
    {
        for (int i = 1; i <= 10; i++)
        {
            Node *newNode = new Node();
            newNode->data = i;
            newNode->next = nullptr;

            if (head == nullptr)
            {
                head = newNode;
            }
            else
            {
                Node *temp = head;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
    }

    // function to insert a link at a specific position
    void insertLink(int data, int position)
    {
        Node *newNode = new Node();
        newNode->data = data;

        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node *temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Invalid position, cannot insert link." << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // function to print the value of each link using while
    void printLinks()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // function to delete a link from a specific position
    void deleteLink(int position)
    {
        if (head == nullptr)
        {
            cout << "List is empty, cannot delete link." << endl;
            return;
        }

        Node *temp = head;
        Node *prev = nullptr;

        if (position == 1)
        {
            head = temp->next;
            delete temp;
            return;
        }

        for (int i = 1; i < position && temp != nullptr; i++)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Invalid position, cannot delete link." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }
};

int main()
{
    LinkedList myList;

    // create 10 links
    myList.createLinks();

    // insert a link at position 5
    myList.insertLink(11, 5);

    // print the value of each link
    myList.printLinks();

    // delete the link at position 3
    myList.deleteLink(3);

    // print the value of each link again
    myList.printLinks();

    return 0;
}
