#include <cstdarg>
double square(double n){
    return n*n;
}
double average(double num, ...) {
    va_list valist;              
    double sum = 0.0;
    int i;

    va_start(valist, num);        
    for (i = 0; i < num; i++) {   
        sum += va_arg(valist, double);
    }
    va_end(valist);               

    return sum / num;
}