/*
        CIS 22C, DE ANZA
        Team Project Group 3
        Jeffery Abbott
        Nicolas Chun
        Michael Ekman
        Hung Nguyen
        Huu Hau Nguyen
 */

#include <iostream>
#include <fstream>
#include "sort.h"



Sort::Sort() {
    // initlize linked lists
    Node *sampleData = new Node();
    Node *sampleDataSorted = new Node();
    Node *sampleDataSortedReverse = new Node();
    
    // read values from files
    readDataFromFile(sampleData, "sampleData.txt");
    readDataFromFile(sampleDataSorted, "sampleDataSorted.txt");
    readDataFromFile(sampleDataSortedReverse, "sampleDataSortedReverse.txt");
}


void Sort::readDataFromFile(Node *targetLinkedList, string filename) {
    ifstream sampleDataFile(filename);
    if (sampleDataFile.is_open()) {
        double number;
        while(sampleDataFile >> number) {
            insertNode(targetLinkedList, number);
        }
    }
    else {
        cout << "ERROR reading file sampleData.txt" << endl;
    }
    sampleDataFile.close();
}

void Sort::insertNode(Node *front, double newValue) {
    if (front == nullptr) {
        front->value = newValue;
    }
    else {
        Node *currentNode = front;
        while (front->next != nullptr) {
            currentNode = currentNode->next;
        }
        currentNode->value = newValue;
    }
    
    
}




