# Cripta

## Introdução
Cripta é um projeto simples de gerador de senhas baseado em duas chaves. Uma chave deve ser o site da senha que você quer gerar, e a outra uma senha mestra.

O objetivo desse projeto é transformar senhas fáceis de lembrar em senhas mais seguras para uso real.

## Funcionamento
O Cripta funciona com uma cifra de  Vigenère junto com um hashmap. O hashmap serve para garantir que caracteres não suportados não sejam incluídos na senha, e também para impedir que a senha geradora seja decifrada.
Dessa forma, serão necessários pelo menos dois vazamentos de senha usando a mesma chave para relacionar as possíveis chaves geradoras, e descobrir futuras senhas. Espera-se que nesse meio tempo o usuário já tenha atualizado sua senha, tornando o esforço inútil, e as senhas seguras.

## Modo de usar

Digite os valores nos campos e clique em encriptar.

Para compilar: Instale as dependencias do QT (Kdevelop ou QT creator) importe o projeto e compile.

### Atenção

Este é um projeto amador, e não deve ser usado em ambientes críticos. Uso para senhas pessoais é razoável, mas para ambientes profissionais recomenda-se um software mais sofisticado.

Logo por: <div>Ícones feitos por <a href="https://www.freepik.com" title="Freepik">Freepik</a> from <a href="https://www.flaticon.com/br/" title="Flaticon">www.flaticon.com</a></div>
