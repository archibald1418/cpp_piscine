#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>



int    putstr_err(std::string msg)
{
    std::cout << msg << std::endl;
    return (1);
}


std::string replace_line(std::string &src, std::string &dst, std::string line, std::string replaced)
{
    std::string::size_type n;
    std::string cut_line;

    n = line.find(src);
    if (n == std::string::npos)
        return (replaced + line);
    replaced += (line.substr(0, n) + dst);
    cut_line = line.substr(n + src.length());
    return (replace_line(src, dst, cut_line, replaced));
}

int replace_file(std::string &s1, std::string &s2, \
                    std::ifstream &infile, std::ofstream &outfile)
{
    if (s1.empty() || s2.empty())
        return (putstr_err("One of the strings is empty"));

    std::string line;
    std::string replaced;

    int i = 0;
    while (std::getline(infile, line))
    {   
        replaced = replace_line(s1, s2, line, "");
        outfile << replaced;
        if (!infile.eof())
            outfile << std::endl;
        i++;
        
    }
    return (0);
}

int run_replace(int argc, char **argv)
{
    if (argc != 4)
        return (putstr_err("Bad arguments"));
    if (!*argv[1])
        return (putstr_err("Empty filename"));
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::ifstream ifs(filename);
    if (ifs.is_open() == false)
        return (putstr_err(std::string("Could not open file '") + filename + "'"));
    if (ifs.eof())
        return (putstr_err(filename + " is empty"));

    std::string outfile = filename + ".replace";
    std::ofstream ofs(outfile);
    if (ofs.is_open() == false)
    {
        ifs.close();
        return (putstr_err(std::string("Could not stream file '") + outfile + "'"));
    }

    replace_file(s1, s2, ifs, ofs);
    ifs.close();
    ofs.close();
    std::cout << "Look at '" + outfile + "'" << std::endl; 
    return (0);
}

int main(int argc, char **argv)
{
    std::string filename;
    std::string s1;
    std::string s2;
    
    std::string line;
    std::string ofilename;
    
    std::cout << "Running with given args:" << std::endl << std::endl;
    run_replace(argc, argv);
    std::cout << std::endl <<  "Running repl. You can input your args." << std::endl;
    std::cout << std::endl <<  "Type anything to start: " << std::endl;
    while (!std::cin.eof())
    {
        std::cout << "replace >> ";

        std::getline(std::cin, line);
        if (line.empty() || std::cin.eof())
            continue;
        
        if (line == "EXIT" || line == "exit")
            std::exit(0);
        
        if (line == "OPEN" || line == "open")
        {
            std::cout << "Output filename?: ";
            std::getline(std::cin, ofilename);
            std::ifstream ofile(ofilename);
            if (ofile.is_open())
                std::cout << ofile.rdbuf() << " > EOF < " << std::endl; // read the whole file
            continue;
        }
        
        // if (line == "CREATE" || line == "create")
        // {
        //     std::string srcfilename;

        //     std::cout << "Create your own file" << std::endl;
        //     std::cout << "Input filename?: ";
        //     std::getline(std::cin, srcfilename);
        //     std::cout << "Write something to " << srcfilename + " :" << std::endl << std::endl;
            
        //     std::ofstream ofs(srcfilename);
        //     // Write from cin to file
        //     std::string s;
        //     while (true)
        //     {
        //         std::getline(std::cin, s);
        //         if (s == "exit")
        //         {
        //          FIXME: waits output after exit 
        //             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        //             break;
        //         }
        //         ofs << s << std::endl;
        //     }
        //     std::cout << "Text written to file" << std::endl;
        //     ofs.close();
        // }

        // Filename
        std::cout << std::endl;
        std::cout << "Filename?: ";
        std::getline(std::cin, filename);
        // S1
        std::cout << "Src string?: ";
        std::getline(std::cin, s1);
        // S2
        std::cout << "Dst string?: ";
        std::getline(std::cin, s2);

        const char *args[] = {argv[0],
            filename.c_str(), 
            s1.c_str(), 
            s2.c_str()
        };

        // Run command
        run_replace(4, (char **)args);
    }
}