#include <climits>

template<typename Container>
Pmerge<Container>::Pmerge()
{}

template<typename Container>
Pmerge<Container>::~Pmerge()
{}

template<typename Container>
typename Pmerge<Container>::Level Pmerge<Container>::makePairs(const Container& container)
{
    Level result;

    for (size_t i = 0; i < container.size() - 1; i += 2)
    {
       int a = container[i];
       int b = container[i + 1];
       
       if (a > b)
       {
            result.pairs.push_back({a, b});
       }
       else
       {
            result.pairs.push_back({b, a});
       }
    }

    if (container.size() % 2 == 1)
    {
        result.oddElement = container.back();
        result.hasOddElement = true;
    }
    else
    {
        result.hasOddElement = false;
    }

    return result;
}

template<typename Container>
void Pmerge<Container>::insertElement(Container& container, int element, int pair)
{
    auto limit = std::lower_bound(container.begin(), container.end(), pair);

    auto pos = std::lower_bound(container.begin(), limit, element);

    container.insert(pos, element);
}

template<typename Container>
std::vector<size_t> Pmerge<Container>::getInsertionOrder(size_t size)
{
    std::vector<size_t> insertionOrder;
    std::vector<size_t> jacobsthal = {0, 1};

    while (jacobsthal.back() < size)
    {
        size_t next = jacobsthal.back() + 2 * jacobsthal[jacobsthal.size() - 2];
        jacobsthal.push_back(next);
    }
    
    for (size_t i = 2; i < jacobsthal.size() && jacobsthal[i - 1] < size; ++i)
    {
        size_t start = std::min(jacobsthal[i] - 1, size - 1);
        size_t end = jacobsthal[i - 1] - 1;
        
        for (size_t j = start; j > end && j < size; --j)
        {
            insertionOrder.push_back(j - 1);
        }
    }
    
    return insertionOrder;
}

template<typename Container>
void Pmerge<Container>::insertNewLow(Container& container, typename Pmerge<Container>::Level& level)
{
    int currentLowest = container.front();

    for (auto it = level.pairs.begin(); it != level.pairs.end(); ++it)
    {
        if (it->first == currentLowest)
        {
            int newLowest = it->second;
            container.insert(container.begin(), newLowest);
            level.pairs.erase(it);
            return ;
        }
    }
}

template<typename Container>
Container Pmerge<Container>::mergeSort(const Container& container)
{
    Container result;

    _levels.push_back(makePairs(container));

    if (_levels.back().pairs.size() > 1)
    {
        for (const auto& pair : _levels.back().pairs)
        {
            result.push_back(pair.first);
        }

        return mergeSort(result);
    }

    else
    {
        result.push_back(_levels.back().pairs.back().second);
        result.push_back(_levels.back().pairs.back().first);
        if (_levels.back().hasOddElement)
            insertElement(result, _levels.back().oddElement, INT_MAX);
        _levels.pop_back();
    }

    for (size_t levelCount = _levels.size(); levelCount > 0; --levelCount)
    {
        size_t i = levelCount - 1;

        insertNewLow(result, _levels[i]);

        std::vector<int> pend;
        std::vector<int> winners;

        for (const auto& pair : _levels[i].pairs)
        {
            pend.push_back(pair.second);
            winners.push_back(pair.first);
        }
        if (_levels[i].hasOddElement)
        {
            pend.push_back(_levels[i].oddElement);
            winners.push_back(INT_MAX);
        }

        std::vector<size_t> insertionOrder = getInsertionOrder(pend.size() + 1);

        for (size_t insert : insertionOrder)
        
        {
            int loser = pend[insert];
            int winner = winners[insert];
            
            insertElement(result, loser, winner);
        }
    }
    return result;
}
