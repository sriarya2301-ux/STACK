#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

struct node*head=NULL;
	
void create_stack(int n){
	int data;
    struct node*new_node,*temp;
    head=NULL;
     for(int i=0;i<n;i++){
    
    new_node =(struct node*)malloc(sizeof(struct node));
    
        printf("Enter STACK %d value :",i+1);
        scanf("%d",&data);
       new_node->data=data;
        new_node->next = NULL;
    
    
   if(head==NULL){
   	
   	head=new_node;
   }else{
   	
   	temp=head;
   	while(temp->next!=NULL){
   		
   		temp=temp->next;
	   }
	   temp->next=new_node;
   }
}printf("STACK has been created.\n");
}

void PUSH(int value){
	struct node*new_node,*temp;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data = value;
	new_node->next=NULL;
    if(head==NULL){
    	head=new_node;
    	printf("%d is inserted into STACK.\n",new_node->data);
	}
	else{
	temp=head;
	while(temp->next!=NULL){	
		temp=temp->next;	
	}
	temp->next=new_node;
	printf("%d is pushed into the stack\n.",value);
    }
}

void POP(){
	struct node*temp,*prev;
	if(head==NULL){
    	printf("Stack is EMPTY.\n");
    	return;
	}
    prev=head;
    temp=head->next;
    if (temp == NULL) {   
        printf("%d is popped out from stack.\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    
        while(temp->next!=NULL){
         prev=prev->next;
		 temp=temp->next;	
	}
	printf("%d is popped out from stack.\n",temp->data);
	free(temp);
	prev->next=NULL;

}

void PEEP(){
	struct node*temp;
	if(head==NULL){
	 printf("Stack is EMPTY\n");
	 return;	
	}
	 else{
	temp=head;
	   while(temp->next!=NULL){
		temp=temp->next;
	}
	printf("Top element of STACK is :%d",temp->data);
   }
}

void display_STACK(){
    struct node*temp;
    if(head==NULL){
	 printf("Stack is EMPTY\n");
	 return;
    }
      else{
    temp=head;
    	printf("The STACK looks like :");
    while(temp!=NULL){
    	
        printf("%d->",temp->data);
        temp=temp->next;
        
    }
    printf("NULL");
    }
}

int main(){
	
	int choice,n,value;
	
/*	printf("Enter the  number of  elements :");
            scanf("%d",&n);
		    create_stack(n);*/
	
	while(1){
	     printf("\n");
	     printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
	switch(choice){
		
		case 1:
		printf("Enter the value to be entered :");
			scanf("%d",&value);   	
			PUSH(value);	
	        break;
	    
		case 2:
		     POP();
		     break;  
		
		case 3:
		   PEEP();
		   break;
		   
		case 4:
		   display_STACK();
		   break;   
		   
		case 5:
		   exit(0);
		      	   
		default:
			printf("Invalid choice.\n");
	}
}
return 0;
}
