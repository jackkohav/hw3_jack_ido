//
// Created by jack on 15/02/2020.
//
#include <vector>
using namespace std;

template<typename Iterator, typename Predicate>
int numberOfPairs(Iterator begin, Iterator end, Predicate pred){
    int counter = 0; //counts the pairs that satisfy the condition
    for(Iterator i = begin; i != end; ++i){
        for(Iterator j = begin; j != i; ++j){  //iterating over the elements (j) before the current element (i)
            if(pred(i, j) || pred(j, i))  //the two elements satisfy the condition
                counter++;
        }
    }
    return counter;
}

int fact(unsigned const int n){
    if(n == 0) return 1;
    return fact(n-1);
}

int choose(unsigned const int n, unsigned const int k){
    if(k > n) return 0;
    return fact(n)/(fact(k)*fact(n-k));
}
template<typename Iterator>
class Monotone{
    public:
    bool operator()(Iterator i, Iterator j){
        return (i < j)&&(*i <= *j);
    }
};

bool isSorted(const vector<int>& v){
    Monotone<int> monotone();
    int size = v.size();
    int number_of_pairs = numberOfPairs(v, monotone);
    return number_of_pairs == choose(size, 2);
}