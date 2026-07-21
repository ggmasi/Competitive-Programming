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

def renomear_arquivos_codeforces(diretorio):
    padrao = re.compile(r'codeforces\.com/.*?(\d+)(?:/problem)?/([A-Za-z][A-Za-z0-9]*)', re.IGNORECASE)
    caminho = Path(diretorio)
    
    if not caminho.exists() or not caminho.is_dir():
        print(f"Erro: O diretório '{diretorio}' não existe.")
        return

    for arquivo in caminho.iterdir():
        if not arquivo.is_file() or arquivo.suffix not in ['.cpp', '.c', '.py']:
            continue

        novo_nome = None # Variável para guardar o nome fora do bloco de leitura

        try:
            # Abre e lê o arquivo
            with open(arquivo, 'r', encoding='utf-8') as f:
                for _ in range(10):
                    linha = f.readline()
                    if not linha:
                        break
                    
                    match = padrao.search(linha)
                    if match:
                        numero = match.group(1)
                        letra = match.group(2).upper()
                        prefixo = f"{numero}{letra}_"
                        
                        # Se não tem o prefixo, anota qual deve ser o novo nome
                        if not arquivo.name.startswith(prefixo):
                            novo_nome = prefixo + arquivo.name
                        
                        break # Encontrou o link, não precisa ler mais as outras linhas
            
            # AGORA SIM: Fora do bloco 'with', o arquivo já está fechado e liberado pelo Windows
            if novo_nome:
                novo_caminho = arquivo.with_name(novo_nome)
                arquivo.rename(novo_caminho)
                print(f"[OK] Renomeado: {arquivo.name} -> {novo_nome}")

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
                # O bloco 'with' garante que o arquivo seja FECHADO após a leitura
                with open(filepath, 'r', encoding='latin-1') as file:
                    first_line = file.readline().lower()
                    for key, folder_name in judges.items():
                        if key in first_line:
                            dest_folder = folder_name
                            break
                
                # AGORA o arquivo já está fechado, podemos mover com segurança
                target_dir = os.path.join(source_dir, dest_folder)
                if not os.path.exists(target_dir):
                    os.makedirs(target_dir)
                
                dest_path = os.path.join(target_dir, filename)
                
                # Se o arquivo já existir no destino, removemos para evitar erro de permissão
                if os.path.exists(dest_path):
                    os.remove(filepath)
                    print(f"Removido duplicata: {filename}")
                else:
                    shutil.move(filepath, dest_path)
                    print(f"Recortado: {filename} -> {dest_folder}\\")
                    
            except Exception as e:
                print(f"Erro ao processar {filename}: {e}")

if __name__ == "__main__":
    # organizar_por_recorte()
    renomear_arquivos_codeforces("./Codeforces")
    input("\nOrganização concluída! Pressione Enter para fechar...")