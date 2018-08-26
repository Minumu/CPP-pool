// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:16:13 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:32:27 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

std::string ft_toupper(std::string inputFile)
{
    std::string strUpper;
    for (size_t i = 0; i < inputFile.length(); i++)
        strUpper += (char)toupper(inputFile[i]);
    return strUpper;
}

void	ft_replace(std::string buffer, char **av)
{
    size_t startIdx = 0;
    std::string str1 = av[2];
    std::string str2 = av[3];
    std::string outputName;
    
    if (str1.empty() || str2.empty())
        std::cout << "You are trying to enter empty string... It's not good, man" << std::endl;
    else
    {
        while ((startIdx = buffer.find(str1)) != (size_t)-1)
        {
            buffer.replace(startIdx, str1.length(), str2);
            startIdx += str2.length();
        }
        outputName = ft_toupper(av[1]) + ".replace";
	    std::ofstream outputFile(outputName);
	    outputFile << buffer;
    }
}

int main(int ac, char **av)
{
    std::ifstream inputFile;
	std::string buff;
    std::string line;
    
	if (ac != 4)
		std::cout << "Usage: ./replace <fileName> <string1> <string2>" << std::endl;
	else
    {
        inputFile.open(av[1]);
        if (inputFile.is_open())
        {
            while (std::getline(inputFile, line))
            {
                buff += line;
                 if (!inputFile.eof())
                    buff += "\n";
            }
            inputFile.close();
		    ft_replace(buff, av);
        }
        else
            std::cout << "You are trying to give me a file that does not exist. Why?" << std::endl;
	  
    }
	return (0);
}
