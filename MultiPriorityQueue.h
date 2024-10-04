#include <iostream>

//! CHATGPT

enum Priority {
    HIGH,
    MEDIUM,
    LOW
};

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Class to manage the multiple priority queues
class MultiPriorityQueue {
private:
    Node* queues[3]; // Array of linked list heads for each priority

public:
    MultiPriorityQueue() {
        // Initialize all queues to nullptr
        for (int i = 0; i < 3; ++i) {
            queues[i] = nullptr;
        }
    }

    // Insert element into the appropriate priority queue
    void insert(Priority priority, int value) {
        Node* newNode = new Node(value);
        Node* current = queues[priority];
        Node* previous = nullptr;

        // Find the right place to insert based on value (higher value means higher priority)
        while (current != nullptr && current->data >= value) {
            previous = current;
            current = current->next;
        }

        if (previous == nullptr) {
            // Insert at the head
            queues[priority] = newNode;
        } else {
            previous->next = newNode;
        }
        newNode->next = current;
    }

    // Process and remove the highest priority item
    void process() {
        for (int i = 0; i < 3; ++i) {
            if (queues[i] != nullptr) {
                // Process the first item in the highest non-empty queue
                std::cout << "Processing from " 
                          << (i == HIGH ? "HIGH" : i == MEDIUM ? "MEDIUM" : "LOW") 
                          << " priority queue: " 
                          << queues[i]->data << std::endl;

                // Remove the processed node
                Node* temp = queues[i];
                queues[i] = queues[i]->next;
                delete temp;
                return; // Process only one item at a time
            }
        }
        std::cout << "All queues are empty!" << std::endl;
    }

    // Destructor to clean up memory
    ~MultiPriorityQueue() {
        for (int i = 0; i < 3; ++i) {
            while (queues[i] != nullptr) {
                Node* temp = queues[i];
                queues[i] = queues[i]->next;
                delete temp;
            }
        }
    }
};

int main() {
    MultiPriorityQueue mpq;

    // Insert elements into the queues
    mpq.insert(HIGH, 10);
    mpq.insert(MEDIUM, 20);
    mpq.insert(LOW, 30);
    mpq.insert(HIGH, 15);
    mpq.insert(LOW, 25);
    mpq.insert(MEDIUM, 5);

    // Process elements from the queues
    for (int i = 0; i < 6; ++i) {
        mpq.process();
    }

    return 0;
}
