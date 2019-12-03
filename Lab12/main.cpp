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
        else if (kill == 2) print();

    }

return 0;
}


int printMenu() {
    int userInput = 0;

    cout << "1. for add\n2. for print\n-1 to quit program\n";
    cin >> userInput;

    return userInput;
}



void add() {
    int userInput = 0;

    cout << "What number do you want to add?\n";
    cin >> userInput;

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

    for (Node* p = head->next; p != NULL; p = p->next) {
        cout << p->number << " ";
    }
    cout << endl;


}


void rem() {
    int remNum = 0;
    cout << "What number do you want to remove?\n";
    cin >> remNum;

    for (Node* r = head->next; r != NULL; r = r->next) {
        if (*r == remNum){
            Node* prevNode = head;
            prevNode = prevNode->next;
        }

    }
}


void deleteList() {

}
