
#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        virtual void    makeSound(void)const;
        
        // The method to override. "= 0" is a special syntax 
        std::string getType(void)const{
            return this->type;
        };
        Animal();
        ~Animal();
        Animal (const Animal& animal);
        Animal& operator=(const Animal& other);
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



