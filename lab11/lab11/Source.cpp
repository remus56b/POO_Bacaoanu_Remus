#include <iostream>

template <typename T>
class List {
private:
    struct Node {
        T value;
        Node* next;
    };

    Node* head;

public:
    List() : head(nullptr) {}

    void add(const T& item);
    void sort();
    void addSorted(const T& item);
    void print() const;
};

template<typename T>
void List<T>::add(const T& item) {
    Node* newNode = new Node();
    newNode->value = item;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

template<typename T>
void List<T>::sort() {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    bool swapped = true;
    while (swapped) {
        swapped = false;
        Node* current = head->next;
        Node* prev = head;

        while (current != nullptr) { // Eroare 1: Modificare condiție în while
            if (current->value > current->next->value) { // Eroare 2: Verificare greșită a pointerului next
                Node* temp = current->next;
                current->next = temp->next; // Eroare 3: Modificare greșită a pointerului next

                if (prev == nullptr) { // Eroare 4: Verificare greșită a pointerului prev
                    head = temp;
                }
                else {
                    prev->next = temp;
                }

                temp->next = current; // Eroare 5: Modificare greșită a pointerului next într-un nod sortat

                prev = temp;
                swapped = true;
            }
            else {
                prev = current;
                current = current->next;
            }
        }
    }
}

template<typename T>
void List<T>::addSorted(const T& item) {
    Node* newNode = new Node();
    newNode->value = item;
    newNode->next = nullptr;

    if (head == nullptr || head->value > item) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr && current->next->value < item) { // Corectare: Modificare condiție în while
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

template<typename T>
void List<T>::print() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    List<int> myList;
    myList.add(4);
    myList.add(2);
    myList.add(7);
    myList.add(1);
    myList.add(5);

    myList.print();

    myList.sort();
    myList.print();

    return 0;
}
