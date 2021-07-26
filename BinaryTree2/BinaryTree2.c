#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree2.h"

BTreeNode* MakeBTreeNode(void) {}

BTData GetData(BTreeNode* bt) {}

void SetData(BTreeNode* bt, BTData data) {}

BTreeNode* GetLeftSubTree(BTreeNode* bt) {}

BTreeNode* GetRightSubTree(BTreeNode* bt) {}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {}

void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	action(bt->data);
	PreorderTraverse(bt->left, action);
	PreorderTraverse(bt->right, action);
}

void InorderTraverse(BTreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	InorderTraverse(bt->left, action);
	action(bt->data);
	InorderTraverse(bt->right, action);

}

void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	PostorderTraverse(bt->left, action);
	PostorderTraverse(bt->right, action);
	action(bt->data);
}