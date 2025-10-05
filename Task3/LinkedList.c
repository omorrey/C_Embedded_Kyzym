#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    char title[120];
    float price;
    int pages;
    char language[50];
    int year;
    struct Book* next;
} Book;

Book* createBook(const char* title, float price, int pages, const char* language, int year) {
    Book* newBook = (Book*)malloc(sizeof(Book));
    strcpy(newBook->title, title);
    newBook->price = price;
    newBook->pages = pages;
    strcpy(newBook->language, language);
    newBook->year = year;
    newBook->next = NULL;
    return newBook;
}

void appendBook(Book** head, Book* newBook) {
    if (*head == NULL) {
        *head = newBook;
    } else {
        Book* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newBook;
    }
}

void printBooks(Book* head) {
    Book* temp = head;
    while (temp != NULL) {
        printf("Title: %s\n", temp->title);
        printf("Price: %.2f USD\n", temp->price);
        printf("Pages: %d\n", temp->pages);
        printf("Language: %s\n", temp->language);
        printf("Year: %d\n", temp->year);
        printf("-------------------------\n");
        temp = temp->next;
    }
}

int main() {
    Book* library = NULL;

    appendBook(&library, createBook("Harry Potter and the Philosopher's Stone", 15.99, 223, "English", 1997));
    appendBook(&library, createBook("Harry Potter and the Chamber of Secrets", 16.99, 251, "English", 1998));
    appendBook(&library, createBook("Harry Potter and the Prisoner of Azkaban", 18.50, 317, "English", 1999));
    appendBook(&library, createBook("Harry Potter and the Goblet of Fire", 20.99, 636, "English", 2000));
    appendBook(&library, createBook("Harry Potter and the Order of the Phoenix", 22.99, 766, "English", 2003));
    appendBook(&library, createBook("Harry Potter and the Half-Blood Prince", 21.99, 607, "English", 2005));
    appendBook(&library, createBook("Harry Potter and the Deathly Hallows", 24.99, 607, "English", 2007));

    printf("Harry Potter Book Series:\n");
    printf("===============================\n");
    printBooks(library);

    return 0;
}
