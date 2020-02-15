#include <iostream>
#include <string>
using std::string;
using std::exception;


// ---------------------------------------------
class NoPrice
{
};

// ---------------------------------------------
class Seat
{
    int row_number;
    int chair_number;
    int base_price;
public:
    Seat(int row, int chair, int base):
        row_number(row), chair_number(chair), base_price(base){}
    virtual int price() const = 0;

};

// ---------------------------------------------
class GreenRoomSeat
{
};

// ---------------------------------------------
class MainHallSeat
{
};

// ---------------------------------------------
class SpecialSeat
{
};

// ---------------------------------------------
class GoldenCircleSeat
{
};

// ---------------------------------------------
class DisablePodiumSeat
{
};

// ---------------------------------------------
class RegularSeat
{
};

// ---------------------------------------------
class FrontRegularSeat
{
};

// ---------------------------------------------
class MiddleRegularSeat
{
};

// ---------------------------------------------
class RearRegularSeat
{
};

// ---------------------------------------------
