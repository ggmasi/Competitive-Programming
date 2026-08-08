import os
import shutil
import re
from pathlib import Path

source_dir = '.' 

judges = {
    'beecrowd': 'Beecrowd',
    'codeforces': 'Codeforces',
    'atcoder': 'AtCoder',
    'leetcode': 'LeetCode',
    'vjudge': 'VJudge',
    'cses': 'CSES',
    'sql': 'Exercicios_SQL'
}

def formatar_nome_titulo(nome):
    """
    Transforma nomes como 'nomeDoExercicio', 'NomeDoExercicio' ou 'nome_do_exercicio'
    em 'Nome Do Exercicio'.
    """
    nome_sem_simbolos = nome.replace('_', ' ').replace('-', ' ')
    nome_separado = re.sub(r'([a-z])([A-Z])', r'\1 \2', nome_sem_simbolos)
    return " ".join(nome_separado.split()).title()

def limpar_nomes_e_inserir_titulo(diretorio):
    caminho = Path(diretorio)
    
    if not caminho.exists() or not caminho.is_dir():
        print(f"Erro: O diretório '{diretorio}' não existe.")
        return

    # REGRA ATUALIZADA: Aceita qualquer combinação de letras e números antes do '_'
    padrao_nome = re.compile(r'^([A-Za-z0-9]+)_(.+)(\.[a-zA-Z0-9]+)$')

    print(f"Iniciando a formatação na pasta: {diretorio}...")

    for arquivo in caminho.iterdir():
        if not arquivo.is_file():
            continue

        match = padrao_nome.match(arquivo.name)
        if match:
            codigo_exercicio = match.group(1)   
            nome_exercicio_bruto = match.group(2) 
            extensao = match.group(3)           

            nome_exercicio_formatado = formatar_nome_titulo(nome_exercicio_bruto)
            novo_nome_arquivo = f"{codigo_exercicio}{extensao}"
            
            if extensao in ['.cpp', '.c', '.java']:
                linha_comentario = f"// {nome_exercicio_formatado}\n"
            elif extensao == '.py':
                linha_comentario = f"# {nome_exercicio_formatado}\n"
            elif extensao == '.sql':
                linha_comentario = f"-- {nome_exercicio_formatado}\n"
            else:
                linha_comentario = f"// {nome_exercicio_formatado}\n"

            try:
                with open(arquivo, 'r', encoding='utf-8') as f:
                    linhas = f.readlines()

                if len(linhas) > 0:
                    if len(linhas) < 2 or linha_comentario.strip() not in linhas[1]:
                        linhas.insert(1, linha_comentario)
                
                with open(arquivo, 'w', encoding='utf-8') as f:
                    f.writelines(linhas)

                novo_caminho = arquivo.with_name(novo_nome_arquivo)
                arquivo.rename(novo_caminho)
                
                print(f"[OK] Alterado: {arquivo.name} -> {novo_nome_arquivo} (Comentário: {nome_exercicio_formatado})")

            except UnicodeDecodeError:
                print(f"[ERRO] Problema de encoding em {arquivo.name}. Tente mudar para 'latin-1'.")
            except Exception as e:
                print(f"[ERRO] Falha ao processar {arquivo.name}: {e}")

def organizar_por_recorte():
    print("Iniciando a organização (Recortar e Colar)...")
    
    for filename in os.listdir(source_dir):
        if filename == os.path.basename(__file__):
            continue

        if filename.endswith(('.cpp', '.py', '.c', '.java', '.sql')):
            filepath = os.path.join(source_dir, filename)
            dest_folder = 'Outros'
            
            try:
                with open(filepath, 'r', encoding='latin-1') as file:
                    first_line = file.readline().lower()
                    for key, folder_name in judges.items():
                        if key in first_line:
                            dest_folder = folder_name
                            break
                
                target_dir = os.path.join(source_dir, dest_folder)
                if not os.path.exists(target_dir):
                    os.makedirs(target_dir)
                
                dest_path = os.path.join(target_dir, filename)
                
                if os.path.exists(dest_path):
                    os.remove(filepath)
                    print(f"Removido duplicata: {filename}")
                else:
                    shutil.move(filepath, dest_path)
                    print(f"Recortado: {filename} -> {dest_folder}\\")
                    
            except Exception as e:
                print(f"Erro ao processar {filename}: {e}")

if __name__ == "__main__":
    limpar_nomes_e_inserir_titulo("./Codeforces")
    input("\nOperação concluída! Pressione Enter para fechar...")