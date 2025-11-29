/*
4 Categories of Data Types
1) Primitive / Basic Data Types

char – %c – 1 byte

int – %d – 4 bytes

float – %f – 4 bytes

double – %lf – 8 bytes

2) Derived Data Types

Array

Function

Pointers

3) User-defined Data Types

Structure (struct)

Union (union)

4) Empty Data Type

void

User-defined Data Type: Structure
Definition:

A structure is a collection of heterogeneous data items (different data types) grouped together under one name.
It can also store homogeneous data items, but its specialty is storing different types together.

Example:
struct point {
    int x;
    int y;
};

Array Example:
int a[2];     // Collection of 2 integers
a = [0][1];

Syntax of Structure
struct <structure_name> {
    <datatype> member1;
    <datatype> member2;
    ...
    <datatype> memberN;
};

Example: Student Structure
struct student {
    char roll[10];
    char fname[50];
    char lname[50];
    double gpa;
    int age;
    long long int cno;
};

Ways of Declaring Structure Variables

Way 1: (inside main)

struct student s1, s2, s3;

typedef (3rd way)

You can create a short name for the structure using typedef.

Example:

typedef struct student {
    char roll[10];
    char fname[50];
    char lname[50];
    double gpa;
    int age;
    long long int cno;
} stud;
Now you can declare:

stud s1, s2;
printf("Enter details of s1: ");
printf("%s", s1.roll);
printf("%s", s1.fname);
printf("%s", s1.lname);

Comparing GPAs (Structure Example)
if (s1.gpa > s2.gpa) {
    printf("%s – topper", s1.fname);
}
else if (s1.gpa < s2.gpa) {
    printf("%s – topper", s2.fname);
}
else {
    printf("Both are toppers");
}

Pointer to Structure
student s1, s2;
student *p, *q;

p = &s1;
q = &s2;

s1.rno = p->rno;
s1.fname = p->fname;

DMA (Dynamic Memory Allocation) with Structure
student *p;

p = (student *) malloc(sizeof(student));

q = (student *) malloc(sizeof(student));


Memory Layout Example (Conceptual):

p  →  [ rno | fname | lname | gpa | age | cno ]

Union Concept
Size Rule

The size of a union is equal to the size of its largest member.

Example Union
union student {
    char rno[20];
    char fname[50];
    char lname[30];
    double gpa;
    int age;
    long long int cno;
} s1;


Largest member:
fname[50] (50 bytes)

So, union size = size of fname[50].

Diagram (concept):

Union size
(maximum-sized member)

Structure vs Union
Feature	Structure	Union
Size	Sum of sizes of all members	Size of the largest member
Memory Access	All members can be accessed at any time	Only the last modified member is valid
Enumeration (enum)

A collection of integer constants.

Example:
const int a = 0;
const int b = 1;
const int z = 25;


Equivalent enum:
enum alpha { a, b, c, d, e, f, ..., w, x, y, z };
Declaring a variable:
enum alpha myAlphabet = a;
printf("%d", myAlphabet + 1);
Slope Function
void slope(struct point A, struct point B) {

    float m = (A.y - B.y) / (B.x - A.x);

    printf("%.2f", m);
}

//Main Function Example
int main() {
    struct point A, B;

    printf("%d %d %d %d", &A.x, &A.y, &B.x, &B.y);

    distance(A, B);
    slope(A, B);

    struct point C = midpoint(A, B);

    printf("(%.2f, %.2f)", C.x, C.y);

    return 0;
}

//Circular Linked List
Definition

In a circular linked list,
the last node's next pointer points back to the first node, forming a circle.

Diagram
  [9 | 20] → [5 | 30] → [7 | 10]
       ↑                    ↓
       └────────────────────┘

//Creating a Node
node *newNode = (node *) malloc(sizeof(node));

newNode->value = value;
newNode->next  = NULL;   // creation of node

//Insert Operations
Insert at Beginning
newNode->next = tail->next;
tail->next = newNode;

Insert at End
newNode->next = tail->next;
tail->next = newNode;
tail = newNode;

//Delete Operations
Delete First Node
node *target = tail->next;

tail->next = target->next;
target->next = NULL;

free(target);

Delete Last Node
node *temp = tail->next;

while (temp->next != tail) {
    temp = temp->next;
}

node *target = temp->next;
temp->next = tail->next;
free(target);
tail = temp;

*/
