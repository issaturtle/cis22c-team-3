/*
		CIS 22C, DE ANZA
		Team Project Group 3
		Jeffery Abbott
		Nicolas Chun
		Michael Ekman
		Hung Nguyen
		Huu Hau Nguyen
 */
#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class Sort {
	

private:
    //unsorted vectors for testing
    vector<double> data;
    vector<double> sortedData;
    vector<double> reverseSortedData;
    
public:
	Sort();

    void readFile(string filename, vector<double> vect);
	void swap(vector<double>, double, double);
	void print(vector<double>);

	void insertionSort(vector<double>);
	void shellSort(vector<double>);
	void quickSort(vector<double>);
	void heapSort(vector<double>);
	void selectionSort(vector<double>);
};
#endif
