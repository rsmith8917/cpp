#include <iostream>

class Player
{
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    Player player;
    player.x = 5;
    player.y = 3;
    player.speed = 1;
    player.Move(2, 1);
    std::cout << player.x << std::endl;

    return 0;
}