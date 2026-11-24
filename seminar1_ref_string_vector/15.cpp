#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
char& get(std::string& s, std::size_t idx)
{
if (idx >= s.size())
{
std::cout << "Error" << std::endl;
std::exit(1);
}
return s[idx];
}
int& get(std::vector<int>& v, std::size_t idx)
{
if (idx >= v.size())
{
std::cout << "Error" << std::endl;
std::exit(1);
}
return v[idx];
}
int& get(int* a, std::size_t n, std::size_t idx)
{
if (idx >= n)
{
std::cout << "Error" << std::endl;
std::exit(1);
}
return a[idx];
}
void print(const std::vector<int>& v)
{
for (std::size_t i = 0; i < v.size(); ++i)
std::cout << v[i] << " ";
std::cout << std::endl;
}
void print(const int* a, std::size_t n)
{
for (std::size_t i = 0; i < n; ++i)
std::cout << a[i] << " ";
std::cout << std::endl;
}
int main()
{
std::vector<int> v{10, 20, 30, 40, 50};
get(v, 2) += 1;
print(v);
std::string s = "Cat";
get(s, 0) = 'B';
std::cout << s << std::endl;
int a[5] = {10, 20, 30, 40, 50};
get(a, 5, 2) += 1;
print(a, 5);
get(v, 10) = 0;
}
