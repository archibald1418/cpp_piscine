#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

int    putstr_err(std::string msg)
{
    std::cout << msg << std::endl;
    return (1);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (putstr_err("Bad arguments"));
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::ifstream ifs(filename);
    if (ifs.is_open() == false)
        return (putstr_err(std::string("Could not open file") + filename));

    std::string outfile = filename + ".replace";
    std::ofstream ofs(outfile);
    
    if (ofs.is_open() == false)
    {
        ifs.close();
        return (putstr_err(std::string("Could stream to file") + outfile));
    }
    

}