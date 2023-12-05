#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include<math.h>

struct Node {
    int coef;
    int exp;
    struct Node* next;
};

typedef struct Node Node;

struct Polynomial {
    int poly_id;
    Node* head;
};

typedef struct Polynomial Polynomial;

Node* createNode(int coef, int exp) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

Polynomial* createPolynomial(int poly_id) {
    Polynomial* newPoly = (Polynomial*)malloc(sizeof(Polynomial));
    newPoly->poly_id = poly_id;
    newPoly->head = NULL;
    return newPoly;
}

void addTerm(Polynomial* poly, int coef, int exp) {
    Node* newNode = createNode(coef, exp);

    if (poly->head == NULL || exp > poly->head->exp) {
        newNode->next = poly->head;
        poly->head = newNode;
    } else if (exp == poly->head->exp) {
        poly->head->coef += coef;
        free(newNode);
    } else {
        Node* temp = poly->head;
        while (temp->next != NULL && temp->next->exp > exp) {
            if (temp->next->exp == exp) {
                temp->next->coef += coef;
                free(newNode);
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int evaluatePoly(Polynomial* poly, int variable_value) {
    int result = 0;
    Node* current = poly->head;

    while (current != NULL) {
        result += current->coef * pow(variable_value, current->exp);
        current = current->next;
    }

    return result;
}

Polynomial* addPoly(Polynomial* poly1, Polynomial* poly2, int result_poly_id) {
    Polynomial* resultPoly = createPolynomial(result_poly_id);
    Node* current1 = poly1->head;
    Node* current2 = poly2->head;

    while (current1 != NULL && current2 != NULL) {
        if (current1->exp > current2->exp) {
            addTerm(resultPoly, current1->coef, current1->exp);
            current1 = current1->next;
        } else if (current1->exp < current2->exp) {
            addTerm(resultPoly, current2->coef, current2->exp);
            current2 = current2->next;
        } else {
            addTerm(resultPoly, current1->coef + current2->coef, current1->exp);
            current1 = current1->next;
            current2 = current2->next;
        }
    }

    while (current1 != NULL) {
        addTerm(resultPoly, current1->coef, current1->exp);
        current1 = current1->next;
    }

    while (current2 != NULL) {
        addTerm(resultPoly, current2->coef, current2->exp);
        current2 = current2->next;
    }

    return resultPoly;
}

void printPoly(Polynomial* poly) {
    Node* current = poly->head;

    while (current != NULL) {
        printf("%d %d ", current->coef, current->exp);
        current = current->next;
    }
    printf("\n");
}


void destroyPolynomial(Polynomial* poly) {
    Node* current = poly->head;
    Node* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }

    free(poly);
}

int main() {
    Polynomial* polynomials[10001] = { NULL };

    char command[20];
    while (1) {
        scanf("%s", command);

        if (strcmp(command, "Create") == 0) {
            int poly_id;
            scanf("%d", &poly_id);

            if (polynomials[poly_id] == NULL) {
                polynomials[poly_id] = createPolynomial(poly_id);
            }
        } else if (strcmp(command, "AddTerm") == 0) {
            int poly_id, coef, exp;
            scanf("%d %d %d", &poly_id, &coef, &exp);

            if (polynomials[poly_id] == NULL) {
                polynomials[poly_id] = createPolynomial(poly_id);
            }

            addTerm(polynomials[poly_id], coef, exp);
        } else if (strcmp(command, "EvaluatePoly") == 0) {
            int poly_id, variable_value;
            scanf("%d %d", &poly_id, &variable_value);

            if (polynomials[poly_id] != NULL) {
                int result = evaluatePoly(polynomials[poly_id], variable_value);
                printf("%d\n", result);
            }
        } else if (strcmp(command, "AddPoly") == 0) {
            int poly_id1, poly_id2, result_poly_id;
            scanf("%d %d %d", &poly_id1, &poly_id2, &result_poly_id);

            if (polynomials[poly_id1] != NULL && polynomials[poly_id2] != NULL) {
                polynomials[result_poly_id] = addPoly(polynomials[poly_id1], polynomials[poly_id2], result_poly_id);
            }
        } else if (strcmp(command, "PrintPoly") == 0) {
            int poly_id;
            scanf("%d", &poly_id);

            if (polynomials[poly_id] != NULL) {
                printPoly(polynomials[poly_id]);
            }
        } else if (strcmp(command, "Destroy") == 0) {
            int poly_id;
            scanf("%d", &poly_id);

            if (polynomials[poly_id] != NULL) {
                destroyPolynomial(polynomials[poly_id]);
                polynomials[poly_id] = NULL;
            }
        } else {
            return 0;
        }
    }
}
