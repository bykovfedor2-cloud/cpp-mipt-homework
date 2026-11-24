#include<iostream>
#include<string>
struct Book
{
std::string title;
int pages;
float price;
};
bool isExpensive(const Book& b)
{
return b.price > 1000;
}
int main()
{
Book b1{"Book1", 100, 500.0f};
Book b2{"Book2", 200, 1500.0f};
std::cout << isExpensive(b1) << std::endl;
std::cout << isExpensive(b2) << std::endl;
}
