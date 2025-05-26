#include <stdio.h>

double bmi(double m, double h) {
    double user_bmi;
    user_bmi = m / (h * h);
    return user_bmi;
}

int main(void) {
    double m, h;
    printf("Enter mass in kg and height in meter: ");
    scanf("%lf %lf", &m, &h);
    printf("BMI: %lf\n", bmi(m, h));
    return 0;
}
