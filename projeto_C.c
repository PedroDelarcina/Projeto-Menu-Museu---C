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
        printf("Tipo de ingresso inválido!\n");
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
    "\tjulho de 1932 em Guarujá, São Paulo. Ele é conhecido por suas contribuições\n"
    "\tsignificativas para o desenvolvimento da aviação. Aqui estão algumas\n"
    "\tcuriosidades e aspectos importantes de sua vida e carreira:\n\n"

    "\tPioneirismo na Aviação: Santos Dumont é mundialmente reconhecido como o \"Pai da Aviação\". \n"
    "\tEle foi o primeiro a decolar, voar e aterrissar uma aeronave com um motor a bordo,\n "
    "\tperante uma comissão de testemunhas, o que ocorreu em 14-Bis em Paris, França, em \n"
    "\t23 de outubro de 1906.\n\n"
    "\tO 14-Bis: Este foi o avião que Santos Dumont utilizou para realizar seu famoso voo. \n"
    "\tEle foi projetado e construído pelo próprio Santos Dumont. O nome \"14-Bis\" refere-se \n"
    "\tao fato de que era a 14ª aeronave projetada pelo inventor.\n\n"
    "\tVoo do Dirigível nº 6: Antes do 14-Bis, Santos Dumont já havia conquistado a Taça Deutsch em 1901, \n"
    "\tao contornar a Torre Eiffel com seu dirigível nº 6, demonstrando a capacidade de controle direcional \n"
    "\tde uma aeronave.\n\n"
    "\tContribuições para a Aviação: Além do 14-Bis, Santos Dumont também construiu e voou em diversos outros \n"
    "\tmodelos de aeronaves, incluindo o Demoiselle, que foi uma das primeiras aeronaves de produção em massa do mundo.\n\n"

    "\tCidadania Francesa: Santos Dumont obteve a cidadania francesa em 1901, em grande parte devido às suas\n "
    "\tconquistas na aviação e ao fato de que a França era um dos centros da inovação aeronáutica na época.\n\n"

    "\tVoo no Campo de Bagatelle: O famoso voo do 14-Bis aconteceu no campo de Bagatelle, em Paris, diante de uma\n "
    "\tmultidão de testemunhas e jornalistas. Esse evento marcou um marco na história da aviação.\n\n"

    "\tPrêmio Deutsch de la Meurthe: Em 1901, Santos Dumont ganhou esse prêmio por ser o primeiro a contornar a \n"
    "\tTorre Eiffel em um dirigível. O prêmio era uma quantia significativa, o que ele doou para o desenvolvimento da aviação.\n\n"

    "\tPreocupação com o Uso Pacífico da Aviação: Santos Dumont era um defensor fervoroso do uso pacífico da aviação.\n "
    "\tEle ficou desiludido com o desenvolvimento militar da aviação e recusou-se a continuar a trabalhar em projetos bélicos.\n\n"

    "\tFim da Carreira: Após uma série de insucessos com suas últimas aeronaves e sofrendo de esclerose múltipla, Santos Dumont \n"
    "\t entrou em depressão. Em 1932, ele cometeu suicídio no Guarujá, São Paulo.\n\n\n\n\n\n"
    );




            system("pause");
            break;


        case 2:
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t\tOLIMPIADAS NA FRANCA\n");
             printf(
        "\n\n\tDuração Prolongada: As Olimpíadas de 1900 tiveram uma duração muito incomum, ocorrendo ao longo de quase cinco meses, \n"
        "\tde 14 de maio a 28 de outubro. Isso se deveu ao fato de que os eventos esportivos estavam integrados à Exposição Universal \n"
        "\te eram distribuídos ao longo de todo esse período.\n\n"

        "\tVariedade de Modalidades: Houve uma grande variedade de esportes e modalidades apresentadas nos Jogos de 1900. Além dos esportes \n"
        "\ttradicionais, como atletismo, ciclismo e ginástica, houve competições mais incomuns, como críquete, polo aquático, croquet, \n"
        "\te até mesmo corrida de balões.\n\n"

        "\tPresença de Mulheres: Pela primeira vez na história olímpica, mulheres puderam competir. As atletas participaram de eventos \n"
        "\tcomo tênis e golfe. Margaret Abbott, dos Estados Unidos, é frequentemente citada como a primeira mulher a ganhar um evento \n"
        "\tolímpico (golfe individual), sem saber que estava participando de uma Olimpíada.\n\n"

        "\tCompetidores Pouco Preparados: Devido à natureza inesperada e prolongada dos Jogos, muitos atletas não estavam devidamente \n"
        "\tpreparados. Alguns chegaram em Paris por acaso, estavam na cidade por outros motivos e decidiram competir.\n\n"

        "\tParticipação Reduzida: O número de atletas e nações participantes foi muito menor em comparação com os Jogos modernos. Apenas \n"
        "\tcerca de 1.000 atletas de 24 países competiram, em comparação com os milhares de atletas de centenas de países nos Jogos mais recentes.\n\n"

        "\tPouca Atenção à Competição: Devido à falta de organização e divulgação, os Jogos de 1900 foram ofuscados pela Exposição Universal, \n"
        "\te muitos atletas não estavam cientes de que estavam participando de uma Olimpíada.\n\n"

        "\tDesconhecimento da Vitória: Muitos vencedores dos eventos não sabiam que haviam ganhado uma medalha olímpica, e os prêmios eram \n"
        "\tfrequentemente medalhas de prata ou troféus.\n\n"

        "\tMedalhas Curiosas: As medalhas distribuídas nos Jogos de 1900 eram muito diferentes das usadas hoje em dia. Eram medalhas redondas,\n "
        "\tcom um design artístico que variava para cada evento esportivo.\n\n"

        "\tLegado Olímpico: Apesar de sua natureza caótica e pouco organizada, os Jogos de 1900 foram um marco importante na história olímpica. \n"
        "\tEles ajudaram a estabelecer as bases para o desenvolvimento e a evolução dos Jogos Olímpicos modernos.\n\n\n\n\n\n"
    );

            system("pause");

        case 3:
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t\t 100 ANOS DA ARTE MODERNA\n");
    printf("\n"
       "                                                             \n"
       "\t\t\t\tA Semana de Arte Moderna aconteceu em fevereiro de 1922,     \n"
       "\t\t\t\tna cidade de São Paulo, 100 anos após a Independência do     \n"
       "\t\t\t\tBrasil, 34 anos após a abolição da escravidão e 4 anos após  \n"
       "\t\t\t\to fim da Primeira Guerra Mundial. Nesse contexto, uma        \n"
       "\t\t\t\tquestão importante para os considerados intelectuais         \n"
       "\t\t\t\tbrasileiros era como o Brasil tinha se saído desses        \n"
       "\t\t\t\tprocessos históricos, principalmente comparando o país com  \n"
       "\t\t\t\tos Estados Unidos da América, que saíram da Primeira Guerra \n"
       "\t\t\t\tMundial como uma grande potência. Além disso, as questões   \n"
       "\t\t\t\tsociais, principalmente a abolição da escravidão, recebiam  \n"
       "\t\t\t\tpouco destaque nos trabalhos artísticos. Assim, a Semana de  \n"
       "\t\t\t\tArte Moderna se apoiava no pensamento nacionalista e na    \n"
       "\t\t\t\tbusca de uma identidade para o Brasil, além da procura por  \n"
       "\t\t\t\tuma produção artística mais liberta, que rompesse com uma   \n"
       "\t\t\t\testética das academias de Belas Artes e das ideias          \n"
       "\t\t\t\tparnasianistas. As ideias parnasianistas tratavam da arte    \n"
       "\t\t\t\tpela arte, privilegiavam a busca pela perfeição e           \n"
       "\t\t\t\tdemonstravam pouca preocupação com os sentimentos humanos   \n"
       "\t\t\t\te os contextos sociais.                                    \n"
       "                                                              \n"
       "                                                              \n"
       "\t\t\t\tA Semana de Arte Moderna teve muitos envolvidos, como      \n"
       "\t\t\t\tAnita Malfatti, Di Cavalcanti, Ferrignac (Inácio da Costa  \n"
       "\t\t\t\tFerreira), Zina Aita, Mário de Andrade, Martins Ribeiro,    \n"
       "\t\t\t\tOswaldo Goeldi, Regina Graz, Oswald de Andrade, entre      \n"
       "\t\t\t\toutros artistas e intelectuais majoritariamente paulistas. \n"
       "\t\t\t\tO evento se tornou um dos marcos da cena cultural         \n"
       "\t\t\t\tbrasileira anos depois do seu acontecimento. Apesar de o    \n"
       "\t\t\t\tevento ter sido pensado para acontecer durante uma semana   \n"
       "\t\t\t\tcompleta, de 11 a 18 de fevereiro, na verdade a Semana de  \n"
       "\t\t\t\tArte Moderna só esteve aberta ao público durante os dias   \n"
       "\t\t\t\t13, 15 e 17, respectivamente segunda, quarta e sexta, de    \n"
       "\t\t\t\tfevereiro de 1922, com programação temática que passava     \n"
       "\t\t\t\tpelas artes visuais, literatura e música. Vale ressaltar,   \n"
       "\t\t\t\tque os trabalhos expostos na Semana não tiveram uma        \n"
       "\t\t\t\trecepção positiva pelos intelectuais conservadores de São   \n"
       "\t\t\t\tPaulo, pelo fato de romperem com as tradições artísticas   \n"
       "\t\t\t\tdo período. Porém, essas reações, bem como as notícias       \n"
       "\t\t\t\tsobre a Semana, ocorreram majoritariamente em São Paulo,    \n"
       "\t\t\t\tnão ocorrendo grande repercussão a nível nacional.         \n"
       "                                                             \n"
       "                                                             \n"
       "\t\t\t\tÉ possível observar nas obras da Anita Malfatti, umas das    \n"
       "\t\t\t\tprecursoras do modernismo no Brasil, as mudanças na         \n"
       "\t\t\t\tacontecem principalmente durante 1915 e 1916, quando Anita  \n"
       "\t\t\t\testuda com professores americanos na Independent School    \n"
       "\t\t\t\tof Art, que a influenciam com a estética modernista vigente \n"
       "\t\t\t\tna Europa e nos Estados Unidos da América. Por exemplo, se  \n"
       "\t\t\t\tcompararmos as pinturas “Georgina”, de 1914, e “A mulher de  \n"
       "\t\t\t\tcabelos verdes”, de 1915, podemos perceber uma maior soltura \n"
       "\t\t\t\tnos traços na segunda pintura, um descompromisso com a       \n"
       "\t\t\t\trealidade, enquanto na primeira, é mais notável um tratamento \n"
       "\t\t\t\tpróximo das academias de Belas Artes na imagem, ou seja, com  \n"
       "\t\t\t\ttraços e volumes mais definidos e mais próximos da realidade. \n\n\n\n\n\n");
            system("pause");

        case 4:
            system("cls");
             printf("\n\t\t\t\t\t\t\t\t\t SEGUNDA GUERRA MUNDIAL\n");
            printf("\n                                \n"
       "                                                 \n"
       "   \t\t\t\tA Segunda Guerra Mundial foi um conflito global    \n"
       "   \t\t\t\tque ocorreu entre 1939 e 1945, envolvendo a maioria  \n"
       "   \t\t\t\tdas nações do mundo, incluindo as principais        \n"
       "   \t\t\t\tpotências divididas em duas alianças: os Aliados    \n"
       "   \t\t\t\te as Potências do Eixo. Abaixo está um resumo       \n"
       "   \t\t\t\tcompleto dos principais eventos e aspectos da      \n"
       "   \t\t\t\tSegunda Guerra Mundial:                             \n"
       "                                                   \n"
       "   \t\t\t\tCausas Principais:                                \n"
       "                                                   \n"
       "   \t\t\t\tTratado de Versalhes: As condições impostas à      \n"
       "   \t\t\t\tAlemanha após a Primeira Guerra Mundial,           \n"
       "   \t\t\t\tparticularmente as reparações e limitações         \n"
       "   \t\t\t\tterritoriais, causaram ressentimento e             \n"
       "   \t\t\t\tinstabilidade na Europa.                          \n"
       "                                                   \n"
       "   \t\t\t\tAscensão do Nazismo e do Fascismo: A ascensão de    \n"
       "   \t\t\t\tAdolf Hitler na Alemanha e Benito Mussolini na     \n"
       "   \t\t\t\tItália, impulsionados por ideologias               \n"
       "   \t\t\t\tnacionalistas e totalitárias, desempenhou um       \n"
       "   \t\t\t\tpapel crucial na escalada das tensões.             \n"
       "                                                   \n"
       "   \t\t\t\tPolítica de Agressão Expansionista: As Potências   \n"
       "   \t\t\t\texpandir seus territórios por meio de conquistas   \n"
       "   \t\t\t\tmilitares, desafiando acordos internacionais.      \n"
       "                                                   \n"
       "   \t\t\t\tCronologia dos Eventos:                           \n"
       "                                                   \n"
       "   \t\t\t\tInvasão da Polônia (1939): Em 1º de setembro de    \n"
       "   \t\t\t\t1939, a Alemanha invadiu a Polônia, provocando     \n"
       "   \t\t\t\ta entrada do Reino Unido e França na guerra em     \n"
       "   \t\t\t\tapoio à Polônia.                                  \n"
       "                                                   \n"
       "   \t\t\t\tBlitzkrieg e Frente Oriental: A Alemanha rapidamente.\n"
       "   \t\t\t\tinvadiu vários países europeus com sua estratégia  \n"
       "   \t\t\t\tde guerra-relâmpago (Blitzkrieg) e, em junho de    \n"
       "   \t\t\t\t1941, invadiu a União Soviética.                  \n"
       "                                                   \n"
       "   \t\t\t\tAtaque a Pearl Harbor (1941): Em 7 de dezembro de  \n"
       "   \t\t\t\t1941, o Japão atacou a base naval de Pearl Harbor, \n"
       "   \t\t\t\tno Havaí, levando os Estados Unidos a entrar na    \n"
       "   \t\t\t\tguerra.                                          \n"
       "                                                   \n"
       "   \t\t\t\tTeatro do Pacífico: A partir de 1941, o conflito   \n"
       "   \t\t\t\tno Pacífico envolveu grandes batalhas entre as     \n"
       "   \t\t\t\tforças japonesas e as forças aliadas, principalmente\n"
       "   \t\t\t\tos Estados Unidos.                               \n"
       "                                                   \n"
       "   \t\t\t\tTeatro Africano e Mediterrâneo: As forças do Eixo   \n"
       "   \t\t\t\tlutaram contra as forças aliadas na África do      \n"
       "   \t\t\t\tque tiveram um impacto significativo na guerra.    \n"
       "                                                   \n"
       "   \t\t\t\tTeatro Europeu: A partir de 1943, as forças aliadas.\n"
       "   \t\t\t\tcomeçaram a recuperar territórios na Europa,        \n"
       "   \t\t\t\tculminando com o Dia D em 6 de junho de 1944,       \n"
       "   \t\t\t\tquando as forças aliadas desembarcaram na Normandia,\n"
       "   \t\t\t\tna França ocupada pelos nazistas.                 \n"
       "                                                   \n"
       "   \t\t\t\tFrente Oriental e Batalha de Stalingrado: A União  \n"
       "   \t\t\t\tSoviética lançou uma contraofensiva bem-sucedida,   \n"
       "   \t\t\t\tculminando com a Batalha de Stalingrado (1942-1943),\n"
       "   \t\t\t\tuma das viradas decisivas da guerra.              \n"
       "                                                   \n"
       "   \t\t\t\tFim do Terceiro Reich: Em 1945, as forças aliadas   \n"
       "   \t\t\t\tavançaram em direção a Berlim, e em 30 de abril de  \n"
       "   \t\t\t\t1945, Adolf Hitler cometeu suicídio. O Terceiro     \n"
       "   \t\t\t\tReich se rendeu em 7 de maio de 1945.              \n"
       "                                                   \n"
       "   \t\t\t\tBomba Atômica: Em agosto de 1945, os Estados Unidos \n"
       "   \t\t\t\tlançaram bombas atômicas sobre as cidades japonesas \n"
       "   \t\t\t\tde Hiroshima e Nagasaki, levando à rendição do      \n"
       "   \t\t\t\tJapão em setembro de 1945.                        \n"
       "                                                   \n"
       "   \t\t\t\tConsequências:                                   \n"
       "                                                   \n"
       "   \t\t\t\tEstimativas de Mortes: Estima-se que entre 70 e 85  \n"
       "   \t\t\t\tmilhões de pessoas morreram durante a Segunda       \n"
       "   \t\t\t\tGuerra Mundial, tornando-a o conflito mais mortal   \n"
       "   \t\t\t\tda história.                                     \n"
       "                                                   \n"
       "   \t\t\t\tDestruição e Reconstrução: A guerra deixou vastas  \n"
       "   \t\t\t\tuma extensa fase de reconstrução após o conflito.  \n"
       "                                                   \n"
       "   \t\t\t\tDivisão do Mundo Bipolar: Após a guerra, o mundo   \n"
       "   \t\t\t\tfoi dividido em dois blocos ideológicos e militares:\n"
       "   \t\t\t\tos Estados Unidos e seus aliados no Ocidente, e a   \n"
       "   \t\t\t\tUnião Soviética e os países do Bloco Oriental.    \n"
       "                                                   \n"
       "   \t\t\t\tEstabelecimento da ONU: A criação das Nações        \n"
       "   \t\t\t\tUnidas em 1945 buscou promover a cooperação         \n"
       "   \t\t\t\tinternacional e a prevenção de futuros conflitos    \n"
       "   \t\t\t\tglobais.                                         \n"
       "                                                   \n"
       "   \t\t\t\tDescolonização e Movimentos de Independência: A     \n"
       "   \t\t\t\tguerra acelerou o processo de descolonização, à     \n"
       "   \t\t\t\tmedida que os impérios coloniais europeus           \n"
       "   \t\t\t\tenfraqueceram.                                   \n"
       "                                                   \n"
       "   \t\t\t\tA Segunda Guerra Mundial teve um impacto profundo   \n"
       "   \t\t\t\tna história do século XX e suas consequências       \n"
       "   \t\t\t\tainda reverberam no mundo atual. O conflito é um    \n"
       "   \t\t\t\tlembrete duradouro dos horrores da guerra e da      \n"
       "   \t\t\t\timportância da busca pela paz e cooperação          \n"
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
