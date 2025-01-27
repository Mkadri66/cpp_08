/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:23:21 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/27 17:41:15 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
typename T::const_iterator	easyfind(const T& container, int toFind) {

	typename T::const_iterator	it = std::find(container.begin(), container.end(), toFind);

	if (it == container.end()) {
		throw std::out_of_range("element not found");
	}
	return it;
}

#endif