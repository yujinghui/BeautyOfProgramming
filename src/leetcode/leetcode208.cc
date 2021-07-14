#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;
class Trie
{
private:
    bool end;
    set<Trie *> next;

    bool inNext(set<Trie *> iter, char ch)
    {
    }

public:
    /** Initialize your data structure here. */
    Trie()
    {
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        char firstChar = word[0];
        iterator<Trie *> iter = next.find();
        for (int i = 1; i < word.size(); i++)
        {
            Trie *currentNode = iter.next();
            set<Trie *> nextNodes = currentNode.next;
            if (inNext(nextNodes, word[i]))
            {
            }
            else
            {
            }
        }
    }

    /** Returns if the word is in the trie. */
    bool search(string word)
    {
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
    }
};

int main()
{
    Trie *obj = new Trie();
    obj->insert("hello world");
    bool param_2 = obj->search("llo");
    bool param_3 = obj->startsWith("hell");
    cout << param_2 << param_3 << endl;
}