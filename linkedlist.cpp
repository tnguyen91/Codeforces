#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node* head){
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 100;
    second->next = third;

    third->data = 10034;
    third->next = NULL;

    printList(head);
    return 0;
}