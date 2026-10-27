#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char title[50];
    int pages;
    float price;
};
typedef struct book Book;

void print_book(const Book* p)
{
    printf("Title: %s\nPages: %d\nPrice: %g\n\n", p->title, p->pages, p->price);
}

int main(void)
{
    // a
    size_t* p_size = (size_t*)malloc(sizeof(size_t));
    *p_size = 123;
    printf("%zu\n\n", *p_size);
    free(p_size);

    // b
    char* p_str = (char*)malloc(9 * sizeof(char)); // 8 букв + '\0'
    strcpy(p_str, "Elephant");
    printf("%s\n\n", p_str);
    free(p_str);

    // c
    char** p_ptr_str = (char**)malloc(sizeof(char**));
    *p_ptr_str = (char*)malloc(14 * sizeof(char));
    strcpy(*p_ptr_str, "Cats and Dogs");
    printf("%s\n\n", *p_ptr_str);
    free(*p_ptr_str);
    free(p_ptr_str);

    // d. Структура Book в куче
    Book* p_book = (Book*)malloc(sizeof(Book));
    strcpy(p_book->title, "Don Quixote");
    p_book->pages = 1000;
    p_book->price = 750.0;
    print_book(p_book);
    free(p_book);

    // e
    Book stack_book = {"Don Quixote", 1000, 750.0};
    Book** p_book_ptr = (Book**)malloc(sizeof(Book*));
    *p_book_ptr = &stack_book;
    print_book(*p_book_ptr);
    free(p_book_ptr);

    // f
    Book** p_book_ptr_heap = (Book**)malloc(sizeof(Book*));
    *p_book_ptr_heap = (Book*)malloc(sizeof(Book)); 
    strcpy((*p_book_ptr_heap)->title, "Don Quixote");
    (*p_book_ptr_heap)->pages = 1000;
    (*p_book_ptr_heap)->price = 750.0;
    print_book(*p_book_ptr_heap);
    free(*p_book_ptr_heap);
    free(p_book_ptr_heap);

    // g
    Book* p_books = (Book*)malloc(3 * sizeof(Book));
    
    strcpy(p_books[0].title, "Don Quixote");
    p_books[0].pages = 1000;
    p_books[0].price = 750.0;
    
    strcpy(p_books[1].title, "Oblomov");
    p_books[1].pages = 400;
    p_books[1].price = 250.0;
    
    strcpy(p_books[2].title, "The Odyssey");
    p_books[2].pages = 500;
    p_books[2].price = 500.0;
    
    for (int i = 0; i < 3; ++i)
    {
        print_book(&p_books[i]);
    }
    free(p_books);

    return 0;
}
