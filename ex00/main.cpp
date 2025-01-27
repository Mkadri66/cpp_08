/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:21:36 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/27 18:10:04 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyFind.tpp"
# include <vector>
# include <list>

using namespace std;

int main() {

    int intArray[] = {8, 5, 7, 3};
    vector<int> myVector(intArray, intArray+4);

    cout << "VECTOR" << endl;
    try {
        vector<int>::const_iterator result = easyfind(myVector, 5);
        cout << "found value : " << *result << endl; 
    }
    catch (exception &e) {
        cerr << e.what() << endl;
    }

    try {
        vector<int>::const_iterator result = easyfind(myVector, 11);
        cout << "found value : " << *result << endl; 
    }
    catch (exception &e) {
        cerr << e.what() << endl;
    }

    cout << endl;
    cout << "LIST" << endl;
    list<int> myList(intArray, intArray+4);
    try {
        list<int>::const_iterator result = easyfind(myList, 3);
        cout << "found value : " << *result << endl; 
    }
    catch (exception &e) {
        cerr << e.what() << endl;
    }

    try {
        list<int>::const_iterator result = easyfind(myList, 43);
        cout << "found value : " << *result << endl; 
    }
    catch (exception &e) {
        cerr << e.what() << endl;
    }

    return 0;
}