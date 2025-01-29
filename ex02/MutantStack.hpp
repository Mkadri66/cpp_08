/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:47:43 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/29 11:02:09 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {


	public:
	MutantStack(): std::stack<T>() {}
	MutantStack(MutantStack const& copy): std::stack<T>(copy) {}
	~MutantStack() {}

	typedef typename std::deque<T>::iterator	iterator;
	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }
};

#endif