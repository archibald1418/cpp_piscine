
#ifndef ANIMAL_H
# define ANIMAL_H
# include "Brain.hpp"

# include <iostream>

class AAnimal
{
    protected:
        std::string type;
        
    public:
        AAnimal (const AAnimal& animal);
        AAnimal();
        AAnimal& operator=(const AAnimal& other);
        std::string getType(void)const;
        virtual ~AAnimal();
        virtual void    makeSound(void)const = 0; // Is defined here as 0 (tobe defined later)
        virtual void    think(void)const = 0; // Is defined in .cpp
        virtual Brain*  getBrain()const = 0;
        virtual AAnimal* clone() = 0;

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
