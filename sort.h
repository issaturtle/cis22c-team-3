/*
       CIS 22C, DE ANZA
       Team Project Group 3
       Jeffery Abbott
       Nicolas Chun
       Michael Ekman
       Hung Nguyen
       Huu Hau Nguyen
*/

#ifndef sort_h
#define sort_h

#include <vector>

using namespace std;


struct Node {
    double value;
    Node *next;
};


class Sort {
    
private:
    Node *sampleData;
    Node *sampleDataSorted;
    Node *sampleDataSortedReverse;
    
    void insertNode(Node *front, double newValue);
    
public:
    Sort();
    void readDataFromFile(Node *targetLinkedList, string filename);
    
};

#endif /* sort_h */
