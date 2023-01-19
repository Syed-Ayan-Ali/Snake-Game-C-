#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

class Fruit
{
public:
    Fruit(int current_width, int current_height);
    void setFruitX(int newX);
    void setFruitY(int newY);
    int getFruitX();
    int getFruitY();
private:
    int fruitX;
    int fruitY;
};

Fruit::Fruit(int current_width, int current_height)
{
    int randX = rand() % (current_width + 1);
    int randY = rand() % (current_height + 1);
    fruitX = randX;
    fruitY = randY;
}

int Fruit::getFruitX()
{
    return fruitX;
}


int Fruit::getFruitY()
{
    return fruitY;
}

void Fruit::setFruitX(int newX)
{
    fruitX = newX;
}

void Fruit::setFruitY(int newY)
{
    fruitY = newY;
}

class Snake
{
public:
    Snake(int x, int y);
    Snake();
    void setSnakeX(int newX);
    void setSnakeY(int newY);
    int getSnakeX();
    int getSnakeY();
    
private:
    int snakeX;
    int snakeY;
};

Snake::Snake(int x, int y) : snakeX(x), snakeY(y){

}

Snake::Snake(): snakeX(5), snakeY(5)
{

}
int Snake::getSnakeX()
{
    return snakeX;
}


int Snake::getSnakeY()
{
    return snakeY;
}

void Snake::setSnakeX(int newX)
{
    snakeX = newX;
}

void Snake::setSnakeY(int newY)
{
    snakeY = newY;
}

class Board
{
public:
    Board(int widthValue, int heightValue);
    Board();
    // Initializes width and height of the board according to arguments
    
    void output(int snakeY, int snakeX, int fruitY, int fruitX);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    int getWidth();
    int getHeight();
    
private:
    int width;
    int height;
 
};


Board::Board(int widthValue, int heightValue) : width(widthValue), height(heightValue)
{

}

Board::Board() : width(5), height(5)
{

}

// Equivalent /\
//            || 
//            \/

// Board::Board(int widthValue, int heightValue) : width(widthValue), height(heightValue){

// }

int Board::getWidth()
{
    return width;
}


int Board::getHeight()
{
    return height;
}

void Board::setWidth(int newWidth)
{
    if (newWidth > 0)
    {
        width = newWidth;
    } else 
    {
        cout << "Width can not be negative!";
        exit(1);
    }
}

void Board::setHeight(int newHeight)
{
    if (newHeight > 0)
    {
        height = newHeight;
    } else 
    {
        cout << "Height can not be negative!";
        exit(1);
    }
}


void Board::output(int snakeY, int snakeX, int fruitY, int fruitX)
{
    cout << endl;
    for (int i = 0; i < width + 2; i++)
    {
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0){
                cout << "#";
            }
              
            if (i == snakeY && j == snakeX){
                cout << "O";
            }
            if (i == fruitY && j == fruitX){
                cout << "F";
            }
            cout << " ";
            if (j == width - 1){
                cout << "#";
            }
        }
        cout << "\n";
        
    }
    for (int i = 0; i < width + 2; i++)
    {
        cout << "#";
    }
    
}

int main(){
    string GAME_STATE = "PLAY";
    const int current_width = -9;
    const int current_height = -8;
    
    Board board;
    Snake snake;
    board.setHeight(current_height);
    board.setWidth(current_width);
    
    
    while (GAME_STATE == "PLAY"){
        Fruit fruit(current_width, current_height);
        cout << endl;
        cout << fruit.getFruitX() << endl;
        cout << fruit.getFruitY() << endl;
        cout << snake.getSnakeX() << endl;
        cout << snake.getSnakeY() << endl;

        board.output(snake.getSnakeY(), snake.getSnakeX(), fruit.getFruitY(), fruit.getFruitX());
        // snake.move();
    }

    
    
    
    return 0;
}