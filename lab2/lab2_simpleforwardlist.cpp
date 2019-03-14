#include <iostream>
using namespace std;

typedef struct ForwardList {
    int value;
    struct ForwardList *next;
} ForwardList;

ForwardList *CreateNode(int value) {
    auto *node = new ForwardList;

    node->value = value;
    node->next = nullptr;

    return node;
}

void Append(ForwardList **list) {
    ForwardList **element = list;
    int value;

    cout << "Node value: ";
    cin >> value;

    ForwardList *new_node = CreateNode(value);

    while (*element != nullptr)
        element = &((*element)->next);

    *element = new_node;
    new_node->next = nullptr;
}

ForwardList *PushFront(ForwardList *list, int value) {
    ForwardList *new_root = CreateNode(value);

    new_root->next = list;

    return new_root;
}

void DestroyList(ForwardList **list) {
    ForwardList **element = list;
    ForwardList *previous;

    while(*element != nullptr) {
        previous = *element;
        element = &((*element)->next);
        delete(previous);
    }

    delete(*list);
    cout << "\nList has been cleared" << endl;
}

void PrintList(ForwardList *list) {
    ForwardList *element = list;

    if (element == nullptr)
        printf("\nList is EMPTY!\n");
    else {
        cout << "\n---" << endl;
        while (element != nullptr) {
            cout << element->value << "\n---" <<endl;
            element = element->next;
        }
    }
}

int main() {
    ForwardList *root = nullptr;
    PrintList(root);
    Append(&root);
    PrintList(root);
    Append(&root);
    PrintList(root);
    root = PushFront(root, 9);
    PrintList(root);

    DestroyList(&root);

    return 0;
}