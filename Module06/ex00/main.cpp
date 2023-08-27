/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:05:02 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/08/26 13:42:28 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    // Check if arguments are provided
    if (argc < 2 || argc > 2)
    {
        std::cerr << "Usage: " << argv[0] << " <string_to_convert>" << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) // Start from 1 to skip the program name
    {
        try 
        { 
            ScalarConverter value;
            value.Converter(argv[i]);
        } 
        catch (const ScalarConverter::Impossible & e) 
        {
            std::cerr << "For input '" << argv[i] << "': " << e.what() << std::endl;
        }
        catch (const ScalarConverter::Overflow & e)
        {
            std::cerr << "For input '" << argv[i] << "': " << e.what() << std::endl;
        }
    }
    return (0);
}

