#include <iostream>
#include <stdlib.h>

using namespace std;


//Add to the list//
void add();

//Traverse through and print the list//
void print();

//Remove items from the list//
void rem();

//Delete the list//
void deleteList();

//Adding to the front of the list//
void add_to_front();

//Print the menu//
int printMenu();


//Create Node structure//
struct Node {
    int number;
    Node* next;
    Node(){number = 42069; next = nullptr;}
    Node(int x){number = x; next = nullptr;}
};

//Creates Node header//
Node* head = new Node();



int main() {

    //Killswitch = -1
    int kill = 0;
    while (kill != -1) {
        //Call all functions here//
        kill = printMenu();
        if (kill == 1) add();
        else if (kill == 2) add_to_front();
        else if (kill == 3) rem();
        else if (kill == 4) print();
        else if (kill == 5) deleteList();
    }

return 0;
}


int printMenu() {
    int userInput = 0;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "1. for add\n2. for add to the front\n3. for remove\n4. for print\n5. for deleting the list\n-1 to quit program\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cin >> userInput;
    cout << "---\n";

    return userInput;
}



void add() {
    int userInput = 0;

    cout << "\n";
    cout << "What number do you want to add?\n";
    cin >> userInput;
    cout << "\n";

    //Base case
    if (head->next == nullptr) {
        head->next = new Node(userInput);
    }
    else {
        for (Node* temp = head; temp != NULL; temp = temp->next){
            //Base case for stopping the loop
            if (temp->next == nullptr){
                temp->next = new Node(userInput);
                break;
            }
        }
    }
}


void print() {

    cout << "\n";
    cout << "Numbers: \n";
    for (Node* p = head->next; p != NULL; p = p->next) {
        cout << p->number << " ";
    }
    cout << "\n";
    cout << "\n";

}


void rem() {
    int remNum = 0;
    cout << "\n";
    cout << "What number do you want to remove?\n";
    cin >> remNum;
    cout << "\n";


    for (Node* r = head; r != NULL; r = r->next) {
        if (r->next == NULL) break;

        else if (r->next->number == remNum) {
            Node* tempNode = r->next;
            r->next = r->next->next;
            delete tempNode;
        }

    }
}


void add_to_front() {
    int userInput = 0;
    cout << "\n";
    cout << "What number do you want to add to the front of the list?\n";
    cin >> userInput;
    cout << "\n";

    Node* tempNode = new Node(userInput);
    tempNode->next = head->next;
    head->next = tempNode;

}



void deleteList() {


    for (Node* d = head; d != NULL; d = d->next) {
        if (d->next == NULL) {
            delete d;
        }

    }
    head = NULL;

}
