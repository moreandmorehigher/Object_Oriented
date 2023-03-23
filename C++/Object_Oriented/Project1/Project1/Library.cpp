#include <iostream>

#include "Book.h"
#include "BookManager.h"

using namespace std;

int main() {
	Book Romance("Romance-A1", "Love Story", "�ŵ���");
	Book action("Action-B1", "Mission Impossible", "���缮");
	Book adventure("Adventure-C1", "Star Wars", "��ȣ��");

	BookManager bm;
	bm.addBook(Romance);
	bm.addBook(action);
	bm.addBook(adventure);
};
