//
//  main.cpp
//  Oblig 2
//
//  Created by Øyvind Nordbø on 07/03/2024.
//


#include <iostream>
#include <array>
#include <vector>

template<typename T1, typename T2>
auto count(T1& list, T2& find_me);


template<typename T1, typename T2>
size_t count(T1& list, T2& find_me) {
    /*if (list.empty() == true) {
        std::cout << "Størrelsen på lista må være minimum 1 stor\n";
        return 0;
    }
    */
    int occurence{ 0 };
    for (auto x : list) {
        if (list[x] == find_me) {
            occurence++;
        }
    }
    return occurence;
}




int main()
{
    std::vector<double> myVec{ 1, 1, 1, 0, 1, 0, 0};
    int myArray[6] = {1, 1, 0, 1, 0, 1};
    int find{ 1 };
    

    count(myArray, find);
}
