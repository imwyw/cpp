#include "Book.h"



Book::Book()
{
}

Book::Book(string date, string isbn, string name, string auth, string publisher)
{
	this->publishDate = date;
	this->ISBN = isbn;
	this->name = name;
	this->auth = auth;
	this->publisher = publisher;
}