# Super Trunfo - Cidades

Bem-vindo ao **Super Trunfo - Cidades**, um jogo interativo desenvolvido em C que permite comparar cartas de cidades com base em diversos atributos. O objetivo é cadastrar informações de duas cidades e determinar qual delas vence em diferentes categorias, como população, área, PIB, entre outras.

## Funcionalidades

- **Cadastro de Cartas**: Insira informações detalhadas de duas cidades, incluindo:
  - Estado (representado por uma letra de A a H).
  - Código da carta (ex.: A01, B03).
  - Nome da cidade.
  - População.
  - Área em km².
  - PIB em bilhões.
  - Número de pontos turísticos.

- **Comparação de Atributos**: Escolha um atributo para comparar entre as duas cartas:
  - População.
  - Área.
  - PIB.
  - Número de pontos turísticos.
  - Densidade populacional (menor valor vence).
  - Super Poder (soma de todos os atributos).

- **Visualização de Dados**: Após o cadastro, visualize os dados das cartas cadastradas de forma organizada.

- **Menu Interativo**: Navegue por opções como iniciar o jogo, visualizar instruções ou sair.

## Como Jogar

1. **Iniciar o Jogo**:
   - Escolha a opção "Iniciar Jogo" no menu principal.
   - Cadastre as informações das duas cidades seguindo as instruções no terminal.
   - Escolha um atributo para comparar e descubra qual cidade vence.

2. **Instruções**:
   - Acesse o menu de instruções para entender as regras do jogo e como funciona o sistema de comparação.

3. **Sair**:
   - Finalize o jogo escolhendo a opção "Sair" no menu principal.

## Exemplos de Jogo

### Exemplo 1: Comparando População
- **Carta 1**:
  - Estado: A
  - Código: A01
  - Nome da Cidade: São Paulo
  - População: 12.33 milhões
  - Área: 1521 km²
  - PIB: 699 bilhões
  - Pontos Turísticos: 15

- **Carta 2**:
  - Estado: B
  - Código: B02
  - Nome da Cidade: Rio de Janeiro
  - População: 6.72 milhões
  - Área: 1182 km²
  - PIB: 364 bilhões
  - Pontos Turísticos: 20

**Resultado**: São Paulo vence na categoria "População" com 12.33 milhões contra 6.72 milhões.

---

### Exemplo 2: Comparando Densidade Populacional
- **Carta 1**:
  - População: 12.33 milhões
  - Área: 1521 km²
  - Densidade Populacional: 8104 hab/km²

- **Carta 2**:
  - População: 6.72 milhões
  - Área: 1182 km²
  - Densidade Populacional: 5685 hab/km²

**Resultado**: Rio de Janeiro vence na categoria "Densidade Populacional" com 5685 hab/km² (menor valor).

---

### Exemplo 3: Comparando Super Poder
- **Carta 1**:
  - Super Poder: 7000.50
- **Carta 2**:
  - Super Poder: 6800.75

**Resultado**: Carta 1 vence com um Super Poder de 7000.50.

## Regras de Comparação

- A carta vencedora é determinada com base no atributo escolhido:
  - **População, Área, PIB, Número de Pontos Turísticos**: Maior valor vence.
  - **Densidade Populacional**: Menor valor vence.
  - **Super Poder**: Soma de todos os atributos, incluindo o inverso da densidade populacional.

- Em caso de empate, o sistema informa que os valores dos atributos são iguais.

## Requisitos para Execução

- Compilador C (ex.: GCC).
- Sistema operacional compatível com o compilador.

## Como Compilar e Executar

1. Compile o código com o GCC:
   ```bash
   gcc logicaSuperTrunfo.c -o logicaSuperTrunfo