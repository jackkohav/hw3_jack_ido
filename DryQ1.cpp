//
// Created by jack on 15/02/2020.
//
#include <iostream>
#include <vector>
using namespace std;

template<class T, class Predicate>
int numberOfPairs(const T& container, Predicate pred){

}

int fact(unsigned const int n){
    if(n == 0) return 1;
    return fact(n-1);
}

int choose(unsigned const int n, unsigned const int k){
    if(k > n) return 0;
    return fact(n)/(fact(k)*fact(n-k));
}

bool monotone();

bool isSorted(vector<int> v){
    return true;
}