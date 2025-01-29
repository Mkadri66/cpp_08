/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:43:09 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/28 10:38:28 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>

class Span {

	private: 

	unsigned int 	N;

	Span();

	public:
	std::vector<int>	_container;
	Span(unsigned int n);
	Span(Span const& copy);
	~Span();

	Span&			operator=(Span const& rhs);
	unsigned int	getN() const;

	void	addNumber(int nb);
	int		shortestSpan();
	int		longestSpan();
	void	addRange();
};

#endif