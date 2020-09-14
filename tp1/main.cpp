#include <iostream>

using namespace std;

bool numeroPertenece(int numeros[],int inicio, int fin, int buscado)
{
    while(inicio<fin)
    {
        int pos=(inicio+fin)/2;
        if (buscado<numeros[pos])
            fin=pos-1;
        else
            if (buscado>numeros[pos])
                inicio=pos+1;
            else
                return true;
    }
    return false;
}

void buscarMayoria(int numeros[],int inicio, int fin, int &mayoria, int &cant)
{
    int aux=0;
    for(int i=inicio;i<fin;i++)
    {
        if(numeros[i]==numeros[i+1])
            aux++;
        else
            aux=0;
        if(aux>=fin/2)
        {
            mayoria=numeros[i];
            cant=aux+1;
        }
    }

}

int potencia(int base, int exp)
{
    int aux=base;
    if(exp==0)
        return 1;
    else
    {
        for(int i=1;i<exp;i++)
            aux=aux*base;
        return aux;
    }
}
void ordenamientoSeleccion(int arreglo[], int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (arreglo[i] > arreglo[j])
            {
                int aux = arreglo[j];
                arreglo[j] = arreglo[i];
                arreglo[i] = aux;
            }
        }
    }
}
void ordenamientoBurbuja(int arreglo[], int n)
{
    for(int z = 1; z < n; ++z)
    {
        for(int v = 0; v < (n - z); v++)
        {
            if(arreglo[v] > arreglo[v+1])
            {
                int aux = arreglo[v];
                arreglo[v] = arreglo[v + 1];
                arreglo[v + 1] = aux;
            }
        }
    }
}
int main()
{
    int numeros[5]={2,3,3,3,4};
    int n;
    int mayo=-1;
    int cant=0;
    int base,exp;
    cout<<"Que numero queres buscar?"<<endl;
    cin>>n;
    cout<<"ya te digo"<<endl;
    if(numeroPertenece(numeros,1,5,n))
        cout<<"si tah"<<endl;
    else
        cout<<"no, no tah"<<endl;
    buscarMayoria(numeros,1,5,mayo,cant);
    if(mayo!=-1)
    {
        cout<<"Aunque no me preguntes te cuento que "<<mayo<<" esta en la mayor parte del arreglo"<<endl;
        cout<<"unas "<<cant<<" veces, te la dejo ahi"<<endl;
    }
    else
        cout<<"Te iba a tirar que numero del arreglo esta en su mayoria pero no hay :/"<<endl;
    cout<<"mira esto quedo asi, "<<mayo<<" , "<<cant<<endl;
    cout<<"Bueno ahora tirame un numero y a cuanto queres que lo eleve"<<endl;
    cin>>base>>exp;
    cout<<"da "<<potencia(base,exp)<<", pum"<<endl;


}
