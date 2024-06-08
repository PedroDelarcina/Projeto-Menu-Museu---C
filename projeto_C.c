#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Pessoa {
    char nome[50];
    int idade;
    char email[50];
};

struct Pessoa pessoas[100];
int numPessoas = 0;

typedef struct {
    int id;
    char tipo[20];
    float valor;
    int quantidade;

} Ingresso;

// Definindo os valores dos ingressos
#define VALOR_MEIA 10.0
#define VALOR_INTEIRA 20.0
#define VALOR_GRATUITO 0.0



void cadastrarPessoa() {
    printf("\n\t\t\t\t\t\t\t\t\t CADASTRO DE PESSOAS\n");
    printf("Digite o nome: ");
    scanf("%s", pessoas[numPessoas].nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoas[numPessoas].idade);

    printf("Digite o email: ");
    scanf("%s", pessoas[numPessoas].email);

    numPessoas++;
    printf("\nCadastro realizado com sucesso!\n");
    system("pause");
}

void salvarCompra(Ingresso compra) {
    FILE *arquivo;
    arquivo = fopen("compras.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%d %s %.2f %d\n", compra.id, compra.tipo, compra.valor, compra.quantidade);
    fclose(arquivo);
}

void comprarIngresso() {
    Ingresso compra;

    printf("\n\t\t\t\t\t\t\t\t\t COMPRA DE INGRESSOS\n");

    // Exibir valores dos ingressos
    printf("Valores dos ingressos:\n");
    printf("Meia: R$%.2f\n", VALOR_MEIA);
    printf("Inteira: R$%.2f\n", VALOR_INTEIRA);
    printf("Gratuito: R$%.2f\n", VALOR_GRATUITO);

    // Solicitar o tipo de ingresso
    printf("Digite o tipo de ingresso desejado (meia, inteira ou gratuito): ");
    scanf("%s", compra.tipo);

    // Definir valor de acordo com o tipo escolhido
    if (strcmp(compra.tipo, "meia") == 0) {
        compra.valor = VALOR_MEIA;
    } else if (strcmp(compra.tipo, "inteira") == 0) {
        compra.valor = VALOR_INTEIRA;
    } else if (strcmp(compra.tipo, "gratuito") == 0) {
        compra.valor = VALOR_GRATUITO;
    } else {
        printf("Tipo de ingresso inv�lido!\n");
        return;
    }

    // Solicitar quantidade de ingressos
    printf("Digite a quantidade de ingressos desejada: ");
    scanf("%d", &compra.quantidade);

    // Calcular e exibir o total gasto
    float totalGasto = compra.valor * compra.quantidade;
    printf("Total gasto: R$%.2f\n", totalGasto);

    // Salvar a compra
    salvarCompra(compra);

    printf("Compra(s) salva(s) com sucesso!\n");
    system("pause");
}

void exibirMenu() {
    int opcaoMenu;

    do {
        system("cls");

        printf("\t\t\t\t\t\t\t*****************************************************\n");
        printf("\t\t\t\t\t\t\t*          0- Sair                                   *\n");
        printf("\t\t\t\t\t\t\t*          5- Comprar Ingresso                       *\n");
        printf("\t\t\t\t\t\t\t*****************************************************\n");
        printf("\n\t\t\t\t\t\t\tEntre com a opcao desejada: ");

        scanf("%d", &opcaoMenu);

        switch (opcaoMenu) {
            case 0:
                printf("\nSaindo...\n");
                system("pause");
                break;

            case 5:
                comprarIngresso();
                break;

            default:
                printf("\nResposta Invalida!!!\n");
                system("pause");
                break;
        }
    } while (opcaoMenu != 0);
}




int main()
{

 setlocale(LC_ALL, "Portuguese");
    int opcaoMenu;

     cadastrarPessoa();
   exibirMenu();
    do
    {
        system("cls");

printf("\t\t\t\t\t\t\t*****************************************************\n");
printf("\t\t\t\t\t\t\t*****************************************************\n");
printf("\t\t\t\t\t\t\t*****************************************************\n");
printf("\t\t\t\t\t\t\t*                                                   *\n");
printf("\t\t\t\t\t\t\t** *- - - - - -MUSEU DAS ARTES DO PIM- - - - - - ** *\n");
printf("\t\t\t\t\t\t\t*                                                   *\n");
printf("\t\t\t\t\t\t\t*****************************************************\n");
printf("\t\t\t\t\t\t\t*****************************************************\n");
printf("\t\t\t\t\t\t\t*****************************************************\n");

printf("\t\t\t\t\t\t\t*****************************************************\n");
printf("\t\t\t\t\t\t\t*   0- Sair do menu                                 *\n");
printf("\t\t\t\t\t\t\t*                                                   *\n");
printf("\t\t\t\t\t\t\t*   1- 150 ANOS SANTOS DUMONT                       *\n");
printf("\t\t\t\t\t\t\t*                                                   *\n");
printf("\t\t\t\t\t\t\t*   2- OLIMPIADAS NA FRANCA                         *\n");
printf("\t\t\t\t\t\t\t*                                                   *\n");
printf("\t\t\t\t\t\t\t*   3- 100 ANOS DA ARTE MODERNA                     *\n");
printf("\t\t\t\t\t\t\t*                                                   *\n");
printf("\t\t\t\t\t\t\t*   4- SEGUNDA GUERRA MUNDIAL                       *\n");
printf("\t\t\t\t\t\t\t*                                                   *\n");
printf("\t\t\t\t\t\t\t*****************************************************\n");
printf("\n\t\t\t\t\t\t\tEntre com a opcao desejada: ");

        scanf("%d", &opcaoMenu);

        switch (opcaoMenu)
        {
        case 0:
            printf("\nSaindo...\n");
            system("pause");
            break;

        case 1:
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t\t 150 ANOS SANTOS DUMONT\n");
            printf(
        "\n\n\tAlberto Santos Dumont foi um importante inventor, engenheiro e aviador brasileiro,\n"
    "\tnascido em 20 de julho de 1873 em Cabangu, Minas Gerais, e falecido em 23 de\n"
    "\tjulho de 1932 em Guaruj�, S�o Paulo. Ele � conhecido por suas contribui��es\n"
    "\tsignificativas para o desenvolvimento da avia��o. Aqui est�o algumas\n"
    "\tcuriosidades e aspectos importantes de sua vida e carreira:\n\n"

    "\tPioneirismo na Avia��o: Santos Dumont � mundialmente reconhecido como o \"Pai da Avia��o\". \n"
    "\tEle foi o primeiro a decolar, voar e aterrissar uma aeronave com um motor a bordo,\n "
    "\tperante uma comiss�o de testemunhas, o que ocorreu em 14-Bis em Paris, Fran�a, em \n"
    "\t23 de outubro de 1906.\n\n"
    "\tO 14-Bis: Este foi o avi�o que Santos Dumont utilizou para realizar seu famoso voo. \n"
    "\tEle foi projetado e constru�do pelo pr�prio Santos Dumont. O nome \"14-Bis\" refere-se \n"
    "\tao fato de que era a 14� aeronave projetada pelo inventor.\n\n"
    "\tVoo do Dirig�vel n� 6: Antes do 14-Bis, Santos Dumont j� havia conquistado a Ta�a Deutsch em 1901, \n"
    "\tao contornar a Torre Eiffel com seu dirig�vel n� 6, demonstrando a capacidade de controle direcional \n"
    "\tde uma aeronave.\n\n"
    "\tContribui��es para a Avia��o: Al�m do 14-Bis, Santos Dumont tamb�m construiu e voou em diversos outros \n"
    "\tmodelos de aeronaves, incluindo o Demoiselle, que foi uma das primeiras aeronaves de produ��o em massa do mundo.\n\n"

    "\tCidadania Francesa: Santos Dumont obteve a cidadania francesa em 1901, em grande parte devido �s suas\n "
    "\tconquistas na avia��o e ao fato de que a Fran�a era um dos centros da inova��o aeron�utica na �poca.\n\n"

    "\tVoo no Campo de Bagatelle: O famoso voo do 14-Bis aconteceu no campo de Bagatelle, em Paris, diante de uma\n "
    "\tmultid�o de testemunhas e jornalistas. Esse evento marcou um marco na hist�ria da avia��o.\n\n"

    "\tPr�mio Deutsch de la Meurthe: Em 1901, Santos Dumont ganhou esse pr�mio por ser o primeiro a contornar a \n"
    "\tTorre Eiffel em um dirig�vel. O pr�mio era uma quantia significativa, o que ele doou para o desenvolvimento da avia��o.\n\n"

    "\tPreocupa��o com o Uso Pac�fico da Avia��o: Santos Dumont era um defensor fervoroso do uso pac�fico da avia��o.\n "
    "\tEle ficou desiludido com o desenvolvimento militar da avia��o e recusou-se a continuar a trabalhar em projetos b�licos.\n\n"

    "\tFim da Carreira: Ap�s uma s�rie de insucessos com suas �ltimas aeronaves e sofrendo de esclerose m�ltipla, Santos Dumont \n"
    "\t entrou em depress�o. Em 1932, ele cometeu suic�dio no Guaruj�, S�o Paulo.\n\n\n\n\n\n"
    );




            system("pause");
            break;


        case 2:
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t\tOLIMPIADAS NA FRANCA\n");
             printf(
        "\n\n\tDura��o Prolongada: As Olimp�adas de 1900 tiveram uma dura��o muito incomum, ocorrendo ao longo de quase cinco meses, \n"
        "\tde 14 de maio a 28 de outubro. Isso se deveu ao fato de que os eventos esportivos estavam integrados � Exposi��o Universal \n"
        "\te eram distribu�dos ao longo de todo esse per�odo.\n\n"

        "\tVariedade de Modalidades: Houve uma grande variedade de esportes e modalidades apresentadas nos Jogos de 1900. Al�m dos esportes \n"
        "\ttradicionais, como atletismo, ciclismo e gin�stica, houve competi��es mais incomuns, como cr�quete, polo aqu�tico, croquet, \n"
        "\te at� mesmo corrida de bal�es.\n\n"

        "\tPresen�a de Mulheres: Pela primeira vez na hist�ria ol�mpica, mulheres puderam competir. As atletas participaram de eventos \n"
        "\tcomo t�nis e golfe. Margaret Abbott, dos Estados Unidos, � frequentemente citada como a primeira mulher a ganhar um evento \n"
        "\tol�mpico (golfe individual), sem saber que estava participando de uma Olimp�ada.\n\n"

        "\tCompetidores Pouco Preparados: Devido � natureza inesperada e prolongada dos Jogos, muitos atletas n�o estavam devidamente \n"
        "\tpreparados. Alguns chegaram em Paris por acaso, estavam na cidade por outros motivos e decidiram competir.\n\n"

        "\tParticipa��o Reduzida: O n�mero de atletas e na��es participantes foi muito menor em compara��o com os Jogos modernos. Apenas \n"
        "\tcerca de 1.000 atletas de 24 pa�ses competiram, em compara��o com os milhares de atletas de centenas de pa�ses nos Jogos mais recentes.\n\n"

        "\tPouca Aten��o � Competi��o: Devido � falta de organiza��o e divulga��o, os Jogos de 1900 foram ofuscados pela Exposi��o Universal, \n"
        "\te muitos atletas n�o estavam cientes de que estavam participando de uma Olimp�ada.\n\n"

        "\tDesconhecimento da Vit�ria: Muitos vencedores dos eventos n�o sabiam que haviam ganhado uma medalha ol�mpica, e os pr�mios eram \n"
        "\tfrequentemente medalhas de prata ou trof�us.\n\n"

        "\tMedalhas Curiosas: As medalhas distribu�das nos Jogos de 1900 eram muito diferentes das usadas hoje em dia. Eram medalhas redondas,\n "
        "\tcom um design art�stico que variava para cada evento esportivo.\n\n"

        "\tLegado Ol�mpico: Apesar de sua natureza ca�tica e pouco organizada, os Jogos de 1900 foram um marco importante na hist�ria ol�mpica. \n"
        "\tEles ajudaram a estabelecer as bases para o desenvolvimento e a evolu��o dos Jogos Ol�mpicos modernos.\n\n\n\n\n\n"
    );

            system("pause");

        case 3:
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t\t 100 ANOS DA ARTE MODERNA\n");
    printf("\n"
       "                                                             \n"
       "\t\t\t\tA Semana de Arte Moderna aconteceu em fevereiro de 1922,     \n"
       "\t\t\t\tna cidade de S�o Paulo, 100 anos ap�s a Independ�ncia do     \n"
       "\t\t\t\tBrasil, 34 anos ap�s a aboli��o da escravid�o e 4 anos ap�s  \n"
       "\t\t\t\to fim da Primeira Guerra Mundial. Nesse contexto, uma        \n"
       "\t\t\t\tquest�o importante para os considerados intelectuais         \n"
       "\t\t\t\tbrasileiros era como o Brasil tinha se sa�do desses        \n"
       "\t\t\t\tprocessos hist�ricos, principalmente comparando o pa�s com  \n"
       "\t\t\t\tos Estados Unidos da Am�rica, que sa�ram da Primeira Guerra \n"
       "\t\t\t\tMundial como uma grande pot�ncia. Al�m disso, as quest�es   \n"
       "\t\t\t\tsociais, principalmente a aboli��o da escravid�o, recebiam  \n"
       "\t\t\t\tpouco destaque nos trabalhos art�sticos. Assim, a Semana de  \n"
       "\t\t\t\tArte Moderna se apoiava no pensamento nacionalista e na    \n"
       "\t\t\t\tbusca de uma identidade para o Brasil, al�m da procura por  \n"
       "\t\t\t\tuma produ��o art�stica mais liberta, que rompesse com uma   \n"
       "\t\t\t\test�tica das academias de Belas Artes e das ideias          \n"
       "\t\t\t\tparnasianistas. As ideias parnasianistas tratavam da arte    \n"
       "\t\t\t\tpela arte, privilegiavam a busca pela perfei��o e           \n"
       "\t\t\t\tdemonstravam pouca preocupa��o com os sentimentos humanos   \n"
       "\t\t\t\te os contextos sociais.                                    \n"
       "                                                              \n"
       "                                                              \n"
       "\t\t\t\tA Semana de Arte Moderna teve muitos envolvidos, como      \n"
       "\t\t\t\tAnita Malfatti, Di Cavalcanti, Ferrignac (In�cio da Costa  \n"
       "\t\t\t\tFerreira), Zina Aita, M�rio de Andrade, Martins Ribeiro,    \n"
       "\t\t\t\tOswaldo Goeldi, Regina Graz, Oswald de Andrade, entre      \n"
       "\t\t\t\toutros artistas e intelectuais majoritariamente paulistas. \n"
       "\t\t\t\tO evento se tornou um dos marcos da cena cultural         \n"
       "\t\t\t\tbrasileira anos depois do seu acontecimento. Apesar de o    \n"
       "\t\t\t\tevento ter sido pensado para acontecer durante uma semana   \n"
       "\t\t\t\tcompleta, de 11 a 18 de fevereiro, na verdade a Semana de  \n"
       "\t\t\t\tArte Moderna s� esteve aberta ao p�blico durante os dias   \n"
       "\t\t\t\t13, 15 e 17, respectivamente segunda, quarta e sexta, de    \n"
       "\t\t\t\tfevereiro de 1922, com programa��o tem�tica que passava     \n"
       "\t\t\t\tpelas artes visuais, literatura e m�sica. Vale ressaltar,   \n"
       "\t\t\t\tque os trabalhos expostos na Semana n�o tiveram uma        \n"
       "\t\t\t\trecep��o positiva pelos intelectuais conservadores de S�o   \n"
       "\t\t\t\tPaulo, pelo fato de romperem com as tradi��es art�sticas   \n"
       "\t\t\t\tdo per�odo. Por�m, essas rea��es, bem como as not�cias       \n"
       "\t\t\t\tsobre a Semana, ocorreram majoritariamente em S�o Paulo,    \n"
       "\t\t\t\tn�o ocorrendo grande repercuss�o a n�vel nacional.         \n"
       "                                                             \n"
       "                                                             \n"
       "\t\t\t\t� poss�vel observar nas obras da Anita Malfatti, umas das    \n"
       "\t\t\t\tprecursoras do modernismo no Brasil, as mudan�as na         \n"
       "\t\t\t\tacontecem principalmente durante 1915 e 1916, quando Anita  \n"
       "\t\t\t\testuda com professores americanos na Independent School    \n"
       "\t\t\t\tof Art, que a influenciam com a est�tica modernista vigente \n"
       "\t\t\t\tna Europa e nos Estados Unidos da Am�rica. Por exemplo, se  \n"
       "\t\t\t\tcompararmos as pinturas �Georgina�, de 1914, e �A mulher de  \n"
       "\t\t\t\tcabelos verdes�, de 1915, podemos perceber uma maior soltura \n"
       "\t\t\t\tnos tra�os na segunda pintura, um descompromisso com a       \n"
       "\t\t\t\trealidade, enquanto na primeira, � mais not�vel um tratamento \n"
       "\t\t\t\tpr�ximo das academias de Belas Artes na imagem, ou seja, com  \n"
       "\t\t\t\ttra�os e volumes mais definidos e mais pr�ximos da realidade. \n\n\n\n\n\n");
            system("pause");

        case 4:
            system("cls");
             printf("\n\t\t\t\t\t\t\t\t\t SEGUNDA GUERRA MUNDIAL\n");
            printf("\n                                \n"
       "                                                 \n"
       "   \t\t\t\tA Segunda Guerra Mundial foi um conflito global    \n"
       "   \t\t\t\tque ocorreu entre 1939 e 1945, envolvendo a maioria  \n"
       "   \t\t\t\tdas na��es do mundo, incluindo as principais        \n"
       "   \t\t\t\tpot�ncias divididas em duas alian�as: os Aliados    \n"
       "   \t\t\t\te as Pot�ncias do Eixo. Abaixo est� um resumo       \n"
       "   \t\t\t\tcompleto dos principais eventos e aspectos da      \n"
       "   \t\t\t\tSegunda Guerra Mundial:                             \n"
       "                                                   \n"
       "   \t\t\t\tCausas Principais:                                \n"
       "                                                   \n"
       "   \t\t\t\tTratado de Versalhes: As condi��es impostas �      \n"
       "   \t\t\t\tAlemanha ap�s a Primeira Guerra Mundial,           \n"
       "   \t\t\t\tparticularmente as repara��es e limita��es         \n"
       "   \t\t\t\tterritoriais, causaram ressentimento e             \n"
       "   \t\t\t\tinstabilidade na Europa.                          \n"
       "                                                   \n"
       "   \t\t\t\tAscens�o do Nazismo e do Fascismo: A ascens�o de    \n"
       "   \t\t\t\tAdolf Hitler na Alemanha e Benito Mussolini na     \n"
       "   \t\t\t\tIt�lia, impulsionados por ideologias               \n"
       "   \t\t\t\tnacionalistas e totalit�rias, desempenhou um       \n"
       "   \t\t\t\tpapel crucial na escalada das tens�es.             \n"
       "                                                   \n"
       "   \t\t\t\tPol�tica de Agress�o Expansionista: As Pot�ncias   \n"
       "   \t\t\t\texpandir seus territ�rios por meio de conquistas   \n"
       "   \t\t\t\tmilitares, desafiando acordos internacionais.      \n"
       "                                                   \n"
       "   \t\t\t\tCronologia dos Eventos:                           \n"
       "                                                   \n"
       "   \t\t\t\tInvas�o da Pol�nia (1939): Em 1� de setembro de    \n"
       "   \t\t\t\t1939, a Alemanha invadiu a Pol�nia, provocando     \n"
       "   \t\t\t\ta entrada do Reino Unido e Fran�a na guerra em     \n"
       "   \t\t\t\tapoio � Pol�nia.                                  \n"
       "                                                   \n"
       "   \t\t\t\tBlitzkrieg e Frente Oriental: A Alemanha rapidamente.\n"
       "   \t\t\t\tinvadiu v�rios pa�ses europeus com sua estrat�gia  \n"
       "   \t\t\t\tde guerra-rel�mpago (Blitzkrieg) e, em junho de    \n"
       "   \t\t\t\t1941, invadiu a Uni�o Sovi�tica.                  \n"
       "                                                   \n"
       "   \t\t\t\tAtaque a Pearl Harbor (1941): Em 7 de dezembro de  \n"
       "   \t\t\t\t1941, o Jap�o atacou a base naval de Pearl Harbor, \n"
       "   \t\t\t\tno Hava�, levando os Estados Unidos a entrar na    \n"
       "   \t\t\t\tguerra.                                          \n"
       "                                                   \n"
       "   \t\t\t\tTeatro do Pac�fico: A partir de 1941, o conflito   \n"
       "   \t\t\t\tno Pac�fico envolveu grandes batalhas entre as     \n"
       "   \t\t\t\tfor�as japonesas e as for�as aliadas, principalmente\n"
       "   \t\t\t\tos Estados Unidos.                               \n"
       "                                                   \n"
       "   \t\t\t\tTeatro Africano e Mediterr�neo: As for�as do Eixo   \n"
       "   \t\t\t\tlutaram contra as for�as aliadas na �frica do      \n"
       "   \t\t\t\tque tiveram um impacto significativo na guerra.    \n"
       "                                                   \n"
       "   \t\t\t\tTeatro Europeu: A partir de 1943, as for�as aliadas.\n"
       "   \t\t\t\tcome�aram a recuperar territ�rios na Europa,        \n"
       "   \t\t\t\tculminando com o Dia D em 6 de junho de 1944,       \n"
       "   \t\t\t\tquando as for�as aliadas desembarcaram na Normandia,\n"
       "   \t\t\t\tna Fran�a ocupada pelos nazistas.                 \n"
       "                                                   \n"
       "   \t\t\t\tFrente Oriental e Batalha de Stalingrado: A Uni�o  \n"
       "   \t\t\t\tSovi�tica lan�ou uma contraofensiva bem-sucedida,   \n"
       "   \t\t\t\tculminando com a Batalha de Stalingrado (1942-1943),\n"
       "   \t\t\t\tuma das viradas decisivas da guerra.              \n"
       "                                                   \n"
       "   \t\t\t\tFim do Terceiro Reich: Em 1945, as for�as aliadas   \n"
       "   \t\t\t\tavan�aram em dire��o a Berlim, e em 30 de abril de  \n"
       "   \t\t\t\t1945, Adolf Hitler cometeu suic�dio. O Terceiro     \n"
       "   \t\t\t\tReich se rendeu em 7 de maio de 1945.              \n"
       "                                                   \n"
       "   \t\t\t\tBomba At�mica: Em agosto de 1945, os Estados Unidos \n"
       "   \t\t\t\tlan�aram bombas at�micas sobre as cidades japonesas \n"
       "   \t\t\t\tde Hiroshima e Nagasaki, levando � rendi��o do      \n"
       "   \t\t\t\tJap�o em setembro de 1945.                        \n"
       "                                                   \n"
       "   \t\t\t\tConsequ�ncias:                                   \n"
       "                                                   \n"
       "   \t\t\t\tEstimativas de Mortes: Estima-se que entre 70 e 85  \n"
       "   \t\t\t\tmilh�es de pessoas morreram durante a Segunda       \n"
       "   \t\t\t\tGuerra Mundial, tornando-a o conflito mais mortal   \n"
       "   \t\t\t\tda hist�ria.                                     \n"
       "                                                   \n"
       "   \t\t\t\tDestrui��o e Reconstru��o: A guerra deixou vastas  \n"
       "   \t\t\t\tuma extensa fase de reconstru��o ap�s o conflito.  \n"
       "                                                   \n"
       "   \t\t\t\tDivis�o do Mundo Bipolar: Ap�s a guerra, o mundo   \n"
       "   \t\t\t\tfoi dividido em dois blocos ideol�gicos e militares:\n"
       "   \t\t\t\tos Estados Unidos e seus aliados no Ocidente, e a   \n"
       "   \t\t\t\tUni�o Sovi�tica e os pa�ses do Bloco Oriental.    \n"
       "                                                   \n"
       "   \t\t\t\tEstabelecimento da ONU: A cria��o das Na��es        \n"
       "   \t\t\t\tUnidas em 1945 buscou promover a coopera��o         \n"
       "   \t\t\t\tinternacional e a preven��o de futuros conflitos    \n"
       "   \t\t\t\tglobais.                                         \n"
       "                                                   \n"
       "   \t\t\t\tDescoloniza��o e Movimentos de Independ�ncia: A     \n"
       "   \t\t\t\tguerra acelerou o processo de descoloniza��o, �     \n"
       "   \t\t\t\tmedida que os imp�rios coloniais europeus           \n"
       "   \t\t\t\tenfraqueceram.                                   \n"
       "                                                   \n"
       "   \t\t\t\tA Segunda Guerra Mundial teve um impacto profundo   \n"
       "   \t\t\t\tna hist�ria do s�culo XX e suas consequ�ncias       \n"
       "   \t\t\t\tainda reverberam no mundo atual. O conflito � um    \n"
       "   \t\t\t\tlembrete duradouro dos horrores da guerra e da      \n"
       "   \t\t\t\timport�ncia da busca pela paz e coopera��o          \n"
       "   \t\t\t\tinternacional.                                  \n\n\n\n\n\n");

            system("pause");



        default:
            printf("\nResposta Invalida!!!\n");
            system("pause");
            break;


        }
    }
    while(opcaoMenu!=0);
    return 0;
}
