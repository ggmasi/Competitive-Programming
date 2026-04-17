import os
import shutil

source_dir = '.' 

judges = {
    'beecrowd': 'Beecrowd',
    'codeforces': 'Codeforces',
    'atcoder': 'AtCoder',
    'leetcode': 'LeetCode',
    'vjudge': 'VJudge',
    'sql': 'Exercicios_SQL'
}

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
    organizar_por_recorte()
    input("\nOrganização concluída! Pressione Enter para fechar...")