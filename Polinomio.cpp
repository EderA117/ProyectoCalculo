#include<stdio.h>
#include<math.h>

int main()
{
	int decision,i,x,f,g,p,r,t,y,k,l;
	float polinomio[12],valor,polinomio1[12],polinomio2[12],e[100],resultado1[100],polinomio3[12],polinomio4[12],resultado2[100];
	double resultado=0;
	printf("Polinomios\nSe presenta un menu donde tendras solo 3 opciones\n");
	printf("Para intoducir el ponimonio y valuarlo presione 1\nPara multiplicar 2 polinomios presione 2\nPara dividri dos polinomios presione 3\n");
	scanf("%i",&decision);
	switch(decision)
	{
		case 1:
			for(i=0;i<=12;i++)
			{
				printf("Introduzca el coeficiente del polinomio: x^%i\n",i);				scanf("%f",&polinomio[i]);
			}
			printf("Digite en que valor quiere valuar la funcion: \n");			scanf("%f",&valor);
			for(i=0;i<=12;i++)
			{
				resultado=resultado+(pow(valor,i)*polinomio[i]);
			}
				printf("El resultado es: %lf",resultado);
				break;
		case 2:
			printf("Cual es el grado maximo del polinomio?");    scanf("%i",&y);
			for(f=0;f<=y;f++)
			{
				printf("Introduzca los coeficientes del 1er polinomio: x^%i\n",f);				scanf("%f",&polinomio1[f]);
			}
			for(g=0;g<=y;g++)
			{
				printf("Introduzca los coeficientes del 2do polinomio: x^%i\n",g);				scanf("%f",&polinomio2[g]);
			}
				for(g=0;g<=y;g++)
				{
					if(polinomio2[g]!=0)
					{
					r=0;
					t=0;
					for(f=0;f<=y;f++)
					{
						if(polinomio1[f]!=0)
						{
						resultado1[r]=(polinomio1[f]*polinomio2[g]);
						e[t]=f+g;
						r++;
						t++;
						}
					}
					}
					
				}
			r=0;
			t=0;
				for(p=0;p<=6;p++)
				{
				printf("%0.2fx^%0.1f + ",resultado1[r],e[t]);
				r++;
				t++;
				}
			break;
		case 3:
			printf("Cual es el grado maximo del polinomio?");    scanf("%i",&y);
			for(k=0;k<=y;k++)
			{
				printf("Introduzca los coeficientes del 1er polinomio: x^%i\n",k);				scanf("%f",&polinomio3[k]);
			}
			for(l=0;l<=y;l++)
			{
				printf("Introduzca los coeficientes del 2do polinomio: x^%i\n",l);				scanf("%f",&polinomio4[l]);
			}
				for(l=0;l<=y;l++)
				{
					if(polinomio4[l]!=0)
					{
					r=0;
					t=0;
					for(k=0;k<=y;k++)
						{
							if(polinomio3[k]!=0)
							{
							resultado2[r]=(polinomio3[k]/polinomio4[l]);
							e[t]=k-l;
							r++;
							t++;
							}
						}
					}
					
				}
			r=0;
			t=0;
				for(p=0;p<=6;p++)
				{
				printf("%0.2fx^%0.1f + ",resultado2[r],e[t]);
				r++;
				t++;
				}
			break;
	}
}
