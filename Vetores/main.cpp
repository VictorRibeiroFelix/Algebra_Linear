#include <iostream>
#include <valarray>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main() {
    float x, y, z, k;
    float x2, y2, z2;
    float x3, y3, z3;

    cout << "\nImplementacao Vetores\n";

    cout << " x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    cout << "z= ";
    cin >> z;
    cout << "\nU = " << "( " << x << " , " << y << " , " << z << " )"<< endl;

    cout <<"------------------";

    cout << "\n x2= ";
    cin >> x2;
    cout << "y2= ";
    cin >> y2;
    cout << "z2= ";
    cin >> z2;
    cout << "\nV = " << "( " << x2 << " , " << y2 << " , " << z2 << " )"<< endl;

    cout <<"------------------";

    cout << "\n x3= ";
    cin >> x3;
    cout << "y3= ";
    cin >> y3;
    cout << "z3= ";
    cin >> z3;
    cout << "\nW = " << "( " << x3 << " , " << y3 << " , " << z3 << " )"<< endl;

    cout << "\n1-Soma\n";
    cout << "\nU + V = " << "( " << (x + x2) << " , " << (y + y2) << " , " << (z + z2) << " )" << endl;
    cout << "\nU + W = " << "( " << (x + x3) << " , " << (y + y3) << " , " << (z + z3) << " )" << endl;
    cout << "\nV + W = " << "( " << (x2 + x3) << " , " << (y2 + y3) << " , " << (z2 + z3) << " )" << endl;

    cout << "\n2-Subtracao\n";
    cout << "\nU - V = " << "( " << (x - x2) << " , " << (y - y2) << " , " << (z - z2) << " )" << endl;
    cout << "\nU - W = " << "( " << (x - x3) << " , " << (y - y3) << " , " << (z - z3) << " )" << endl;
    cout << "\nV - W = " << "( " << (x2 - x3) << " , " << (y2 - y3) << " , " << (z2 - z3) << " )" << endl;

    cout << "\n3-Multiplicacao com K\n";
    cout << "\n k= ";
    cin >> k;
    cout << "\nK x U = " << "( " << (k*x) << " , " << (k*y) << " , " << (k*z) << " )" << endl;
    cout << "\nK x V = " << "( " << (k*x2) << " , " << (k*y2) << " , " << (k*z2) << " )" << endl;
    cout << "\nK x W = " << "( " << (k*x3) << " , " << (k*y3) << " , " << (k*z3) << " )" << endl;

    cout << "\n4-Modulo\n";
    cout << "\n|U| = " << sqrt((x*x)+(y*y)+(z*z)) << endl;
    cout << "\n|V| = " << sqrt((x2*x2)+(y2*y2)+(z2*z2)) << endl;
    cout << "\n|W| = " << sqrt((x3*x3)+(y3*y3)+(z3*z3)) << endl;

    cout << "\n5-Produto Escalar\n";
    cout << "\nU x V = " << ((x*x2) + (y*y2) + (z*z2)) << endl;
    cout << "\nU x W = " << ((x*x3) + (y*y3) + (z*z3)) << endl;
    cout << "\nV x W = " << ((x2*x3) + (y2*y3) + (z2*z3)) << endl;

    cout << "\n6-Angulo entre Vetores\n";

    float u2 = sqrt((x*x)+(y*y)+(z*z));
    float v2 = sqrt((x2*x2)+(y2*y2)+(z2*z2));
    float w2 = sqrt((x3*x3)+(y3*y3)+(z3*z3));
    float UxV = ((x*x2) + (y*y2) + (z*z2));
    float UxW = ((x*x3) + (y*y3) + (z*z3));
    float VxW = ((x2*x3) + (y2*y3) + (z2*z3));
    float Pi = 3.14;

    float O = (UxV) / ((u2)*(v2));
    float X = (O * 180) / Pi;

    float O2 = (UxW) / ((u2)*(w2));
    float X2 = (O2 * 180) / Pi;

    float O3 = (VxW) / ((v2)*(w2));
    float X3 = (O3 * 180) / Pi;

    cout << "O = "<< X << endl;
    cout << "O2 = "<< X2 << endl;
    cout << "O3 = "<< X3 << endl;

    cout << "\n7-Produto Vetorial\n";
    int n =1, i, j, l, n2 = 2, i2, j2, l2, n3 = 3, i3, j3, l3;

    if (n == 1){
        i= (y*z2)-(y2*z);
        j= (x2*z)-(x*z2);
        l= (x*y2)-(x2*y);
            if(i+j+l==0 && ((x==0 && x2==0)||(y==0 && y2==0)||(z==0 && z2==0))){
                cout << "Os vetores U = " << "( " << x << " , " << y << " , " << z << " )" << " e V = "<<  "( " << x2 << " , " << y2 << " , " << z2 << " )" << " sao colineares e um deles é nulo " << "i = " << i << " j = " << j << " k = " << l <<endl;
            } else if(i+j+l==0){
                cout << "Os vetores U = "<< "( " << x << " , " << y << " , " << z << " )" " e V = "<<  "( " << x2 << " , " << y2 << " , " << z2 << " )" <<" sao colineares"<<endl;
            }else{
                cout <<"i = "<< i << " , " << "j = " << j << " , " << "k = " << l << " E ortogonal a U e V"<<endl;
            }
    }

    if (n2 == 2){
        i2= (y2*z3)-(y3*z2);
        j2= (x3*z2)-(x2*z3);
        l2= (x2*y3)-(x3*y2);
        if(i2+j2+l2==0 && ((x2==0 && x3==0)||(y2==0 && y3==0)||(z2==0 && z3==0))){
            cout << "Os vetores V = "<<  "( " << x2 << " , " << y2 << " , " << z2 << " )" << " e W = "<< "( " << x3 << " , " << y3 << " , " << z3 << " )"<< " sao colineares e um deles é nulo " << "i2 = " << i2 << " j2 = " << j2 << " k2 = " << l2<<endl;
        } else if(i2+j2+l2==0){
            cout << "Os vetores V = "<<  "( " << x2 << " , " << y2 << " , " << z2 << " )" << " e W = "<< "( " << x3 << " , " << y3 << " , " << z3 << " )"<< " sao colineares"<<endl;
        }else{
            cout <<"i2 = "<< i2 << " , " << "j2 = " << j2 << " , " << "k2 = " << l2 << " E ortogonal a V e W"<<endl;
        }
    }

    if (n3 == 3){
        i3= (y*z3)-(y3*z);
        j3= (x3*z)-(x*z3);
        l3= (x*y3)-(x3*y);
        if(i3+j3+l3==0 && ((x==0 && x3==0)||(y==0 && y3==0)||(z==0 && z3==0))){
            cout << "Os vetores U = "<< "( " << x << " , " << y << " , " << z << " )" << " e W = "<< "( " << x3 << " , " << y3 << " , " << z3 << " )"<<" sao colineares e um deles é nulo " << "i3 = " << i3 << " j3 = " << j3 << " k3 = " << l3 <<endl;
        } else if(i3+j3+l3==0){
            cout << "Os vetores U = "<< "( " << x << " , " << y << " , " << z << " )" << "e W = " << "( " << x3 << " , " << y3 << " , " << z3 << " )"<< " sao colineares"<<endl;
        }else{
            cout << "i3 = "<< i3 << " , " << "j3 = " << j3 << " , " << "k3 = " << l3 << " E ortogonal a U e W"<<endl;
        }
    }

    cout << "\n8-Produto Misto\n";
    float resultado = x*(y2*z3 - z2*y3)+ y*(z2*x3 - x2*z3) + z*(x2*y3 - y2*x3);
    cout << "O produto misto e: " << resultado << endl;

    return 0;
}

