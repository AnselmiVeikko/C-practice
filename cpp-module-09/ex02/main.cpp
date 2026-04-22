#include "PmergeMe.hpp"
#include <iostream>
#include <chrono>

static bool validateArgs(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cerr << "Error: not enough arguments. At least 2 integers expected as arguments" << std::endl;
        return false; 
    }

    for (int i = 1; i < argc; ++i)
    {
        int n;

        try
        {
            n = std::stoi(argv[i]);
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
            return false;
        }
        if (n < 0)
        {
            std::cerr << "Error: non-positive value detected: " << argv[i] << std::endl;
            return false;
        }
    }

    for (int i = 1; i < argc; ++i)
    {
        for (int j = i + 1; j < argc; j++)
        {
            if (std::stoi(argv[i]) == std::stoi(argv[j]))
            {
                std::cerr << "Error: duplicate value detected: " << argv[i] << std::endl;
                return false;
            }
        }
    }

    return true;
}

int main(int argc, char *argv[])
{
    if (!validateArgs(argc, argv))
        return 1;
        
    std::cout << "Before: ";
    for (int i = 1; i < argc; ++i)
    {
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;

    //Sort with vector
    auto start_vec = std::chrono::high_resolution_clock::now();
    Pmerge<std::vector<int>> vec;
    
    std::vector<int> sequence;
    for (int i = 1; i < argc; ++i)
    {
        sequence.push_back(std::stoi(argv[i]));
    }
    
    std::vector<int> result = vec.mergeSort(sequence);
    auto stop_vec = std::chrono::high_resolution_clock::now();
    
    //sort with deque
    auto start_que = std::chrono::high_resolution_clock::now();
    Pmerge<std::deque<int>>  que;
    
    std::deque<int>  queseq;
    for (int i = 1; i < argc; ++i)
    {
        queseq.push_back(std::stoi(argv[i]));
    }

    std::deque<int>  queres = que.mergeSort(queseq);
    auto stop_que  = std::chrono::high_resolution_clock::now();
    
    std::cout << "After: ";
    for (int nb : result)
    {
        std::cout << nb << " ";
    }
    std::cout << std::endl;
    
    auto duration_vec = std::chrono::duration_cast<std::chrono::duration<double, std::micro>>(stop_vec - start_vec);
    auto duration_deque = std::chrono::duration_cast<std::chrono::duration<double, std::micro>>(stop_que - start_que);
    
    int numElements = argc - 1;
    
    std::cout << "Time to process a range of " << numElements 
              << " elements with std::vector : " 
              << duration_vec.count() << " us" << std::endl;
              
    std::cout << "Time to process a range of " << numElements 
              << " elements with std::deque : " 
              << duration_deque.count() << " us" << std::endl;


    return 0;
}