#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
//    float a, b, c, delta, x0, x1, x2;
//    printf("Wprowadz wartosci par. a, b, c");
//    scanf("%e %e %e", &a, &b, &c);
//    delta=b*b-4*a*c;
//      if (delta>0)
//      {
//      x1=(-b*b-sqrt(delta))/(2*a);
//      x2=(-b*b+sqrt(delta))/(2*a);
//      }

//Pole kola

//    float r, pole;
//    printf("prosze podac promien kola\n");
//    scanf("%f", &r);
//    pole=M_PI*pow(r, 2);
//    printf("%f", pole);

//pierwiastek z sumy kwadratow

//    float c, a, b;
//    printf("dojcie a i b\n");
//    scanf("%f %f", &a, &b);
//    printf("c=%f", sqrt(pow(a, 2)+pow(b, 2)));

//objetosc kuli
    float r;
    printf("prosze podac promien kuli:\n");
    scanf("%f", &r);
    printf("objetosc kuli o promieniu %f wynosi %f", r, 4/3*M_PI*pow(r, 3));

return 0;
}

//to powinno pojsc na gore

//float polekola(float r)
//{
//
//return p
//}
