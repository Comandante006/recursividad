# include <iostream>
# include <string.h>
# include <stdio.h>
using namespace std;
void Permutaciones(int n, string *, int l=0);
int main(){
    string *palabra=NULL;
    int t;
    cout<<"CANTIDAD DE ELEMENTOS DEL CONJUNTO---> ";
    cin>>t;
    cout<<"INGRESA LOS "<<t<<" ELEMENTOS"<<endl;
    palabra = new string[t];
    getline(cin, palabra[0]);
    for(int i=0;i<t;i++)
    {
            cout<<"ELEMENTO "<<i+1<<"---> ";
            getline(cin, palabra[i]);
    }
    Permutaciones(t,palabra);
    cin.get();
    return 0;
}
void Permutaciones(int n, string * cad, int l)
{
     string c;          //variable auxiliar para intercambio
     int i, j;          //variables para bucles
     for(i=0; i<n-l; i++)
     {
              if(n-l>2) Permutaciones(n,cad,l+1);
              else
              {
                  cout <<"CAMBIO: ";
                  for(int k=0; k<n; k++)
                  {
                          cout<<cad[k]<<", ";
                  }
              }
              //Intercambio de posiciones
              c=cad[l];
              cad[l]=cad[l+i+1];
              cad[l+i+1]=c;
              if(l+i==n-1)
              {
                          for(j=l; j<n; j++) cad[j]=cad[j+1];
              }
     }
}
