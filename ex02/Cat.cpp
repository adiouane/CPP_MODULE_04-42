/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:12 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/31 20:35:53 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = other;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = other.type;
	*this->brain = *other.brain;
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "Miaou" << std::endl;
}

Brain* Cat::getBrain(void)const
{
	return this->brain;
}