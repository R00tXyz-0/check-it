#include <stdio.h>

struct Matrice{
    int T[100][100];
    int T2[100][100];
    int R[100][100];
};

struct Var{
    int x;
    int y;
};

struct Matrice M;
struct Var V;

int SommeD(int l, int c){
    int i,j,s=0;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&M.T[i][j]);
        }
    }
    for(i=0;i<l && i<c;i++){
        s += M.T[i][i];
    }
    return s;
}

void SommeM(int l, int c){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&M.T[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&M.T2[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            M.R[i][j] = M.T[i][j] + M.T2[i][j];
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ",M.R[i][j]);
        }
        printf("\n");
    }
}

void SoustractionM(int l, int c){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&M.T[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&M.T2[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            M.R[i][j] = M.T[i][j] - M.T2[i][j];
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ",M.R[i][j]);
        }
        printf("\n");
    }
}

void Transpose(int l, int c){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&M.T[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            printf("%d ",M.T[j][i]);
        }
        printf("\n");
    }
}

int Determinant(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    return a*d - b*c;
}

int main(){
    int l,c,choix;
    scanf("%d",&l);
    scanf("%d",&c);

    scanf("%d",&choix);

    switch(choix){
        case 1:
            printf("%d",SommeD(l,c));
            break;
        case 2:
            SommeM(l,c);
            break;
        case 3:
            SoustractionM(l,c);
            break;
        case 4:
            Transpose(l,c);
            break;
        case 5:
            printf("%d",Determinant());
            break;
    }
    return 0;
}
