#include <iostream>

#include "Book.h"
#include "BookManager.h"

using namespace std;

int main() {
	Book Romance("Romance-A1", "Love Story", "신동엽");
	Book action("Action-B1", "Mission Impossible", "유재석");
	Book adventure("Adventure-C1", "Star Wars", "강호동");

	BookManager bm;
	bm.addBook(Romance);
	bm.addBook(action);
	bm.addBook(adventure);
};
