#vou criar um arquivo .txt na sua área de trabalho:
#isso daqui é só pra procurar o arquivo e evitar erros:

arquivo = $(find/-name "2.abrir.c" 2>/dev/null)

if [ -z "$arquivo" ]; then
    echo "Arquivo 2.abrir.c não encontrado."
    exit 1
fi

cd ~
cd Desktop/ 
mkdir -p seu_arquivo/
cd seu_arquivo/
gcc -o saida "$arquivo"
./saida
