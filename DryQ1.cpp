//
// Created by jack on 15/02/2020.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename Iterator, typename Predicate>
int numberOfPairs(Iterator begin, Iterator end, Predicate pred){
    int counter = 0; //counts the pairs that satisfy the condition
    for(Iterator i = begin; i != end; ++i){
        for(Iterator j = begin; j != i; ++j){  //iterating over the elements (j) before the current element (i)
            if(pred(*i, *j) || pred(*j, *i))  //the two elements satisfy the condition
                counter++;
        }
    }
    return counter;
}

int fact(unsigned const int n){
    if(n == 0) return 1;
    return n*fact(n-1);
}

int choose(unsigned const int n, unsigned const int k){
    if(k > n) return 0;
    return fact(n)/(fact(k)*fact(n-k));
}
class Monotone{
    vector<int> v;
    public:
    explicit Monotone(const vector<int>& vec): v(vector<int>(vec)){}
    bool operator()(const int& i, const int& j){
        auto i_place = find(v.begin(), v.end(), i);
        auto j_place = find(v.begin(), v.end(), j);
        return (i < j)&&(i_place <= j_place);
    }
};

bool isSorted(const vector<int>& v){
    Monotone monotone(v);
    int size = v.size();
    int number_of_pairs = numberOfPairs(v.begin(), v.end(), monotone);
    return number_of_pairs == choose(size, 2);
}
int main(){
    vector<int> v = {1,2,3,8,5,6};
    std::cout << isSorted(v) << std::endl;
}