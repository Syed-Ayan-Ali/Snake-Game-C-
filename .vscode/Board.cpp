#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// class Board
// {
// public:
//     // Board(int width, int height);
//     // // Initializes width and height of the board according to arguments
//     // void update();
//     void output();
//     void setWidth(int newWidth);
//     void setHeight(int newHeight);
//     int getWidth();
//     int getHeight();

// private:
//     int width;
//     int height;
 
// };

// /*
// Board::Board(int widthValue, int heightValue){
//     width = widthValue;
//      height = heightValue;
// }
// */

// // Equivalent /\
// //            || 
// //            \/

// // Board::Board(int widthValue, int heightValue) : width(widthValue), height(heightValue){

// // }

// int Board::getWidth()
// {
//     return width;
// }


// int Board::getHeight()
// {
//     return height;
// }

// void Board::setWidth(int newWidth)
// {
//     if (newWidth > 0)
//     {
//         width = newWidth;
//     } else 
//     {
//         cout << "Width can not be negative!";
//     }

// }

// void Board::setHeight(int newHeight)
// {
//     if (newHeight > 0)
//     {
//         height = newHeight;
//     } else 
//     {
//         cout << "Height can not be negative!";
        
//     }
    
// }


// void Board::output()
// {
//     cout << "####################";
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             cout << "   ";
//         }
//         cout << "\n";
//     }
//     cout << "####################";
    
// }