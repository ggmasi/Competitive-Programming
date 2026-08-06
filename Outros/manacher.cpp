#include <bits/stdc++.h>
using namespace std;

// =====================================================================
// MANACHER - O(N)
// Encontra o raio de todos os palíndromos (pares e ímpares) da string.

// =====================================================================
vector<int> manacher(string s) {
    string t = "";
    for(char c : s) { // A string original é transformada (ex: "aba" -> "$#a#b#a#^")
        t += string("#") + c;
    }
    t += "#";

    int n = t.size();
    t = "$" + t + "^"; // Sentinelas para evitar verificação de bordas
    
    vector<int> p(n + 2, 0);
    int l = 0, r = 1; // Fronteiras [l, r] do palíndromo mais à direita
    
    for(int i = 1; i <= n; i++) {
        if(i <= r) { // Se i está dentro do limite conhecido, herda do espelho
            p[i] = min(r - i, p[l + (r - i)]);
        }
        while(t[i - p[i]] == t[i + p[i]]) { // Tenta expandir o palíndromo centrado em i
            p[i]++;
        }
        if(i + p[i] > r) { // Se ultrapassou a borda direita, atualiza os limites
            l = i - p[i];
            r = i + p[i];
        }
    }
    return vector<int>(begin(p) + 1, end(p) - 1); // Retorna apenas a parte referente a "#s#t#r#i#n#g#"
}


void solve(string s) {
    vector<int> p = manacher(s);
    // Para achar o que aconteceu com uma letra específica s[k]:
    // O índice correspondente no vetor p é: (2 * k + 1)
    int max_len = 0;
    int max_inicio = 0;
    
    for(int i = 0; i < p.size(); i++) {
        // O tamanho real do palíndromo na string original
        int tamanho_real = p[i] - 1; 
        
        if (tamanho_real == 0) continue; // Ignora os '#' isolados
        
        // Onde esse palíndromo começa na string original 's'
        int inicio_real = (i - p[i] + 1) / 2;
        
        if(tamanho_real > max_len) { // Salva o tamanho do maior palindromo e seu indice inicial
            max_len = tamanho_real;
            max_inicio = inicio_real;
        }
    }
}

int main() {
    string s;
    cin >> s;
    solve(s);
    return 0;
}