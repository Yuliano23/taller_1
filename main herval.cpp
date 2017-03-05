#include <iostream>
#include <cstring>
#include <conio.h>
#include <math.h>
using namespace std;

int seleccion, opcion, a, limite, suma, x, limite_2, suma_2, suma_3, y,suma_4, z,limite_3, limite_4, opcion_2, i, num, res, j, num_1, k, factorial;
int e, b=0, c=1 ,d=1, l, vector [5], m, n, o, opcion_3, largo, ancho;

int main(int argc, char** argv) 
{
	do{
	
system("CLS");
cout<< "MENU PRINCIPAL\n\n";
cout<< "presione 1 para acceder a las opciones del while\n";
cout<< "presione 2 para acceder a las opciones del ciclo for\n";
cout<< "presione 3 para acceder a las opciones del array\n";
cout<< "presione 4 para acceder a las opciones del switch\n";
cout<< "presione 5 para acceder al modulo de matrices\n";
cout<< "presione 6 para acceder al modulo de estructuras\n\n";
cout<< "SELECCIONE LA OPCION O EL MODULO DESEADO\n";
cin>> seleccion;
system("cls");

switch (seleccion)
{
	case 1:
	cout<< " MENU CICLO WHILE\n\n";
	cout<< "opcion 1: imprimir los numeros del 1 al 10\n";
	cout<< "opcion 2: sumar los numeros del 1 al 100\n";
	cout<< "opcion 3: sumar los numeros pares del 1 al 50\n";
	cout<< "opcion 4: sumar los numeros impares del 1 al 50\n\n";
	cout<< "ELIJA UNA OPCION\n";
	cin>> opcion;
	system("CLS");
	
		// OPCIONES DEL CICLO WHILE
	switch (opcion)
	{
		// IMPRIMIR LOS NUMEROS DEL 1 AL 10
		case 1:
			a=1;
			limite=11;
			cout<< "la lista de numeros es:\n\n";
	    	while (a<limite)
	    	{
	    	suma=suma+1;
	 		cout<<suma<<endl;
	 		a++;
	    	}
	    	break;
		
		    // SUMAR LOS NUMEROS DEL 1 AL 100
		    case 2:
		    	x=1;
		    	limite_2=101;
		    	while (x<limite_2)
		    	{
				suma_2=suma_2+x;
				x++;
		    	}
		    	cout<< "la suma de los numeros es "<<suma_2<<endl;
		     	break;
			
			    // SUMAR LOS NUMEROS PARES DEL 1 AL 50
		    	case 3:
		    		y=2;
		    		limite_3=51;
		 		    while (y<limite_3)
		 		    {
		 		    	suma_3=suma_3+y;
		 		    	y=y+2;
					}
					cout<< "la suma de los numeros es "<<suma_3<<endl;
					break;
					
					//SUMAR LOS NUMEROS IMPARES DEL 1 AL 50
					case 4:
		 		        z=1;
		 		        limite_4=50;
		 		        while (z<limite_4)
		 		        {
		 		    	suma_4=suma_4+z;
		 		    	z=z+2;
				     	}
					    cout<< "la suma de los numeros es "<<suma_4<<endl;
					    break;
					    
					    default:
					    	cout<< "opcion no valida";
					    	break;
					    }
					    break;
					    system("CLS");

			case 2:
	     	cout<< "MENU CICLO FOR\n\n";
	     	cout<< "opcion 1: imprimir los numeros el 1 al 100\n";
	     	cout<< "opcion 2 imprimir las tablas de multiplicar de 1 al 20\n";
	     	cout<< "opcion 3 solucionar el factorial de un numero\n";
	     	cout<< "opcion 4 solucionar el numero de fibonacci\n";
	     	cout<< "opcion 5 ingrese 5 numeros para ser almacenados y mostrados en un array\n\n";
	     	cout<< "ELIJA UNA OPCION\n";
	     	cin>> opcion_2;
	     	system("cls");
	     	
	     		     	// OPCIONES DEL CICLO FOR
	     	switch (opcion_2)
	     	{
	     		// IMPRIMIR LOS NUMEROS DEL 1 AL 100
	     		case 1:
	     			cout<<"la lista de numeros es:\n";
	     			for (i=1;i<101;i++)
	     			{
	     				cout<<i<<endl;
					}
					break;
					
					// IMPRIMIR LAS TABLAS DE MULTIPLICAR DEL 1 AL 20
					case 2:
						num=0;
						res=0;
						cout<< "digite el numero del cual quiere mostrar la tabla\n",
						cin>> num;
						for (j=1;j<=20;j++)
						{
						res=num*j;
						cout<< num <<" x "<<j<<" = "<<res<<endl;
						}
						break;
						
						//SOLUCIONAR EL FACTORIAL DE UN NUMERO
						case 3:
							cout<< "ingrese el numero a solucionar\n";
							cin>> num_1;
							factorial=1;
							for(k=1;k<=num_1;k++)
							{
							factorial=factorial*k;
							}
							cout<< "el resultado del factorial es "<<factorial<<endl;
							break;
							
							// SOLUCIONAR EL NUMERO DE FIBONACCI
							case 4:
									cout<< "ingrese el numero de elementos\n";
									cin>>e;
									cout<<"1 ";
									for (int l=1;l<=e;l++){
										d= b+c;
										cout<<d<<" ";
										b=c;
										c=d;
									}
									cout<<"\n";
									break;
									
									//INGRESE 5 NUMEROS PARA SER ALMACENADOS EN UNA ARRAY
									case 5:
											for (m=0;m<5;m++){
											cout<<"escriba el numero para el vector "<<m<<endl;
											cin>>vector[m];
											}
											system("cls");
										    for (n=0;n<5;n++){
	                                    	cout<<"vector "<<n<< " = "<<vector[n]<<endl;
                                        	}
                                        	break;
                                        	
                                        	default:
                                        		cout<< "opcion no valida\n";
                                        		break;
                                        		system("CLS");
			}break;
			
				   	case 3:
	     	    	cout<< "MENU ARRAY'S\n";
	     	    	cout<< "opcion 1: ingrese cuatro numeros en un array y muestrelos\n";
					cout<< "opcion 2: ingrese dos valores y con ellos muestre un arreglo num1 x num2 con ceros y unos\n";
					cout<< "opcion 3: crear un arreglo 4x4 mostrar en la 1a columna los numeros ingresados, en la 2a columna elevado al cuadrado etc\n\n";
					cout<< "ELIJA UNA OPCION\n";
					cin>> opcion_3;
					system("cls");
					
					switch (opcion_3)
					{
					// INGRESE 4 NUMEROS EN UN ARRAY Y MUESTRELOS
					    case 1:
				        	float vector [4];
 				        	int dim;

				        	vector[0]= 32.583;
				        	vector[1]= 11.239;
				        	vector[2]= 45.781;
				        	vector[3]= 22.237;
					    	
					        for(dim=0; dim<=3; dim++){
					        cout<<"vector "<<dim<< " = "<<vector[dim]<<endl;
				        	} 
				        	break;
				        
							
							// ARREGLO NUM1 X NUM 2 CON 0 Y 1
							case 2:{
								int  a=0, p, e;
								cout<<"ingrese el largo de la matriz\n";
								cin>>largo;
								cout<<"ingrese el ancho de la matriz\n";
								cin>>ancho;
								system ("CLS");
								int t [largo][ancho];
								for ( p=0; p<largo; p++){
									cout<<"\n";
									
									for (e=0; e<ancho; e++){
										t [largo] [ancho] =a;
										cout<< t[largo] [ancho];
										
										if (a==0){
										a=1;
										}else{
										a=0;
										}
									}
								}
							}
								break;
								
								// ARREGLO DIMENSION 4X4
								case 3:
									int i,j;
									int matriz [4][4];
									for (i=0; i<4; i++){
										cout<<"ingrese el numero del vector "<<i+1<<endl;
										cin>>matriz [0][i];
									}
									for (i=0; i<4; i++){	
										cout<<"\n";
										for (j=0; j<4; j++){
											if(i==0)
											{
												cout<< matriz [i] [j]<<" " ;
											}
											
											if(i==1)
											{
												matriz [i] [j]= pow(matriz[0][j],2);
                                				cout<< matriz [i] [j]<<" " ;
											}
											
											if(i==2)
                            				{
                                			matriz [i] [j]= pow(matriz[0][j],3) ;
                                			cout<< matriz [i] [j]<<" " ;
                            				}
                            				
                           					 if(i==3)
                           					 {
                             			    matriz [i] [j]= pow(matriz[0][j],4) ;
                              			    cout<< matriz [i] [j]<<" ";
											}
										}
									}
										break;	
										
										default:
										cout<<"\nopcion no valida\n";
										break;
										system ("CLS");
					}break;
										
										
											
}getch();
}while(seleccion>0);
	
	return 0;
}
