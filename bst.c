#include<stdio.h>
#include<stdlib.h>

struct bst
{
	int info;
	struct bst *left;
	struct bst *right;
};
struct bst *root=NULL;

main()
{
	int choice;
	void preorder(struct bst *curr);
	void inorder(struct bst *curr);
	void postorder(struct bst *curr);

	struct bst *node1,*node2,*node3,*node4,*node5,*node6,*node7;
	node1=malloc(sizeof(struct bst));
	node2=malloc(sizeof(struct bst));
	node3=malloc(sizeof(struct bst));
	node4=malloc(sizeof(struct bst));
	node5=malloc(sizeof(struct bst));
	node6=malloc(sizeof(struct bst));
	node7=malloc(sizeof(struct bst));
	
	node1->info=10;
	root=node1;
	node2->info=8;
	node3->info=20;
	node4->info=5;
	node5->info=9;
	node6->info=12;
	node7->info=30;
	
	node1->left=node2;
	node1->right=node3;
	node2->left=node4;
	node2->right=node5;
	node3->left=node6;
	node3->right=node7;
	node4->left=node4->right=NULL;
	node5->left=node5->right=NULL;
	node6->left=node6->right=NULL;
	node7->left=node7->right=NULL;
	
	while(1)
	{
		printf("\n");
		printf("\tMENU\n");
		printf("1. Preorder\n");
		printf("2. Inorder\n");
		printf("3. Postorder\n");
		printf("4. Exit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				preorder(root);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				postorder(root);
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Invalid choice");
			}
		}
}

void preorder(struct bst *curr)
{
	if(curr!=NULL)
	{
		printf("%d\t",curr->info);
		preorder(curr->left);
		preorder(curr->right);
	}
}

void inorder(struct bst *curr)
{
	if(curr!=NULL)
	{
		inorder(curr->left);
		printf("%d\t",curr->info);
		inorder(curr->right);
	}
}

void postorder(struct bst *curr)
{
	if(curr!=NULL)
	{
		postorder(curr->left);
		postorder(curr->right);
		printf("%d\t",curr->info);
	}
}
	  
