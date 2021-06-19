#include <iostream>
using namespace std;
//=============================
//função POSITIVO OU NEGATIVO
//=============================
int posit_negativo (int num)
   {
     if (num>= 0)
      	  return(1); //Positivos
     else
      	  return(0); //Negativos
   }
//======================
//função PESO
//======================
  float peso(float altura,char sexo)
    {
      float resultado;
      if(sexo=='F')
          resultado=((62.1*altura)-44.7);
      if(sexo=='M')
         resultado=((72.7*altura)-58);
      return(resultado);
    }
//===================
//função VOGAL
//===================
      int Vogal(char Letra)
      {
      if((Letra=='A')||(Letra=='E')||(Letra=='I')||(Letra=='O')||(Letra=='U'))
        return(1);
      if((Letra!='A')||(Letra!='E')||(Letra!='I')||(Letra!='O')||(Letra!='U'))
        return(0);
      }
//======================
//função PAR ou ÍMPAR
//======================      
int par_imp(int num1)
      {  if(num1%2==0) //PAR
            return(1); 
          else
            return(0); //ÍMPAR
      }     

//==============================
//função Média do Vetor de Notas
//==============================
// Caso queira voltar o vetor inteiro use um * na frente da função
// E no return retorne o  vetor

float Media(float notas[], int TAM)
 {
      float acumula, med=0;
      for(int i=0;i<TAM;i++)
      { acumula=acumula+notas[i];
      }
      med=acumula/TAM;
      return(med);
}          
//==============================
//função triangulo
//==============================
int triangulo(float lado1,float lado2,float lado3)
   {
   	if((lado1+lado2+lado3)/3==lado1)
   	{
   	 return 1;//retornar 1 se for equilátero
	}
	if((lado1!=lado2&&lado2!=lado3&&lado3&&lado1))
	{
	 return 2;//retornar 2 se for escaleno
	}
	if((lado1!=lado2&&lado3==lado1||lado2!=lado3&&lado1==lado2||lado3!=lado1&&lado2==lado3))
	{
	 return 3;//retornar 3 se for isósceles	
	}
}
//==============================
//função maior e menor
//==============================
int maior_menor(int num1,int num2)
	{
        if(num1>num2)
        {
	    return(1);//numero 1 maior
        }
        if(num2>num1)
        {
        return(2);//numero 2 maior
    }
	}
//==============================
//função Média do Vetor de Alturas
//==============================
float media_altura(float altura[], int TAM)
 {
      float acumula, med=0;
      for(int i=0;i<TAM;i++)
      { acumula=acumula+altura[i];
      }
      med=acumula/TAM;
      return(med);
}     
//==============================
//função Média do Vetor de Peso
//==============================
float media_peso(float peso[], int TAM)
 {
      float acumula, med=0;
      for(int i=0;i<TAM;i++)
      { acumula=acumula+peso[i];
      }
      med=acumula/TAM;
      return(med);
}     
//=========================
//função Recursiva
//=========================
void recursiva (int vezes, char caractere)	 
{
   	if (vezes >= 1)
   	{
	  cout<<"    "<<caractere;
	  recursiva(vezes-1,caractere);
    }
}     

