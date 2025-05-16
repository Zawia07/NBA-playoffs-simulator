// Lab Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Node structure: each piece of the queue’s body
struct QueNode {
    float value;              // Store the data
    QueNode* next;            // Pointer to the next node
    // Don't add head/tail here – they're not node responsibilities
};

// Queue structure: the commander, managing the node army
struct Queue {
    QueNode* head;            // Points to the front (dequeue happens here)
    QueNode* tail;            // Points to the end (enqueue happens here)

    Queue() {
        // Initialize both head and tail to nullptr
		head = nullptr;
		tail = nullptr;
    }

    void enqueue(float val) {
        // Create a new node with val
		QueNode* newNode = new QueNode;
        // If the queue is empty (head == nullptr):
        if (head == nullptr)
        {
            newNode = head;
            newNode = tail;
        }
        //     - Set both head and tail to this new node
        // Else:
        else
        {
            //     - Link tail->next to new node
			tail->next = newNode;
        }
        
        //     - Move tail to point to the new node
    }

    float dequeue() {
        // If queue is empty (head == nullptr):
        //     - Return sentinel value (e.g., -1 or throw error)
        // Else:
        //     - Store head->value
        //     - Move head to head->next
        //     - If head becomes nullptr, set tail to nullptr as well
        //     - Delete old head node
        //     - Return stored value
    }

    float sum() {
        // Initialize total = 0
        // Start from head, loop through the list:
        //     - Add each node’s value to total
        // Return total
    }

    ~Queue() {
        // Traverse the list and delete all nodes to avoid memory leaks
    }
};


#include <iostream>
using namespace std;
int main()
{
    
}
