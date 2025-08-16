#include <stdio.h>
//funçãp que exibe o tabuleiro
void oceanoView(char *oceano[10][10]){
    printf("Batalha NAVAL\n");
    printf("OBS:Coordenada do mapa vão de eixo x(0-9) e eixo y(0-9)\n");
      for(int i = 0; i <= 9; i++){
        for(int v = 0; v <= 9; v++){
           if(v%10 == 0){
            printf("\n");
           }
            printf("%s", oceano[i][v]);
        }
    }
}

int main(){
//cria tabuleiro "oceano"
    char * oceano[10][10] = {
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "},
        {" 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "," 0 "}
    };

    //adiciona 2 navios vertical e horizontal
    int codx, cody;
    codx = 2;
    cody = 5;
    oceano[codx][cody] = " 3 ";
    oceano[codx+1][cody] = " 3 ";
    oceano[codx+2][cody] = " 3 ";

    codx = 5;
    cody = 6;
    oceano[codx][cody] = " 3 ";
    oceano[codx][cody+1] = " 3 ";
    oceano[codx][cody+2] = " 3 ";

    //adiciona 2 navios na diagonal
    
    codx = 3;
    cody = 4;
    oceano[codx][cody] = " 3 ";
    oceano[codx-1][cody-1] = " 3 ";
    oceano[codx-2][cody-2] = " 3 ";

   //exibe tabuleiro inicial 
   oceanoView(oceano);
            printf("\n");
            printf("\n");
    
//fomulario interativo para usuario posicioanr o navio onde quer 
int x, y, posicao;
    printf("Digite coordenadas x, y e posição (horizontal'1', vertical'2', diagonal primaria'3', diagonal secundaria'4') para posicionar um navio:\n");
    printf("Position 1, 2, 3, 4: \n");
    scanf("%d", &posicao);
    printf("Coordenadas x: \n");
    scanf("%d", &y);
    printf("Coordenadas y: \n");
    scanf("%d", &x);

if(x>=0 && x<=9 && y>=0 && y<=9){
         switch (posicao)  {
        case 1:
            if(oceano[x][y] == " 0 " && oceano[x][y+1] == " 0 "&&oceano[x][y+2] == " 0 "){
                oceano[x][y] = " 3 ";
                oceano[x][y+1] = " 3 ";
                oceano[x][y+2] = " 3 ";
                printf("Návio posicionado!\n");
                //exibe tabuleiro modificado com o navio posicionado nas coordenadas escolhidas 
                oceanoView(oceano);
            } else{
                //caso ja tenha um navio na posiçao desejada
                printf("Posições já ocupadas!\n");
            }
        break;
        case 2:
    if(oceano[x][y] == " 0 " && oceano[x+1][y] == " 0 "&&oceano[x+2][y] == " 0 "){
                oceano[x][y] = " 3 ";
                oceano[x+1][y] = " 3 ";
                oceano[x+2][y] = " 3 ";
                printf("Návio posicionado!\n");  
                 //exibe tabuleiro modificado com o navio posicionado nas coordenadas escolhidas 
                oceanoView(oceano);
            } else{
                //caso ja tenha um navio na posiçao desejada
                printf("Posições já ocupadas!\n");
            }
        break;
        case 3:
            if(oceano[x][y] == " 0 " && oceano[x-1][y-1] == " 0 "&&oceano[x-2][y-2] == " 0 "){
                oceano[x][y] = " 3 ";
                oceano[x-1][y-1] = " 3 ";
                oceano[x-2][y-2] = " 3 ";
                printf("Návio posicionado!\n");
                //exibe tabuleiro modificado com o navio posicionado nas coordenadas escolhidas 
                oceanoView(oceano);
            } else{
                //caso ja tenha um navio na posiçao desejada
                printf("Posições já ocupadas!\n");
            }
        break;
        case 4:
            if(oceano[x][y] == " 0 " && oceano[x-1][y+1] == " 0 "&& oceano[x-2][y+2] == " 0 "){
                oceano[x][y] = " 3 ";
                oceano[x-1][y+1] = " 3 ";
                oceano[x-2][y+2] = " 3 ";
                printf("Návio posicionado!\n");
                //exibe tabuleiro modificado com o navio posicionado nas coordenadas escolhidas 
                oceanoView(oceano);
            } else{
                //caso ja tenha um navio na posiçao desejada
                printf("Posições já ocupadas!\n");
            }
        break;
        default:
          //caso a posição nao seja nem horizontal-1 ou vertical-2
   printf("Posição inválida!\n");
   }
    } else{
        //caso a coordenada enviada esteja fora da dimeção do tabuleiro
        printf("Coordenadas Inválidas!\n");
    }
    return 0;
}