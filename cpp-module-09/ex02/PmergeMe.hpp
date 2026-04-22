#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>

template<typename Container>
class Pmerge
{
    public:
    
        struct Level
        {
            std::vector<std::pair<int, int>> pairs;
            int       oddElement;
            bool      hasOddElement;
        };
        
        using LevelVector = std::vector<Level>;

        Pmerge();
        Pmerge(const Pmerge& other) = delete;
        Pmerge& operator=(const Pmerge& other) = delete;
        ~Pmerge();

        Container           mergeSort         (const Container& container);
        void                insertElement     (Container& winners, int element, int limit);
        void                insertNewLow      (Container& container, Level& level);
        std::vector<size_t> getInsertionOrder (size_t n);
        Level               makePairs         (const Container& container);

    private:
    
        std::vector<Level> _levels;

};

#include "PmergeMe.tpp"