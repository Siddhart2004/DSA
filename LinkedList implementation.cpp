#include <iostream>
using namespace std;

class linked_list {
    struct node {
        int val;
        node* next;
    };
    node* head;
public:
    linked_list() {
        head = NULL;
    }
    //insert at beginning
    void insert_front(int x) {
        node* n = new node();
        n->val = x;
        n->next = head;
        head = n;
    }
    // insert at position 
    void insert_at(int pos, int x) {
        if (pos == 1) {
            insert_front(x);
            return;
        }
        node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) return;
        node* n = new node();
        n->val = x;
        n->next = temp->next;
        temp->next = n;
    }
    // delete from front
    void delete_front() {
        if (head == NULL) return;
        node* temp = head;
        head = head->next;
        delete temp;
    }
    // delete at position
    void delete_at(int pos) {
        if (head == NULL) return;
        if (pos == 1) {
            delete_front();
            return;
        }
        node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }
        if (temp->next == NULL) return;
        node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
    // print ll
    void print() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    linked_list ll;
    ll.insert_front(1);
    ll.insert_front(2);
    ll.insert_front(3);
    ll.insert_at(2,4);
    ll.insert_front(5);
    ll.insert_at(3,6);
    ll.print(); 
    ll.delete_front();
    ll.print(); 
    ll.delete_at(2);
    ll.print();
    return 0;
}
