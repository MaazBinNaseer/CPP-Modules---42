/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:14:31 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/05 15:14:34 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Phonebook{
private:
    Contact contacts[8];
    int     index;

public:
    Phonebook();
    bool   ADD(void);
    void    EXIT(void);
    void    SEARCH(void);
    void    Display_all(void);
};