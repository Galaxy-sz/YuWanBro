class Solution {
public:
    struct TrieNode{
        bool isWord;
        unordered_map<char, TrieNode*> nodes;

        TrieNode(){
            isWord = false;
        }
    };

    int fin = 0; // 代表已经找到 结果， 深度递归停止
    int flag1 = 0; // 递归 字典树过程中，未至终点已经 发现其它单词
    TrieNode* root;

    // r 代表 当前字典树节点的指针
    void dfs(int index, string& word, TrieNode* r){
        if(index >= word.size() ) return; // 防止 字符越界
        if(fin == 1) return;

        if(r->nodes.find(word[index] ) == r->nodes.end() ) return;
        // 遍历到 长单词下一个字母对应的 字典树的指针
        r = r->nodes[word[index] ];

        if(index == word.size() - 1){
            if(r->isWord && flag1 ) {fin = 1; }
            return;
        } else if(r->isWord){ // 还没有到 当前单词的最后一个字母
            int flag1Ori = flag1;

            // 代表 从这里对长单词 截断
            flag1 = 1;
            dfs(index + 1 , word, root);
            if(fin == 1) return;

            flag1 = flag1Ori;
        }

        dfs(index + 1, word, r);
    }

    string longestWord(vector<string>& words) {
        root = new TrieNode();

        sort(words.begin(), words.end(), [](string& a, string& b){
            return a.size() == b.size() ? a < b : a.size() > b.size();
        });

        // 建立字典树
        for(auto& w: words){
            TrieNode* cur = root;
            for(int i = 0; i < w.size(); i++ ){
                if(cur->nodes.find(w[i]) == cur->nodes.end() ){
                    cur->nodes[w[i]] = new TrieNode();
                }
                cur = cur->nodes[w[i]];
            }
            cur->isWord = true;
        }

        for(int i = 0; i < words.size() - 1; i++){
            // cout << i << " " << words[i] << endl;
            flag1 = 0;

            dfs(0, words[i], root);
            if(fin == 1) return words[i];
        }

        return "";
    }
};

