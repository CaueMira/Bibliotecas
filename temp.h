#include <iostream>
//==============================
//fun��o M�dia do Vetor de temperatura
//==============================
float media(float temp[],int TAM)
 {
      float acumula, med=0;
      for(int i=0;i<TAM;i++)
      { acumula=acumula+temp[i];
      }
      med=acumula/TAM;
      return(med);
}  
//==============================
//fun��o maior temperatura do vetor
//==============================       
float maior(float temp[],int TAM,float maio)
{
	for(int i=0;i<TAM;i++)
	{
	    if (i==0) 
           { 
			maio = temp[i];
           }
        if (temp[i] > maio)
            {
			  maio = temp[i];
            }
	}
 return (maio);
}
//==============================
//fun��o menor temperatura do vetor
//==============================       
float menor(float temp[],int TAM,float meno)
{
	for(int i=0;i<TAM;i++)
	{
	    if (i==0) 
           { 
        	meno = temp[i];
           }
        if (temp[i] < meno)
            {
			  meno = temp[i];
            }
	}
 return (meno);
}
//==============================
//fun��o temperatura negativa do vetor
//==============================  
int qtde_negativa(float temp[],int TAM)
{
	int acumula;	
	for(int i=0;i<TAM;i++)
	if(temp[i]<0)
	{
	acumula=acumula+1;
    }
 return (acumula);
}
//==============================
//fun��o temperatura positiva do vetor
//==============================  
int qtde_positiva(float temp[],int TAM)
{
	int acumula;	
	for(int i=0;i<TAM;i++)
	if(temp[i]>=0)
	{
	acumula=acumula+1;
    }
 return (acumula);
}
//==============================
//fun��o ano menor temp do vetor
//==============================  
int menor_ano(float temp[],int ano[],int TAM,float meno)
{
	int menor_ano;
	for(int i=0;i<TAM;i++)
	{
		if (i==0) 
           { 
        	meno = temp[i];
           }
        if ( temp[i] < meno)
		{ 
		meno = temp[i];
		menor_ano=ano[i];
		}
	}
	return (menor_ano);//Arrumar com a professora //Tentei colocar return (ano)
}
//==============================
//fun��o mes maior temp do vetor
//============================== 
int maior_mes(float temp[],int mes[],int TAM,float maio)
{
	int maior_mes;
	for(int i=0;i<TAM;i++)
	{
	    if (i==0) 
           { 
			maio = temp[i];
           }
		if ( temp[i] > maio)
		{ 
		maio = temp[i];
		maior_mes=mes[i];
		}          
	}
 return (maior_mes);//Arrumar com a professora //Tentei colocar return (mes)
}
//==============================
//fun��o temp abaixo da media
//============================== 
int baixo_media(float temp[],int TAM)
{
	  float acumula, acum, med=0;
      for(int i=0;i<TAM;i++)
      { 
	  acumula=acumula+temp[i];
      }
      med=acumula/TAM;
      for(int i=0;i<TAM;i++)
      if (temp[i] < med)  //Para adicionar no contador a quantidade de temperaturas abaixo da m�dia
      {
      	acum=acum+1;
	  }
      return(acum);
}
//==============================
//fun��o dia 15/06
//============================== 
int quinze_seis(int TAM,float temp[],int dia[],int mes[])
{
	for(int i=0;i<TAM;i++)
		if (dia[i]==15&&mes[i]==6)
			return (temp[i]);
}

