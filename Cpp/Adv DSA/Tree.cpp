#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void preorder(const Node *root)
{
	if (root == nullptr)
		return;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(const Node *root)
{
	if (root == nullptr)
		return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(const Node *root)
{
	if (root == nullptr)
		return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void levelOrder(const Node *root)
{
	if (root == nullptr)
		return;

	queue<const Node *> nodes;
	nodes.push(root);

	while (!nodes.empty())
	{
		const Node *current = nodes.front();
		nodes.pop();
		cout << current->data << " ";

		if (current->left != nullptr)
			nodes.push(current->left);
		if (current->right != nullptr)
			nodes.push(current->right);
	}
}

int main()
{
	int n;
	cout << "Enter the number of nodes: ";
	if (!(cin >> n) || n < 0)
	{
		cout << "The number of nodes must be non-negative.\n";
		return 1;
	}

	vector<Node> tree(n);
	if (n > 0)
	{
		cout << "Enter the node values in level order: ";
		for (Node &node : tree)
		{
			if (!(cin >> node.data))
			{
				cout << "Invalid node value.\n";
				return 1;
			}
			node.left = nullptr;
			node.right = nullptr;
		}

		for (size_t i = 0; i < tree.size(); ++i)
		{
			size_t left = 2 * i + 1;
			size_t right = left + 1;
			if (left < tree.size())
				tree[i].left = &tree[left];
			if (right < tree.size())
				tree[i].right = &tree[right];
		}
	}

	const Node *root = tree.empty() ? nullptr : &tree[0];

	cout << "Preorder: ";
	preorder(root);
	cout << "\nInorder: ";
	inorder(root);
	cout << "\nPostorder: ";
	postorder(root);
	cout << "\nLevel order: ";
	levelOrder(root);
	cout << '\n';

	return 0;
}
