#include <Arquivo.h>

void geraArquivo(string nome, int tam)
{
    FILE *arq;    
    if( (arq = fopen(nome, "w")) == NULL ){
        cout << "Erro na criação do arquivo..." << endl;
        fclose(arq);
        return 0;
    }
    
    // initialize random seed
    srand (time(NULL));
    
    int i = 0;
    int n1, n2;
    
    cout << "gerando arquivo..." << endl;
    while(i < tam){
        n1 = rand()%23 + 1;
        n2 = (n1 + 1 + (rand()%(24-n1)) ) + 1;
        
        if(!fprintf(arq, "%d %d\n", n1, n2)){
            cout << "Escrita no arquivo falhou na posição " << i << endl;
            fclose(arq);
            return 0;
        }                                          
    }
    cout << "arquivo gerado com sucesso!" << endl;
    
    fclose(arq);
}

void carregaArquivo(string nome, Cluster &c)
{
    FILE *arq;    
    if( (arq = fopen(nome, "r")) == NULL ){
        cout << "Erro na abertura do arquivo..." << endl;
        fclose(arq);
        return 0;
    }
    
    int n1, n2;
    
    while( fscanf(arq, "%d %d", &n1, &n2) != EOF){ // verificar
        cout << n1 << " " << n2 << endl;
        c.push(n1, n2);
    }
}
