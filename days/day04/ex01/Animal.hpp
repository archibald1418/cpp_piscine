
#ifndef ANIMAL_H
# define ANIMAL_H
# include "Brain.hpp"

# include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal (const Animal& animal);
        Animal();
        Animal& operator=(const Animal& other);
        std::string getType(void)const;
        virtual ~Animal();
        virtual void    think(void)const = 0; 
        virtual Brain*  getBrain()const = 0;
        virtual Animal* clone() = 0;

};

// Interface example from nicolas

// class ISoundPlayer {
//     public:
//         virtual void PlaySound(std::string path) {
//             std::cout << "Not implemented sound player" << std::endl;
//         }
// }

// class OSXSoundPlayer : public ISoundPlayer {
//     public:
//         virtual void PlaySound(std::string path) {
//             exec("");
//         }
// }

// class PlugSoundPlayer : public ISoundPlayer {}

// void GameLoop(ISoundPlayer* player) {
//     player->PlaySound("a/b.wav");
// }

// int main() {
//     ISoundPlayer* soundPlayer = new OSXSoundPlayer();

//     GameLoop(soundPlayer;
// }

#endif
