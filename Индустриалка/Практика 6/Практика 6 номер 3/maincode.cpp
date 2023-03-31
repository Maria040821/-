#include <array>

typedef std::array<char, 9> tictactoe_status;

tictactoe_status const strategy_x[] = 
{
   {1,0,0,0,0,0,0,0,0},
   {1,2,0,0,1,0,0,0,0},
   {1,2,2,0,1,0,0,0,1},
   {1,2,0,2,1,0,0,0,1},
   // ...
};

tictactoe_status const strategy_o[] = 
{
   {2,0,0,0,1,0,0,0,0},
   {2,2,1,0,1,0,0,0,0},
   {2,2,1,2,1,0,1,0,0},
   {2,2,1,0,1,2,1,0,0},
   // ...
};

tictactoe_status const strategy_x[] = 
{
#include "strategy_x.h"
};

tictactoe_status const strategy_o[] = 
{
#include "strategy_o.h"
};