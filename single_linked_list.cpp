#include<bits/stdc++.h>

using namespace std;

//declare
struct node{
    int data;
    struct node *next; //link
};

//make a new node
node* makeNode(int x){
    node *newNode = (node*)malloc(sizeof(node));
    // C++: node *newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

//duyet
void duyet(node *head){
    while(head != NULL){
        printf("%d ", head->data);
        // C++: cout << node->data;
        head = head->next;
    }
}

//count
int count(node *head){
    int dem = 0;
    while(head != NULL){
        ++dem;
        head=head->next;
    }
    return dem;
}

//them node vao dau
void pushFront(node **head, int x){
    node* newNode = makeNode(x);
    newNode->next = (*head);
    (*head) = newNode;
}

void pushFront2(node *&head, int x){ //C++
    node* newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

//them node vao cuoi
void pushBack(node **head, int x){
    node* tmp = *head;
    node* newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void pushBack2(node *&head, int x){ //C++
    node *tmp = head;
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode; return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

//chen node
void insert(node **head, int k, int x){
    int n = count(*head);
    if(k<1 || k>n+1) return;
    if(k==1){
        pushFront(head,x); return;
    }
    node *tmp = *head;
    for(int i=1;i<=k-2;i++){
        tmp = tmp->next;
    }
    node *newNode = makeNode(x);
    newNode->next = tmp->next;
    tmp->next = newNode;
}

//xoa node o dau
void popFront(node **head){
    if(*head == NULL) return;
    node *tmp = *head;
    *head = (*head)->next;
    free(tmp);
}

//xoa node o cuoi
void popBack(node **head){
    if(*head == NULL) return;
    node *tmp = *head;
    if(tmp->next == NULL){
        *head = NULL;
        free(tmp);
        return;
    }
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    node *last = tmp->next;
    tmp->next = NULL;
    free(last);
}

//xoa node giua
void erase(node **head, int k){
    int n = count(*head);
    if(k<1 || k>n) return;
    if(k==1) popFront(head);
    else{
        node *tmp = *head;
        for(int i=1;i<=k-2;i++){
            tmp = tmp->next;
        }
        node *kth = tmp->next;
        tmp->next = kth->next;
        free(kth);
    }
}

int main(){
    node *head = NULL;
    while(1){
        printf("----------------------------\n");
        printf("1. Them vao dau\n");
        printf("2. Them vao cuoi\n");
        printf("3. Them vao giua\n");
        printf("4. Xoa node o dau\n");
        printf("5. Xoa node o cuoi\n");
        printf("6. Xoa node o vi tri k: \n");
        printf("7. Duyet\n");
        printf("0. Thoat\n");
        printf("----------------------------\n");
        printf("Nhap lua chon: ");
        int lc; scanf("%d", &lc);
        if(lc==1){
            int x; scanf("%d", &x);
            pushFront(&head, x);
        } else if(lc==2){
            int x; scanf("%d", &x);
            pushBack(&head, x);
        } else if(lc==3){
            int x; scanf("%d", &x);
            int k; scanf("%d", &k);
            insert(&head, k, x);
        } else if(lc==4){
            popFront(&head);
        } else if(lc==5){
            popBack(&head);
        } else if(lc==6){
            int k; scanf("%d", &k);
            erase(&head, k);
        } else if(lc==7){
            duyet(head);
        } else if(lc==0) return 0;
    }
}