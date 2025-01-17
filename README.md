
# Sistema com Raspberry Pi Pico, Teclado Matricial, LEDs RGB e Buzzer

## Descrição do Projeto

Este projeto utiliza o **Raspberry Pi Pico** para controlar LEDs RGB e um buzzer com base nas entradas de um teclado matricial 4x4. O sistema foi desenvolvido em **linguagem C** e simulado no **Wokwi**, além de ser configurado para rodar no **VS Code** com todas as dependências e SDK instalados.

---

## Requisitos

- **Microcontrolador**: Raspberry Pi Pico.
- **Simulador**: [Wokwi](https://wokwi.com/).
- **Editor de Código**: Visual Studio Code (VS Code).
- **SDK do Raspberry Pi Pico** configurado no sistema.
- Ferramenta de build: **CMake** e **Ninja**.

---

## Instruções de Uso

### 1. Baixe o código e clone o repositório
Clone o repositório para o seu computador:
```bash
git clone https://github.com/GabrielLazuli/TAREFA_U4C2.git
cd repositorio
```
---

### 2. Instale as dependências do SDK do Raspberry Pi Pico no VS Code
Certifique-se de que o SDK do Raspberry Pi Pico está configurado corretamente.

---

### 3. Configuração do VS Code
Abra o projeto no Visual Studio Code. Instale as extensões:
- **C/C++** (Microsoft).
- **CMake Tools**.
- **Wokwi IoT Simulator**.
- **Raspbarry pi pico**


- **Compilando o código**: 
  No terminal do VS Code, abra o arquivo .c e clique em 'compile' e vai gerar os arquivos necessários no build para rodar o programa.
  
  Isso irá compilar o código e gerar o arquivo `.uf2` para o Raspberry Pi Pico.

---

### 3. Teste no Simulador Wokwi e com a integração no vs code
Abra o arquivo 'project.wokwi.json' no Wokwi para simular o projeto:
- Acesse o simulador [Wokwi](https://wokwi.com/).
- Importe o arquivo `project.wokwi.json`.
- Clique em "Start Simulation" para ver o funcionamento do sistema.
- No vs code clique em diagram.json  
- Clique em "Start Simulation" para ver o funcionamento do sistema.

---

### 4. Teste no Hardware Real
Para rodar no hardware real (Raspberry Pi Pico):
- Conecte o Raspberry Pi Pico ao computador.
- Compile o código e gere o arquivo `.uf2`.
- Copie o arquivo '.uf2' para o Raspberry Pi Pico ou clique em 'Run' no terminal.
- Observe os LEDs e o buzzer interagindo com as teclas pressionadas no teclado matricial.

---

## 5. Funcionamento do Sistema

1. **Teclado Matricial 4x4**: Detecta teclas pressionadas e executa ações correspondentes.
2. **LEDs RGB**: Mudam de cor com base nas teclas pressionadas.
3. **Buzzer**: Emite sons como feedback ao pressionar teclas específicas.

---

## 6. Divisão de Tarefas do subgrupo 9

- Líder do Projeto (1 pessoa)
- Responsável: Gabriel

- Desenvolvimento do Teclado Matricial (2 pessoas)
- Responsáveis: Wilson, Daniel

- Controle dos LEDs RGB (2 pessoas)
- Responsáveis: Lui, Rafael Souza

- Controle do Buzzer (1 pessoa)
- Responsável: Wallas Sampaio

- Integração e Testes (2 pessoas)
- Responsáveis: Júnior, Laíse

- Documentação e Apresentação (2 pessoas)
- Responsáveis: Ana Carla (Documentação), Wesley (Apresentação)

## Link do Vídeo Ensaio 
...
