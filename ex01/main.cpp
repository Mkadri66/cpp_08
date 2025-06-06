/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:42:47 by mkadri            #+#    #+#             */
/*   Updated: 2025/05/06 11:32:18 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <algorithm>


int	main() {

    try {
        Span sp = Span(5);
		std::cout << "container size : " << sp._container.size() << std::endl;
		sp.addNumber(25);
		//std::cout << "container size : " << sp._container.size() << std::endl;
        sp.addRange();
		//std::cout << "container size : " << sp._container.size() << std::endl;
		//sp.addRange();
		//sp.addNumber(25);
		std::cout << "container size : " << sp._container.size() << std::endl;
        std::cout << "list :" << std::endl;
        for (std::vector<int>::const_iterator it = sp._container.begin(); it != sp._container.end(); ++it) {
            std::cout << *it << std::endl;
        }
        std::cout << std::endl;
		
        std::cout << "shortest span :" << sp.shortestSpan() << std::endl;
        std::cout << "longest span :" << sp.longestSpan() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	return 0;
}