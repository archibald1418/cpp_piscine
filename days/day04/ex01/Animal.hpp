
#ifndef ANIMAL_H
# define ANIMAL_H
# include "Brain.hpp"

# include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Brain *brain;
        Animal (const Animal& animal);
        Animal();
        Animal& operator=(const Animal& other);
        std::string getType(void)const;
        virtual ~Animal();
        virtual void    makeSound(void)const; // Is defined here as 0 (tobe defined later)
        virtual void    think(void)const; // Is defined in .cpp
        

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