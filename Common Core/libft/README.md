# libft

Este projeto é uma implementação duma biblioteca em C contendo várias funções úteis que serão usadas ao longo do Common Core da 42.

## 📝 Descrição

A libft é uma biblioteca que contém recriações de várias funções padrão da libc, além de outras funções auxiliares que serão úteis ao longo do curso. Este projeto nos ajuda a entender melhor como essas funções funcionam, proibindo o uso das funções originais.

## 🛠️ Funções Implementadas

### Funções da Libc
- `ft_isalpha` - Verifica se é um caractere alfabético
- `ft_isdigit` - Verifica se é um dígito
- `ft_isalnum` - Verifica se é alfanumérico
- `ft_isascii` - Verifica se é um caractere ASCII
- `ft_isprint` - Verifica se é um caractere imprimível
- `ft_strlen` - Calcula o comprimento de uma string
- `ft_memset` - Preenche memória com um byte constante
- `ft_bzero` - Zera um bloco de memória
- `ft_memcpy` - Copia área de memória
- `ft_memmove` - Copia área de memória com tratamento de sobreposição
- `ft_strlcpy` - Copia string de forma segura
- `ft_strlcat` - Concatena strings de forma segura
- `ft_toupper` - Converte para maiúsculo
- `ft_tolower` - Converte para minúsculo
- `ft_strchr` - Localiza caractere em string
- `ft_strrchr` - Localiza último caractere em string
- `ft_strncmp` - Compara strings
- `ft_memchr` - Procura caractere em área de memória
- `ft_memcmp` - Compara área de memória
- `ft_strnstr` - Localiza substring em string
- `ft_atoi` - Converte string para inteiro
- `ft_calloc` - Aloca memória e inicializa com zero
- `ft_strdup` - Duplica string

### Funções Adicionais
- `ft_substr` - Cria substring
- `ft_strjoin` - Concatena duas strings
- `ft_strtrim` - Remove caracteres específicos do início e fim
- `ft_split` - Divide string em array usando delimitador
- `ft_itoa` - Converte inteiro para string
- `ft_strmapi` - Aplica função a cada caractere da string
- `ft_striteri` - Aplica função a cada caractere da string com índice
- `ft_putchar_fd` - Escreve caractere em file descriptor
- `ft_putstr_fd` - Escreve string em file descriptor
- `ft_putendl_fd` - Escreve string com nova linha em file descriptor
- `ft_putnbr_fd` - Escreve número em file descriptor

### Funções de Lista Encadeada (Bónus)
- `ft_lstnew` - Cria novo nó
- `ft_lstadd_front` - Adiciona nó no início
- `ft_lstsize` - Conta número de nós
- `ft_lstlast` - Retorna último nó
- `ft_lstadd_back` - Adiciona nó no final
- `ft_lstdelone` - Apaga conteúdo de um nó
- `ft_lstclear` - Apaga e libera lista
- `ft_lstiter` - Itera lista aplicando função
- `ft_lstmap` - Cria nova lista aplicando função

## 🚀 Como usar

1. Clone o repositório:
```bash
git clone [URL do repositório]
```

2. Compila a biblioteca:
```bash
make        # Compila as funções obrigatórias
make bonus  # Compila também as funções bônus
```

3. Para usar no seu projeto:
- Inclua o cabeçalho:
```c
#include "libft.h"
```
- Compila o seu projeto linkando com a libft:
```bash
cc seu_programa.c -L. -lft
```

## 🧪 Normas e Testes

- Todas as funções estão escritas conforme a Norma da 42.
- Funções não geram vazamentos de memória.
- Todas as funções foram testadas extensivamente.

## 📄 Makefile

O Makefile contém as seguintes regras:
- `make` - Compila a biblioteca
- `make bonus` - Compila a biblioteca com funções bónus
- `make clean` - Remove arquivos objeto
- `make fclean` - Remove arquivos objeto e biblioteca
- `make re` - Recompila a biblioteca

## 📝 Notas

- Este projeto é parte do currículo comum da 42.
- Todas as funções foram implementadas do zero.
- O uso de funções da libc é estritamente limitado.
