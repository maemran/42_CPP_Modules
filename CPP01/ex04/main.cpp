/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:29:01 by maemran           #+#    #+#             */
/*   Updated: 2025/09/06 10:05:03 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

void    replace_word(char *old_word, char *new_word, std::string& line)
{
    std::string oldStr = old_word;
    std::string newStr = new_word;

    size_t pos = line.find(oldStr);
    while ((pos = line.find(oldStr, pos)) != std::string::npos)
    {
        line.erase(pos, oldStr.length());
        line.insert(pos, newStr);
		pos += newStr.length();
    }
}

int main(int argc, char **argv)
{
    std::ifstream   file(argv[1]);
    std::ofstream   outFile("outfile.replace");
    std::string     read_line;
    int i = 0;
    
    if (argc != 4)
        return (1);
    if (!file.is_open() || !outFile.is_open())
        std::cerr << "Failed to open file." << std::endl;
    while (1)
    {
        if (i != 0)
            outFile << "\n";
        std::getline(file, read_line);
        replace_word(argv[2], argv[3], read_line);
        outFile << read_line;
        if (file.eof())
            break;
        i++;
    }
}