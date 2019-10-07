//
// Created by comun on 7/10/2019.
//

#include <iostream>
#include <cstdlib>

const double pi = 3.14159265358979323846;

double primer_miembro(double x, double w, double Q, double k){
    //TODO: Verificar si esto es correcto
    double coef;
    coef = Q/k;
    double w_cuad;
    w_cuad = std::pow(w,2);
    double x_cuad;
    x_cuad = std::pow(x,2);
    double pi_cubo;
    pi_cubo = std::pow(pi, 3);
    double result;
    result = ((coef * w_cuad / (4.0 - x_cuad))/ 2.0) - ((4.0 * w_cuad * coef)/ pi_cubo);
    return result;
}

double sumatoria(double x, double y, double h,double w, int n){
    //TODO: Implementar sumatoria
    return 0.0;
}



int main(int argc, char *argv[]) {
    //TODO: Resultado parece ser vectorial
    if(argc == 5){
        double x;
        x = std::strtod(argv[1],NULL);
        double y;
        y = std::strtod(argv[2],NULL);
        double h;
        h = std::strtod(argv[3],NULL);
        double w;
        w = std::strtod(argv[4],NULL);
        //Q parece ser un vector. Averiguar bien que es.
        double Q;
        Q = std::strtod(argv[5],NULL);
        double k;
        k = std::strtod(argv[6],NULL);
        int n_max;
        n_max = std::atoi(arg[7]);
        //TODO: Implementar aqui el calculo
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
