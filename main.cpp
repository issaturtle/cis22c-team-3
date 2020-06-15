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
#include <chrono>
#include <map>
#include "sort.h"

int main() {
    
    map<string, double> results;
    Sort test;
    
    string testName;

    
    // run tests and get times for shell sort
    testName = "shell sort, random sample";
    auto startTime = chrono::high_resolution_clock::now();
    test.shellSort(test.data);
    auto stopTime = chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> millis = stopTime - startTime;
    results.insert({ testName, (double)millis.count() });
    
    testName = "shell sort, sorted sample";
    startTime = chrono::high_resolution_clock::now();
    test.shellSort(test.sortedData);
    stopTime = chrono::high_resolution_clock::now();
    millis = stopTime - startTime;
    results.insert({ testName, (double)millis.count() });
    
    testName = "shell sort, reverse sorted sample";
    startTime = chrono::high_resolution_clock::now();
    test.shellSort(test.reverseSortedData);
    stopTime = chrono::high_resolution_clock::now();
    millis = stopTime - startTime;
    results.insert({ testName, (double)millis.count() });
    
    
    // print results to confirm everything is working, remove this later
    for(auto testItem : results) {
        std::cout << testItem.first << " " << testItem.second << endl;
    }
    
    return 0;
}
