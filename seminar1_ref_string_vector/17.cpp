#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<cctype>
std::vector<std::vector<std::size_t>> calculate_word_lengths(const std::string& filename)
{
std::vector<std::vector<std::size_t>> result;
std::ifstream file(filename);
std::string line;
while (std::getline(file, line))
{
std::vector<std::size_t> lineLengths;
std::size_t wordLength = 0;
for (std::size_t i = 0; i < line.size(); ++i)
{
if (std::isspace(line[i]))
{
if (wordLength > 0)
{
lineLengths.push_back(wordLength);
wordLength = 0;
}
}
else
{
wordLength += 1;
}
}
if (wordLength > 0)
lineLengths.push_back(wordLength);
result.push_back(lineLengths);
}
return result;
}
int main()
{
std::vector<std::vector<std::size_t>> lengths = calculate_word_lengths("input.txt");
for (std::size_t i = 0; i < lengths.size(); ++i)
{
for (std::size_t j = 0; j < lengths[i].size(); ++j)
std::cout << lengths[i][j] << " ";
std::cout << std::endl;
}
}
