# Sistema Integrado com Raspberry Pi Pico, Teclado Matricial, LEDs RGB e Buzzer

## Descrição do Projeto

Este projeto utiliza o **Raspberry Pi Pico** para controlar LEDs RGB e um buzzer com base nas entradas de um teclado matricial 4x4. O sistema foi desenvolvido em **linguagem C**, simulado no **Wokwi**, e configurado para rodar no **VS Code** com todas as dependências e SDK instalados. Além disso, há suporte para execução em hardware real, utilizando a placa de desenvolvimento **BitDogLab**.

---

## Requisitos

- **Microcontrolador**: Raspberry Pi Pico ou Raspberry Pi Pico W (opcional)
- **Placa de Desenvolvimento:** BitDogLab (opcional).
- **Conta Criada no Wokwi Simulator**: [Wokwi](https://wokwi.com/). (opcional)
- **Editor de Código**: Visual Studio Code (VS Code).
- **SDK do Raspberry Pi Pico** configurado no sistema.
- Ferramentas de build: **CMake** e **Ninja**.

---

## Instruções de Uso

### 1. Clone o Repositório

Clone o repositório para o seu computador:
```bash
git clone https://github.com/GabrielLazuli/TAREFA_U4C2.git
cd TAREFA_U4C2
```
---

### 2. Instale as Dependências

Certifique-se de que o SDK do Raspberry Pi Pico está configurado corretamente no VS Code. As extensões recomendadas são:

- **C/C++** (Microsoft).
- **CMake Tools**.
- **Wokwi Simulator**.
- **Raspberry Pi Pico**.

---

### 3. Configure o VS Code

Abra o projeto no Visual Studio Code e siga as etapas abaixo:

1. Certifique-se de que as extensões mencionadas anteriormente estão instaladas.
2. No terminal do VS Code, compile o código clicando em "Compile Project" na interface da extensão do Raspberry Pi Pico.
3. O processo gerará o arquivo `.uf2` necessário para a execução no hardware real.

---

### 4. Teste no Simulador Wokwi Integrado ao VS Code

Após ter configurado o VS Code conforme descrito no item 3, siga os passos abaixo para simular o projeto:

1. Abra o arquivo `diagram.json` no Visual Studio Code.
2. Clique no botão "Play" disponível na interface.
3. Divirta-se interagindo com os componentes disponíveis no simulador integrado!

---

### 5. Teste no Hardware Real

#### Utilizando a Placa de Desenvolvimento BitDogLab com Raspberry Pi Pico W:

1. Conecte a placa ao computador no modo BOTSEEL:
   - Pressione o botão **BOOTSEL** (localizado na parte de trás da placa de desenvolvimento) e, em seguida, o botão **RESET** (localizado na frente da placa).
   - Após alguns segundos, solte o botão **RESET** e, logo depois, solte o botão **BOOTSEL**.
   - A placa entrará no modo de programação.

2. Compile o projeto no VS Code utilizando a extensão do [Raspberry Pi Pico W](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico):
   - Clique em **Compile Project**.

3. Execute o projeto clicando em **Run Project USB**, localizado abaixo do botão **Compile Project**.

4. Conecte os pinos do teclado matricial ao conector de expansão GPIO da BitDogLab conforme o mapeamento abaixo:

   | **Pino do Teclado** | **Pino no Conector de Expansão (GPIO)** |
   |---------------------|----------------------------------------|
   | R1                 | GP17                                   |
   | R2                 | GP18                                   |
   | R3                 | GP19                                   |
   | R4                 | GP20                                   |
   | C1                 | GP16                                   |
   | C2                 | GP9                                    |
   | C3                 | GP8                                    |
   | C4                 | GP4                                    |

   Para localizar os pinos no conector de expansão:
   - **GP17** a **GP20**: Localizados na fileira superior do conector, na posição 9 a 12.
   - **GP16**, **GP9**, **GP8**, **GP4**: Localizados na fileira inferior do conector, na posição 11, 6, 4 e 8, respectivamente.

   Consulte o datasheet para mais detalhes sobre a localização física dos pinos na BitDogLab.

Após a configuração, todos os componentes estarão prontos para o uso no sistema.

---

## Funcionamento do Sistema

1. **Teclado Matricial 4x4**: Detecta teclas pressionadas e executa ações correspondentes.
2. **LEDs RGB**: Alteram as cores com base nas teclas pressionadas.
3. **Buzzer**: Emite sons como feedback ao pressionar teclas específicas.

---

## Divisão de Tarefas do Grupo 9 - Subgrupo 9 do EmbarcaTech - CEPEDI 

- **Líder do Projeto**:
  - GABRIEL SOUZA SANTOS
- **Desenvolvimento do Teclado Matricial**:
  - WILSON OLIVEIRA LIMA
  - DANIEL SOARES OLIVEIRA SANTOS
- **Controle dos LEDs RGB**:
  - ANDRÉ LUIZ FALCÃO SOARES
  - RAFAEL SOUZA BARBOSA
- **Controle do Buzzer**:
  - WALLAS FRANÇA SAMPAIO
- **Integração e Testes**:
  - JOSÉ WILSON PASSOS DOS SANTOS JÚNIOR
  - LAÍSE CAFÉ DOS SANTOS
- **Documentação e Apresentação**:
  - ANA CARLA MACÁRIO SANTANA (Documentação)
  - WESLEY NASCIMENTO DOS SANTOS (Apresentação)

---

## Link do Vídeo Ensaio

*(A ser adicionado posteriormente)*
