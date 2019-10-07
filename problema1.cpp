#include <iostream>
#include <cstdlib>

const double pi = 3.14159265358979323846;

int main(int argc, char *argv[]) {
    if(argc == 5){
        double x;
        x = std::strtod(argv[1],NULL);
        double y;
        y = std::strtod(argv[2],NULL);
        double h;
        h = std::strtod(argv[3],NULL);
        double w;
        w = std::strtod(argv[4],NULL);
        double t = 100 * (std::sinh(pi*y/w)*std::sin(pi*x/w))/std::sinh(pi*h/w);
        std::cout << R"({"mens": "result",)";
        std::cout << " \"x\": "<< x;
        std::cout << ", \"y\": "<< y;
        std::cout << ", \"t\": "<< t;
        std::cout << "}" << std::endl;
    }
    else
        std::cout << "Error! Argumentos insuficientes!" << std::endl;
    return 0;
}