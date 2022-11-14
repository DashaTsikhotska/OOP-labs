#pragma once
class operator_plus
{

public:
    int operator () (int x, int y) const {
        return x + y;
    }
};
class operator_addition
{

public:
    int operator () (int x, int y) const {
        return x - y;
    }
};
class operator_times
{

public:
    int operator () (int x, int y) const {
        return x * y;
    }
};
class operator_divides
{

public:
    int operator () (int x, int y) const {
        return x / y;
    }
};
class operator_modulus
{

public:
    int operator () (int x, int y) const {
        return x % y;
    }
};
class operator_negate
{

public:
    int operator () (int x) const {
        return -x;
    }
};
class operator_equal_to
{

public:
    bool operator () (int x, int y) const {
        return x == y;
    }
};
class operator_not_equal_to
{

public:
    bool operator () (int x, int y) const {
        return x != y;
    }
};
class operator_greater
{

public:
    bool operator () (int x, int y) const {
        return x > y;
    }
};
class operator_less
{

public:
    bool operator () (int x, int y) const {
        return x < y;
    }
};
class operator_greater_equal
{

public:
    bool operator () (int x, int y) const {
        return x >= y;
    }
};
class operator_less_equal
{

public:
    bool operator () (int x, int y) const {
        return x <= y;
    }
};
class logical_and
{

public:
    bool operator () (bool x, bool y) const {
        return x && y;
    }
};
class logical_or
{

public:
    bool operator () (bool x, bool y) const {
        return x || y;
    }
};
class logical_not
{

public:
    bool operator () (bool x) const {
        return !x;
    }
};