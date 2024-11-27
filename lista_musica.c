#include <stdio.h>

int main(){
int opcao = 0;
char play = '\0';
int playlist = 0;
int musica_fav = '\0';
int album = 0;
char adicionar = '\0';
char nickname[40] = "\0";

char musica1[10] = "Rooster";
char musica2[25] = "Man in the Box";
char musica3[20] = "So Far Away";
char musica4[15] = "Nutshell";
char musica5[10] = "Black";
char musica6[20] = "Yellow Ledbetter";
char musica7[10] = "Snuff";
char musica8[10] = "Duality";
char musica9[20] = "Smooth Operator";
char musica10[30] = "Fazers";
char musica11[15] = "Lilas";
do{

    printf("====================================================\n");
    printf("  Bem vindo ao seu aplicativo de musicas ! \n");
    printf("==================================================== \n");
    printf("    \tPRIMEIRO DIGITE SEU NOME !! \n");
    printf("==================================================== \n\n");
    printf(" 1 = INSERIR SEU NOME\n");
    printf(" 2 = SELECIONAR SEU ALBUM PREFERIDO\n");
    printf(" 3 = SELECIONAR SUA MUSICA PREFERIDA\n");
    printf(" 4 = LISTAR TODOS OS ARTISTAS\n");
    printf(" 5 = LISTAR TODOS OS ALBUNS\n");
    printf(" 6 = LISTAR TODAS AS MUSICAS\n");
    printf(" 7 = Adicionar musica\n");
    printf(" 8 = Tocar musica\n");
    printf(" 0 = Sair\n");
    printf("Selecione a opcao desejada => \n\n");
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch(opcao){

        case 1:{
            printf("Digite seu nome: \n");
            scanf("%s", nickname);
            printf("Seu nome eh '%s' !! \n", nickname);
            break;
            }
        case 2:{
            do{
            printf("AQUI ESTAO TODOS OS ALBUNS PARA SELECIONAR O SEU PREFERIDO: \n");
            printf(" 1 => Dirt \n");
            printf(" 2 => Jar of Flies \n");
            printf(" 3 => Facelit \n");
            printf(" 4 => Ten \n");
            printf(" 5 => Jeremy \n");
            printf(" 6 => The Diamond Life \n");
            printf(" 7 => Nightmare \n");
            printf(" 8 => Take me To Your Leader \n");
            printf(" 9 => Vol.3 : The Subliminal Verses \n");
            printf(" 10 => All Hope is Gone \n");
            printf(" 11 => Lilas\n");
            printf(" 0 => Voltar ao Menu Anterior \n");
            printf(" Selecione seu album preferido \n");
            scanf("%i", &album);
            while(getchar() != '\n');
            
            if(album == 1){
                    printf("\n\n O album 'Dirt' eh o preferido do %s !!\n\n", nickname);
            } else if(album == 2){
                printf("\n\nO album 'Jar of Flies' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 3){
                printf("\n\nO album 'Facelit' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 4){
                printf("\n\nO album 'Ten' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 5){
                printf("\n\nO album 'Jeremy' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 6){
                printf("\n\nO album 'The Diamond Life' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 7){
                printf("\n\nO album 'Nightmare' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 8){
                printf("\n\nO album 'Take me To Your Leader' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 9){
                printf("\n\nO album 'Vol.3 : The Subliminal Verses' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 10){
                printf("\n\nO album 'All Hope is Gone' eh o preferido do %s !! \n\n", nickname);
            } else if(album == 11){
                printf("\n\nO album 'Lilas' eh o preferido do %s !! \n\n", nickname);
            } else { 
                printf("\n\nDigito Invalido. Tente Novamente ! \n");
            }
            } while (album < 1 && album > 11);
            break;
        }
        case 3:{
             do{
             printf("AQUI ESTAO TODAS AS MUSICAS PARA SELECIONAR SUA PREFERIDA:\n\n");
             printf(" 1 => %s \n", musica1); 
             printf(" 2 => %s \n", musica2); 
             printf(" 3 => %s \n", musica3);
             printf(" 4 => %s \n", musica4);
             printf(" 5 => %s \n", musica5);
             printf(" 6 => %s \n", musica6);
             printf(" 7 => %s \n", musica7); 
             printf(" 8 => %s \n", musica8); 
             printf(" 9 => %s \n", musica9); 
             printf(" 10 => %s \n", musica10); 
             printf(" 11 => %s \n", musica11);
             printf(" Selecione sua musica preferida \n");
             scanf("%i", &musica_fav);
             while(getchar() != '\n');

             if(musica_fav == 1){
                printf("\n\nA musica '%s' eh a facorita do %s  !! \n\n", musica1, nickname);
             } else if(musica_fav == 2){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica2, nickname);
             } else if(musica_fav == 3){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica3, nickname);
             } else if(musica_fav == 4){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica4, nickname);
             } else if(musica_fav == 5){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica5, nickname);
             } else if(musica_fav == 6){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica6, nickname);
             }else if(musica_fav == 7){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica7, nickname);
             }else if(musica_fav == 8){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica8, nickname);
             }else if(musica_fav == 9){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica9, nickname);
             }else if(musica_fav == 10){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica10, nickname);
             }else if(musica_fav == 11){
                printf("\n\nA musica '%s' eh a preferida do %s !! \n\n", musica11, nickname);
             }else {
                printf("Digito Invalido. tente Novamente !! \n");
             }
             }while(musica_fav < 1 && musica_fav > 11);
            break;
        }

        case 4:{
            printf("+++++++++++++++++++++++\n");
            printf("  > Alice in Chains < \n");
            printf("  > Pearl Jam < \n");
            printf("  > Sade < \n");
            printf("  > Avenged Sevenfold < \n");
            printf("  > King Geedorah < \n");
            printf("  > Slipknot < \n");
            printf("  > Djavan < \n");
            printf("+++++++++++++++++++++++\n");
            break;
        }
        case 5:{
            do {
            printf("AQUI ESTAO TODOS OS ALBUNS: \n");
            printf(" 1 => Dirt \n");
            printf(" 2 => Jar of Flies \n");
            printf(" 3 => Facelit \n");
            printf(" 4 => Ten \n");
            printf(" 5 => Jeremy \n");
            printf(" 6 => The Diamond Life \n");
            printf(" 7 => Nightmare \n");
            printf(" 8 => Take me To Your Leader \n");
            printf(" 9 => Vol.3 : The Subliminal Verses \n");
            printf(" 10 => All Hope is Gone \n");
            printf(" 11 => Lilas \n");
            printf(" 0 => Voltar ao Menu Anterior \n");
            printf(" Selecione seu album para consultar as faixas \n");
            scanf("%i", &album);
             
            
            while (getchar() != '\n');
                if(album == 1){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica1);
                } else if(album == 2){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica4); 
                } else if(album == 3){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica2);
                } else if (album == 4){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica5);
                } else if (album == 5){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica6);
                } else if(album == 6){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica9);
                } else if (album == 7){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica3);
                } else if (album == 8){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica10);
                } else if (album == 9){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica8);       
                } else if (album == 10){
                    printf("\n\nA faixa desse album eh '%s' \n\n", musica7);
                } else {
                    printf("Digito invalido. Tente Novamente! \n");
                }
            } while (album != 0);
                  break;
        }
        case 6:{
             printf("Aqui estao todas as musicas:\n\n");
             printf(" => %s \n", musica1); 
             printf(" => %s \n", musica2); 
             printf(" => %s \n", musica3);
             printf(" => %s \n", musica4);
             printf(" => %s \n", musica5);
             printf(" => %s \n", musica6);
             printf(" => %s \n", musica7); 
             printf(" => %s \n", musica8); 
             printf(" => %s \n", musica9); 
             printf(" => %s \n", musica10); 
             printf(" => %s \n", musica11); 
             break;
        }
        case 7: {
        printf("\tMusicas Para Adicionar: \n");
        printf("=====================\n");
        printf("a = Rooster: \n");
        printf("b = Man in the Box \n");
        printf("c = So Far Away \n");
        printf("d = Nutshell\n");
        printf("e = Black \n");
        printf("f = Yellow Ledbetter \n");
        printf("g = Snuff \n");
        printf("h = Duality \n");
        printf("i = Fazers\n");
        printf("j = Smooth Operator\n");
        printf("k = Lilas\n");
        printf("Selecione a musica que voce quer adicionar: \n");
        scanf("%c", &adicionar);
        while(getchar() != '\n' && 'a' && 'b' && 'c' && 'd' && 'e' && 'f' && 'g' && 'h' && 'i' && 'j' && 'z' && 'k');
        
        if(adicionar == 'a'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica1);
                } else if(adicionar == 'b'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica2); 
                } else if(adicionar == 'c'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica3);
                } else if (adicionar == 'd'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica4);
                } else if (adicionar == 'e'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica5);
                } else if(adicionar == 'f'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica6);
                } else if (adicionar == 'g'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica7);
                } else if (adicionar == 'h'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica8);
                } else if (adicionar == 'i'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica10);      
                } else if (adicionar == 'j'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica9);
                } else if (adicionar == 'k'){
                    printf("\n\nA faixa '%s' foi adicionada \n\n", musica11); 
                } else {
                    printf("Digito invalido. Tente Novamente! \n");
                }
                  break;

        
        }
        
        case 8: {
        do {
        printf("\tMusicas: \n");
        printf("=====================\n");
        printf("a = Rooster: \n");
        printf("b = Man in the Box \n");
        printf("c = So Far Away \n");
        printf("d = Nutshell\n");
        printf("e = Black \n");
        printf("f = Yellow Ledbetter \n");
        printf("g = Snuff \n");
        printf("h = Duality \n");
        printf("i = Smooth Operator\n");
        printf("j = Fazers\n");
        printf("k = Lilas\n");
        printf("z = Voltar ao menu anterior \n");
        printf("Selecione a musica: \n");
        scanf("%c", &play);
        while(getchar() != '\n' && 'a' && 'b' && 'c' && 'd' && 'e' && 'f' && 'g' && 'h' && 'i' && 'j' && 'z' && 'k');
                if(play == 'a'){
                        printf("\nTocando %s \n", musica1);
                        if(printf("Tocando %s \n", musica1)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if(play == 'b'){
                        printf("\nTocando %s \n", musica2);
                        if(printf("Tocando %s \n", musica2)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if(play == 'c'){
                        printf("\nTocando %s \n", musica3);
                        if(printf("Tocando %s \n", musica3)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if(play == 'd'){
                        printf("\nTocando %s \n", musica4);
                        if(printf("Tocando %s \n", musica4)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if (play == 'e'){
                        printf("\nTocando %s \n", musica5);
                        if(printf("Tocando %s \n", musica5)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if(play == 'f'){
                        printf("\nTocando %s \n", musica6);
                        if(printf("Tocando %s \n", musica6)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if(play == 'g'){
                        printf("\nTocando %s \n", musica7);
                        if(printf("Tocando %s \n", musica7)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if (play == 'h'){
                        printf("\nTocando %s \n", musica8);
                        if(printf("Tocando %s \n", musica8)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if (play == 'i'){
                        printf("\nTocando %s \n", musica9);
                        if(printf("Tocando %s \n", musica9)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                } else if (play == 'j'){
                        printf("\nTocando %s \n", musica10);
                        if(printf("Tocando %s \n", musica10)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        }
                }else if (play == 'k'){
                        printf("\nTocando %s \n", musica11);
                        if(printf("Tocando %s \n", musica11)){
                            printf("Aperte Enter para pausar... \n");
                            getchar();
                        
                } else {
                        printf("Digito invalido\n");
        } 
        } 
        break;
        } while (play != 'z');
        
        case 0: printf("Ate logo !\n\n"); break;
        default: printf("Opcao invalida, tente novamente !\n");
    }
    
} 
    
    
}while (opcao != 0);

    return 0;
}
