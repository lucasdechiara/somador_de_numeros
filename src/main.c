//Lucas Melo De Chiara RA:158164
//EA876-A - 07/03/2018

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
    
    int i, n=0, j, pot=1, indice=0, start_indice, numero=0, contador=0, inteiro, aux, texto_int[20];
    char texto[20];
    float x;
    
    printf("\nDigite o texto: ");
    scanf("%[^\n]s",texto);

    printf("\nO texto digitado foi: %s\n\n",texto); 
    
    while(texto[indice]!='\0'){
      n++;
      indice++;
    }
      
      
    /*
    while(texto[indice]!='\0'){
      
      if(texto[indice]==' '){
	
	start_indice=indice+1;
	
	while(texto[start_indice]!=' '||texto[start_indice]!='!'||texto[start_indice]!='.'||texto[start_indice]!='\0'){
	
	  if(texto[start_indice]=='0'||texto[start_indice]=='1'||texto[start_indice]=='2'||texto[start_indice]=='3'||texto[start_indice]=='4'||texto[start_indice]=='5'||texto[start_indice]=='6'||texto[start_indice]=='7'||texto[start_indice]=='8'||texto[start_indice]=='9'){
	    
	    texto_int[start_indice]=texto[start_indice]-48;
		    
	  }
	  
	start_indice=start_indice+1;
	contador++;
	
	}
	
      indice++;
	
      }
      
      
    }
    
    indice=0;
    
    */
    
    for(i=0;i<=(n-1);i++){
      
      //aux=texto[i]-48;
      
      if((n-2-i)>0){
	j=n-1-i;
	while(j!=0){
	  pot=pot*10;
	  j--;
	}
      }
      
     if((n-1-i)==0){
	pot=1;
     }
      
     // numero=numero+(aux*pot);
      
      printf("\nNumero digitado foi: %d\n\n",pot); 
      
    }
    
    //printf("\nNumero digitado foi: %d\n\n",numero); 

      
	      
}
    
