#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;
#include <vector>

struct element{
    int value;
    element *next;
};

class List{
public:
    List(){
        head = NULL;
    }    
    void insert(int _value){
        element *tmp = new element;
        tmp->value = _value;
        tmp->next = head;
        head = tmp;
    }

    void print(){
        element *tmp = head;
        
        while(tmp != NULL){
            cout << tmp->value;
            tmp = tmp->next;
        }
    }

    int value;
    element *head;
};

// void insert(node* list, int x){
//     node* n = list;
//     // node* cur = list;
//     // node* prev = list;
    
//     node *new_node = new node(2, NULL);
    
//     // new_node.value = x;
//     // new_node.next = NULL;
//     // list->value = 2;
//     // list = &new_node;
//     // while(cur->next != NULL && x < cur->value){
//     //     prev = cur;
//     //     cur = cur->next;
//     // }

//     // cur = &new_node;
//     // n->value = x;
//     // n = new_node;
//     n->value = 2;
//     // list->next = NULL;
//     // list = list->next;
//     // new_node.next = root;
// }

// void print(node* list){
//     node *n = list;
    
//     while(n != NULL){
//         cout << n->value;

//         n = n->next;
//     }
// }

int main(){
    List list;
    list.insert(2);
    list.insert(1);
    list.insert(3);
    list.print();
    // node list;
    // list.next = NULL;
    // node* top = &list;

    // insert(&list,1);
    // insert(&list,2);
    // cout << (list->value);
    // print(top);

    cout << endl;

    return 0;
}
