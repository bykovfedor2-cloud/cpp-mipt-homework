#include<iostream>
#include<string>
#include<vector>
std::vector<std::size_t> substringIndexes(const std::string& s, const std::string& sub)
{
std::vector<std::size_t> result;
std::size_t pos = 0;
while (true)
{
pos = s.find(sub, pos);
if (pos == std::string::npos)
break;
result.push_back(pos);
pos += 1;
}
return result;
}
void print(const std::vector<std::size_t>& v)
{
for (std::size_t i = 0; i < v.size(); ++i)
std::cout << v[i] << " ";
std::cout << std::endl;
}
int main()
{
std::vector<std::size_t> v1 = substringIndexes("cat and dog and cat", "cat");
print(v1);
std::vector<std::size_t> v2 = substringIndexes("look, cats were here", "cat");
print(v2);
std::vector<std::size_t> v3 = substringIndexes("catcatcatcatcatcat", "cat");
print(v3);
std::vector<std::size_t> v4 = substringIndexes("dog mouse elephant", "cat");
print(v4);
}
