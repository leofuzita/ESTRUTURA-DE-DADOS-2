# Readme do Servidor Backend

Este repositório contém o servidor backend para um aplicativo web. Certifique-se de atender aos requisitos do servidor backend antes de prosseguir com a configuração.

## Requisitos do Servidor Backend

Certifique-se de que seu servidor atenda aos seguintes requisitos:

- [Composer](https://getcomposer.org/)
- [PHP 8.2](https://www.php.net/)
- Sistema de Gerenciamento de Banco de Dados (SGBD):
  - MySQL
  - Postgres
  - Ou outro semelhante

## Pré-configuração

Antes de executar o servidor, você precisará fazer algumas configurações iniciais.

1. Renomeie o arquivo `.env-example` para `.env`.

2. Abra o arquivo `.env` e adicione as informações de configuração do banco de dados, garantindo que ele esteja corretamente configurado para o SGBD escolhido.

3. Acesse o diretório "database/seeders" e renomeie o arquivo "UsersTableSeeder.example.php" para "UsersTableSeeder.php".

## Instalação

Agora, você pode prosseguir com a instalação do servidor backend:

1. Execute o comando abaixo para instalar as dependências do projeto:
