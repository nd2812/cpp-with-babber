#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* childern[26];
        bool isTerminal;

        TrieNode(char ch){
            data=ch;
            for(int i=0;i<26;i++){
                childern[i]=NULL;
                isTerminal=false;
            }
        }
};

class Trie{
    public:
        TrieNode* root;

        Trie(){
            root=new TrieNode('\0');
        }

        void insertUtill(TrieNode* root,string word){
            // base case
            if(word.length()==0){
                root->isTerminal=true;
                return;
            }

            // assumption , word will be in caps
            int index=word[0] - 'A';
            TrieNode* child;

            // present
            if(root->childern[index]!=NULL){
                child =root->childern[index];
            }
            else{
                child = new TrieNode(word[0]);
                root->childern[index]=child;
            }

            // recursion
            insertUtill(child,word.substr(1));
        }

        void insertWord(string word){
            insertUtill(root,word);
        }

        bool searchUtill(TrieNode* root,string word){
            // base case
            if(word.length()==0){
                return root->isTerminal;
            }

            int index = word[0] - 'A';
            TrieNode* child;

            // present
            if(root->childern[index]!=NULL){
                child=root->childern[index];
            }
            else{
                // absent
                return false;
            }

            // recursion
            return searchUtill(child,word.substr(1));
        }

        bool searchWord(string word){
            return searchUtill(root,word);
        }

        void removeUtill(TrieNode* root,string word){
            // base case
            if(word.length()==0){
                root->isTerminal=false;
                return;
            }

            int index = word[0] - 'A';
            TrieNode* child;

            // present
            if(root->childern[index]!=NULL){
                child=root->childern[index];
            }
            else{
                root->isTerminal=false;
            }

            // recursion
            searchUtill(child,word.substr(1));
        }

        void removeWord(string word){
            removeUtill(root,word);
        }

};

int main() {
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout<<"Present or Not "<< t->searchWord("TIME")<<endl;
    t->removeWord("TIME");
    cout<<"Present or Not "<< t->searchWord("TIME")<<endl;

    return 0;
}