#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node{
	int data;
	Node* next;
};

void insert(Node& head, int data){
	Node* tempPtr;
	tempPtr = new Node;
	tempPtr -> data = 30;
	tempPtr -> next = head;
	tempPtr = head;
}

int main(){
	Node* headNode = new Node;
	headNode ->data = 23;
	headNode ->next = NULL;
	Node* head = headNode;
	insert(head, 30);
	Node* tmp;
	tmp = head;
	
	cout << head ->next;
	return 0;
}

