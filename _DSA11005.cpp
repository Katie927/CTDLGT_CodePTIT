#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
#define MAX_ARR_SIZE 107

using namespace std;

struct Node
{
    int val;
    Node *left, *right;
};
Node *createNode(int x)
{
    Node *k = new Node;
    k->val = x;
    k->left = k->right = NULL;
    return k;
}
Node *buildTree(int n, int *inorder, int *levelorder, int st, int e)
{
    if (n > 0)
    {
        Node *root = createNode(levelorder[0]);
        int idx = -1;
        unordered_map<int, int> m;
        for (int i = st; i <= e; ++i)
        {
            if (inorder[i] == levelorder[0])
            {
                idx = i;
                break;
            }
            m[inorder[i]]++;
        }
        int L[m.size()], R[e - st - m.size()], l, r;
        l = r = 0;
        for (int i = 1; i < n; ++i)
        {
            if (m[levelorder[i]])
                L[l++] = levelorder[i];
            else
                R[r++] = levelorder[i];
        }
        root->left = buildTree(idx - st, inorder, L, st, idx - 1);
        root->right = buildTree(e - idx, inorder, R, idx + 1, e);
        return root;
    }
    return NULL;
}
void postOrder(Node *root)
{
    if (root->left != NULL)
        postOrder(root->left);
    if (root->right != NULL)
        postOrder(root->right);
    cout << root->val << ' ';
}

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int inorder[n], levelorder[n];
        for (int i = 0; i < n; i++)
            cin >> inorder[i];
        for (int i = 0; i < n; i++)
            cin >> levelorder[i];
        Node *root = buildTree(n, inorder, levelorder, 0, n - 1);
        postOrder(root);
        cout << endl;
    }
}   

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}