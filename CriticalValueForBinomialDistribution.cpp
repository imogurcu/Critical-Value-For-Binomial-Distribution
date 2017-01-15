#include <iostream>
#include <math.h>

using namespace std;

int faktoriyelAl(int x);
int ustFaktoriyel(int y, int z);


int main(float Sonuc,double permutasyonSonuc)
{
    int a;
    double pi;
    double alfa;
    double sonuc=0.0;



    cout<<"n değerini giriniz ";
    cin>>a;
    cout<<"pi değerini giriniz ";
    cin>>pi;
    cout<<"alfa değerini giriniz ";
    cin>>alfa;

    int c=1;
    int n=a;
    double pi2=0.0;

    pi2 = 1-pi;

    double toplam=0.0;

    for(int i=0;i<=a;i++){

        permutasyonSonuc =  ustFaktoriyel(a,i)/faktoriyelAl(i);
        sonuc = permutasyonSonuc * (double)pow((double)pi,i) * (double)pow((double)pi2,n);
        toplam = toplam + sonuc;



        cout<<"P(b=";
        cout<<i;
        cout<<") = ";

        cout<<sonuc<<endl;
        cout<<i;
        cout<<". Kritik değer için toplam___";
        cout<<toplam;
        cout<<"____|"<<endl;

        if(toplam>(0.010) && toplam<(0.0599999)){
            cout<<" alfa/2 için kritik degeri ";
            cout<<i;
            cout<<" dir."<<endl;
        }
        if(toplam>(0.065555) && toplam<(0.119788945)){
            cout<<" alfa için kritik degeri ";
            cout<<i;
            cout<<" dir."<<endl;
        }


        n--;
    }


}

int ustFaktoriyel(int y,int z){
    int faktorSonuc=1;
    while(0<z){
        faktorSonuc=faktorSonuc*y;
        y--;
        z--;
    }
    return faktorSonuc;
}

int faktoriyelAl(int x){

    int faktorSonuc=1;
    for(int i=1;i<=x;i++){
        faktorSonuc=faktorSonuc*i;

    }
    return faktorSonuc;

}




