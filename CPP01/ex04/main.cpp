# include <iostream>
# include <fstream>

int main(int ac, char **av) {

    if (ac != 4) {
        std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl;
        return 1;
    }

    std::ifstream infile;
    std::ofstream outfile;
    size_t        pos;
    std::string   s1 = av[2];
    std::string   s2 = av[3];
    std::string   buffer;
    std::string   sub_str;
    std::string   new_str;

    infile.open(av[1]);
    if (!infile) {
        std::cerr << "Error opening file: " << av[1] << std::endl;
        return 1; 
    }
    outfile.open((std::string(av[1]) + ".replace").c_str());

    while (std::getline(infile, buffer)) {
        pos = buffer.find(s1);
        while (pos != std::string::npos) {
            new_str = buffer.substr(0, pos) + s2 + buffer.substr(pos + s1.size());
            buffer = new_str;
            pos = buffer.find(s1, pos + s2.size());
        }
        outfile << buffer << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}