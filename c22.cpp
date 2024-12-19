#include <iostream>
using namespace std;

// Node structure for a linked list
struct Node {
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

// Function to insert a node at the beginning of a linked list
void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Function to display the elements of a linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to check if a value exists in a linked list
bool exists(Node* head, int value) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value)
            return true;
        temp = temp->next;
    }
    return false;
}

// Function to find the intersection of two linked lists
Node* findIntersection(Node* listA, Node* listB) {
    Node* result = NULL;
    Node* tempA = listA;
    while (tempA != NULL) {
        if (exists(listB, tempA->data))
        {
            insert(result, tempA->data);
        }
        tempA = tempA->next;
    }
    return result;
}

// Function to find the symmetric difference of two linked lists
Node* findSymmetricDifference(Node* listA, Node* listB) {
    Node* result = NULL;
    Node* tempA = listA;

    // Add elements from listA not in listB
    while (tempA != NULL) {
        if (!exists(listB, tempA->data)) {
            insert(result, tempA->data);
        }
        tempA = tempA->next;
    }

    Node* tempB = listB;

    // Add elements from listB not in listA
    while (tempB != NULL) {
        if (!exists(listA, tempB->data)) {
            insert(result, tempB->data);
        }
        tempB = tempB->next;
    }

    return result;
}

// Function to count unique elements in two linked lists combined
int countUnique(Node* listA, Node* listB) {
    int count = 0;
    Node* tempA = listA;

    while (tempA != NULL) {
        count++;
        tempA = tempA->next;
    }

    Node* tempB = listB;

    while (tempB != NULL) {
        if (!exists(listA, tempB->data)) {
            count++;
        }
        tempB = tempB->next;
    }

    return count;
}

int main() {
    Node* vanilla = NULL;
    Node* butterscotch = NULL;

    // Input for vanilla ice-cream liking students
    cout << "Enter the number of students who like Vanilla ice-cream: ";
    int n;
    cin >> n;
    cout << "Enter the roll numbers of students who like Vanilla: ";
    for (int i = 0; i < n; ++i) {
        int roll;
        cin >> roll;
        insert(vanilla, roll);
    }

    // Input for butterscotch ice-cream liking students
    cout << "Enter the number of students who like Butterscotch ice-cream: ";
    int m;
    cin >> m;
    cout << "Enter the roll numbers of students who like Butterscotch: ";
    for (int i = 0; i < m; ++i) {
        int roll;
        cin >> roll;
        insert(butterscotch, roll);
    }

    // Display results
    cout << "\nSet of students who like both Vanilla and Butterscotch: ";
    display(findIntersection(vanilla, butterscotch));

    cout << "Set of students who like either Vanilla or Butterscotch but not both: ";
    display(findSymmetricDifference(vanilla, butterscotch));

    // Total students in the class
    cout << "\nEnter the total number of students in the class: ";
    int totalStudents;
    cin >> totalStudents;

    int uniqueCount = countUnique(vanilla, butterscotch);

    cout << "Number of students who like neither Vanilla nor Butterscotch: " << totalStudents - uniqueCount << endl;

    return 0;
}
