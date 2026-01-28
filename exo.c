#include <stdio.h>
int main(){
int M,N,s=0,cpt=0,i,cpt2=0,s2=0;
float moy;
do{
    printf("entrez le nombre d'entier\n");
    scanf("%d",&N);
    if(N<0){
        put("erreur:l entier doit etre positif");
    }
}while(N<0);
for(i=0;i<N;i++){
        do{
    puts("veuillez saisir un entier positif\n");
    scanf("%d",&M);
}while(M<0);
if(M%2==0){
    cpt++;
    s+=M;
}
}
moy=(float)(s/cpt);
prinf("la moyenne est:%.2f",moy);
return 0;
if(M%2!=0){
        cpt2++;
}
if(M<0){
    s2+=M;
}
printf("le nombre d'entier impaire est %d ",cpt2);
printf("la somme des nombres %d",s2);

}

