# Semáforo no ARDUINO

## Sobre o projeto
Projeto no Arduino referente ao Semáforo de Trânsito para Veículos e Pedestres com Botão Interruptor e Sinal Sonoro (SENAI, 2023)

Este projeto tem como objetivo programar e simular no arduino os semáforos de trânsito para a gestão eficiente de fluxos de veículos e pedestres. Integra um botão interruptor para pedestres, oferecendo uma abordagem mais interativa e segura para a travessia. Além disso, incorpora um sinal sonoro (buzzer) para fornecer feedback auditivo aos usuários, melhorando a experiência e a conscientização no ambiente viário.

## Especificação 
Para o desenvolvimento, foi utilizada a especificação do [**Professor Giovanni Leopoldo Rozza**](https://github.com/rgiovann) do SENAI Blumenau/SC, conforme segue:

### O semáforo de carros em operação NORMAL terá os seguintes tempos:
- LUZ VERDE CARROS – 90 SEGUNDOS (LUZ PEDESTRES – VERMELHO)
- LUZ VERMELHA CARROS – 90 SEGUNDOS (LUZ PEDESTRE – VERDE)
- LUZ AMARELA CARROS – 6 SEGUNDOS (LUZ PEDESTRES – VERMELHO)
- NOS ÚLTIMOS 10 SEGUNDOS DA LUZ VERMELHA CARROS: DEVERÁ HAVER UM SINAL SONORO PARA O PEDESTRE, UM TOM DE 329Hz DE 1 SEGUNDO DE DURAÇÃO 1,5 SEGUNDO DE PAUSA, REPETIDO 4 VEZES

### Ao pressionar o botão B1 ativará a solicitação de passagem de pedestre.
- APÓS 10 SEGUNDOS, O SEMÁFARO PARA CARROS IRÁ PARA LUZ
VERMELHA E A LUZ VERDE PARA PEDESTRES SERÁ ATIVADA POR 35
SEGUNDOS.
- NOS ÚLTIMOS 10 SEGUNDOS DA LUZ VERDE PEDESTRES: DEVERÁ
HAVER UM SINAL SONORO PARA O PEDESTRE, UM TOM DE 329Hz DE 1
SEGUNDO DE DURAÇÃO 1,5 SEGUNDO DE PAUSA, REPETIDO 4 VEZES

### Protótipo inicial + Arduino
- Inicialmente o projeto deverá ser validado no TinkerCad
- Após será utilizando protoboard + Arduino e elementos passivos necessários (resistores, leds, jumpers, etc.)

## Projeto inicial: Tinkercad
![image](https://github.com/alvescamila87/semaforo-arduino/assets/116912821/134f032e-c0bf-4777-b739-ce392de1b467)

Link do Projeto no [Tinkercad](https://www.tinkercad.com/things/eCtkkFN9wGT-v4-semaforo-com-botao-pedestre/editel?returnTo=%2Fthings%2FeCtkkFN9wGT-v4-semaforo-com-botao-pedestre)

![image](https://github.com/alvescamila87/semaforo-arduino/assets/116912821/2e4e49ac-9a52-4379-8509-3df9b2c23f8c)


## Arduino
![image](https://github.com/alvescamila87/semaforo-arduino/assets/116912821/952ba94c-3126-4579-94bf-5fee7992d5eb)
![image](https://github.com/alvescamila87/semaforo-arduino/assets/116912821/9139a44c-9286-4871-b833-81b7e086bf96)
![image](https://github.com/alvescamila87/semaforo-arduino/assets/116912821/729e4cb2-571f-46f9-b9e9-572a84ec2877)

## Autores:
- Camila Alves
- [João Carlos Emídio](https://github.com/emidiojoao)
