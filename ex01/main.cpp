/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:42:47 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/29 10:33:25 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <algorithm>


int	main() {

	Span sp = Span(5);
	sp.addNumber(9);
	sp.addNumber(13);
	sp.addNumber(42);
	sp.addNumber(21);
	sp.addNumber(11);

	std::cout << "list :" << std::endl;
	for (std::vector<int>::const_iterator it = sp._container.begin(); it != sp._container.end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << std::endl;
	std::cout << "shortest span :" << sp.shortestSpan() << std::endl;
	std::cout << "longest span :" << sp.longestSpan() << std::endl;
	return 0;
}