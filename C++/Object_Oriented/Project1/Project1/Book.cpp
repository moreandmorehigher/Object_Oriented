#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string is, string tr, string au)
{
	isbn = is; title = tr; author = au;
}

string Book::getTitle() {
	return title;
}

string Book::getIsbn()
{
	return isbn;
}