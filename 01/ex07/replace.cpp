#include "replace.hpp"

std::string replaceAll(std::string content, std::string search, std::string replace)
{
	std::string result = content;
	std::string::size_type pos = 0;
	std::string::size_type offset = 0;

	while ((pos = result.find(search, offset)) != std::string::npos)
	{
		result.replace(result.begin() + pos, result.begin() + pos + search.size(), replace);
		offset = pos + replace.size();
	}
	return (result);
}

void replace(std::string filename, std::string search, std::string replace)
{
	std::string content = "";
	std::ifstream file;
	std::ofstream output;
	std::string line;
	
	file.open(filename);
	if (!file.is_open())
		throw ("Error : File couldn`t be opened!");
	output.open(filename + ".replace", std::ios::trunc);
	if (!output.is_open())
		throw ("Error : File couldn`t be made!");
	while (std::getline(file, line))
	{
		content += (line + "\n");
		content = replaceAll(content, search, replace);
	}
	output << content;
	file.close();
	output.close();
}