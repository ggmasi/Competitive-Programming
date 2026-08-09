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
    nome_sem_simbolos = nome.replace('_', ' ').replace('-', ' ')
    nome_separado = re.sub(r'([a-z])([A-Z])', r'\1 \2', nome_sem_simbolos)
    return " ".join(nome_separado.split()).title()

def limpar_nomes_e_inserir_titulo(diretorio):
    caminho = Path(diretorio)
    
    if not caminho.exists() or not caminho.is_dir():
        print(f"Erro: O diretório '{diretorio}' não existe.")
        return

    padrao_nome = re.compile(r'^([A-Za-z0-9]+)_(.+)(\.[a-zA-Z0-9]+)$')

    print(f"Iniciando a formatação na pasta: {diretorio}...")

    for arquivo in caminho.iterdir():
        if not arquivo.is_file():
            continue

        extensao = arquivo.suffix.lower()
        
        # Ignora arquivos que não são código
        if extensao in ['.cpp', '.c', '.java']:
            prefixo = "//"
        elif extensao == '.py':
            prefixo = "#"
        elif extensao == '.sql':
            prefixo = "--"
        else:
            continue 

        try:
            # Tenta ler o arquivo
            try:
                with open(arquivo, 'r', encoding='utf-8') as f:
                    linhas = f.readlines()
            except UnicodeDecodeError:
                with open(arquivo, 'r', encoding='latin-1') as f:
                    linhas = f.readlines()

            modificou_conteudo = False

            if len(linhas) >= 2:
                # --- ARRUMAR A LINHA 1 (URL) ---
                primeira_linha = linhas[0].strip()
                if "url:" not in primeira_linha.lower():
                    # Remove o símbolo de comentário velho se existir
                    conteudo_url = primeira_linha[len(prefixo):].strip() if primeira_linha.startswith(prefixo) else primeira_linha
                    linhas[0] = f"{prefixo} url: {conteudo_url}\n"
                    modificou_conteudo = True

                # --- ARRUMAR A LINHA 2 (TITLE) ---
                segunda_linha = linhas[1].strip()
                if "title:" not in segunda_linha.lower():
                    # Remove o símbolo de comentário velho se existir
                    conteudo_titulo = segunda_linha[len(prefixo):].strip() if segunda_linha.startswith(prefixo) else segunda_linha
                    linhas[1] = f"{prefixo} Title: {conteudo_titulo}\n"
                    modificou_conteudo = True

            # Salva o arquivo de volta se mexeu nas linhas
            if modificou_conteudo:
                with open(arquivo, 'w', encoding='utf-8') as f:
                    f.writelines(linhas)

            # --- PARTE DE RENOMEAR (Caso ainda tenha o "_" no nome) ---
            match = padrao_nome.match(arquivo.name)
            if match:
                codigo_exercicio = match.group(1)   
                novo_nome_arquivo = f"{codigo_exercicio}{extensao}"
                novo_caminho = arquivo.with_name(novo_nome_arquivo)
                arquivo.rename(novo_caminho)
                print(f"[OK] Alterado linhas e renomeado: {arquivo.name} -> {novo_nome_arquivo}")
            elif modificou_conteudo:
                print(f"[OK] Alterado linhas (URL/Title): {arquivo.name}")

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