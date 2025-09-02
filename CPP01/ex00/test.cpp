/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:49:29 by maemran           #+#    #+#             */
/*   Updated: 2025/09/02 19:25:51 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class test
{
    private:
        std::string name;
    public:
        void    setName(std::string name) const;
        std::string    getName( void ) const;
};

void test::setName (std::string name) const
{
    this->name = name;
}

std::string    test::getName(void) const
{
    return (name);   
}

int main() {

    test    t;
    
    t.setName("mohammad");
    std::cout << t.getName() << std::endl;
    return 0;
}


