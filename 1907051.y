/* C Declarations */

%{
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>
	#include "required.h"
	#include "function.h"
	int yyparse();
	int yylex();
	int yyerror();
	extern int yylineno;
	int isdeclared(char*);
	int addnewval(char*,int );
	int getval(char*);
	int setval(char* , int );
   
%}

%union {
  char text[1000];
  int value;
}

%token <text>  ID
%token <value>  NUMBER
%token <text> STR
%type <value> expression
%type <value> furstatement
%left LESSTHAN GREATERTHAN LESSEQUAL GREATEREQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE

%token	INT DOUBLE CHAR VOID RUN PB PE BB BE SEMICOLON COMMA ASSIGN PRINTVAR PRINTSTR PRINTLN PRINTFUNC
%token	PLUS MINUS MULTIPLY DIVIDE LESSTHAN GREATERTHAN LESSEQUAL GREATEREQUAL MOD FACT PRIME RETURN CALL WHILE
%token	IF ELSE ELSEIF FOR TO SWITCH DEFAULT COLON UDFUNCTION EQUAL NOTEQUAL LOGFUNC LOG10FUNC TANFUNC
%token	MAXNUMBER MINNUMBER ODDEVEN SUMDIGIT REVNUM COMPARE COMPAREREVERSE REVERSE SORT SINFUNC COSFUNC GCDFUNC LCMFUNC POWERFUNC

%nonassoc IFX
%nonassoc ELSE 
%nonassoc UMINUS

%%

starthere 	: function program { printf("\n\n\n-------------- Successfully executed -----------------\n\n"); }
			;
program		: RUN BB statement BE SEMICOLON
			;
statement	: /* empty */
			| statement declaration
			| statement print
			| statement expression 
			| statement ifelse
			| statement assign
			| statement forloop
			| statement whileloop
			| statement switch
			| statement loopbody  
			| statement furstatement
			| statement return
			| statement call
			;

/*--------declaration begin--------*/

declaration : type variables SEMICOLON {}
			;
type		: INT | DOUBLE | CHAR | VOID {}
			;
variables	: variable COMMA variables {}
			| variable {}
			;
variable   	: ID 							{//printf("%s\n",$1);
												int x = addnewval($1,0);
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,$1);
													exit(-1);
												}

											}
			| ID ASSIGN expression 			{//printf("%s %d\n",$1,$3);
												int x = addnewval($1,$3);
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,$1);
													exit(-1);
													}
											}
			| ID ASSIGN furstatement 			{//printf("%s %d\n",$1,$3);
												int x = addnewval($1,$3);
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,$1);
													exit(-1);
													}
											}

			;

/*-------declaration end----------*/

/*------variable assign begin-----*/

furstatement : 	  MAXNUMBER PB expression PE SEMICOLON		{ }
				| MINNUMBER PB expression PE SEMICOLON		{ }
				| SINFUNC PB expression PE SEMICOLON 		{ printf("%lf\n",sin( $3*3.1416/180)); }
				| COSFUNC PB expression PE SEMICOLON 		{ printf("%lf\n",cos( $3*3.1416/180)); }
				| TANFUNC PB expression PE SEMICOLON		{ printf("%lf\n",tan( $3*3.1416/180)); }
				| LOG10FUNC PB expression PE SEMICOLON		{ printf("%lf\n",(log( $3*1.0)/log(10.0))); }
				| LOGFUNC PB expression PE SEMICOLON		{ printf("%lf\n",(log( $3)));}
				| PB expression  PE SEMICOLON				{ $$=$2;}
				| FACT PB expression PE SEMICOLON			{ factorial($3); }
			    | PRIME PB expression PE SEMICOLON			{ checkforprime($3); }
                                                            				                                        
				| ODDEVEN PB expression PE SEMICOLON			{ checkforoddeven($3); }
				| SUMDIGIT PB expression PE SEMICOLON			{ sumofdigits($3); }
				| REVNUM PB expression PE SEMICOLON			{ reversenumber($3); }
				| REVERSE PB STR PE SEMICOLON				{ reversestr($3); }
				| SORT PB STR PE SEMICOLON					{ int l = strlen($3);
																int i,j;
																for(i=1; i<l-1; i++)
																{
																	for(j=i+1; j<l-1; j++)
																	{
																		if($3[i] > $3[j])
																		{
																			char temp     = $3[i];
																			$3[i] = $3[j];
																			$3[j] = temp;
																		}
																	}
																}
																for(i = 1;  i < l-1; i++) 
																	printf("%c",$3[i]);
															}
				;


assign : ID ASSIGN expression SEMICOLON 					{	if(!isdeclared($1)) {
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,$1);
																	exit(-1);
																}
																else{
																	setval($1,$3);
																}
															}
		|ID ASSIGN furstatement SEMICOLON 					{	if(!isdeclared($1)) {
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,$1);
																	exit(-1);
																}
																else{
																	setval($1,$3);
																}
															}
		;

/*------variable assign end-------*/


/*--------print begin----------*/

print		: PRINTVAR PB ID PE SEMICOLON 					{	if( isdeclared($3) ){
																	printf("%d",getval($3));
																}
																else{
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,$3);
																	exit(-1);
																}
															}
			| PRINTSTR PB STR PE SEMICOLON 				{	int i,l = strlen($3);
															for(i = 1;  i < l-1; i++) {
																	printf("%c",$3[i]); }
															}
			| PRINTLN PB PE SEMICOLON 						{	printf("\n");}
			
			| PRINTFUNC furstatement
			;

ifbody	: /* empty */
			| ifbody ifstatement
			;


ifstatement		: PRINTVAR PB ID PE SEMICOLON 				{	pop++;
																if(!isdeclared($3)){
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,$3);
																	exit(-1);
																}
																else{
																	check=1;
																	v1[pop] = getval($3);
																}							
															}
				| PRINTSTR PB STR PE SEMICOLON 			{	pop++;
																check=2;
																strcpy(keep[pop],$3);	
															}
			| PRINTLN PB PE	SEMICOLON 						{	pop++;
																check=3;
															}
			;
			
loopbody	: /* empty */
			| loopbody loopstatement
			;
			
loopstatement		:
			 PRINTVAR PB ID PE SEMICOLON 			{
																if(!isdeclared($3)){
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,$3);
																	exit(-1);
																}
																else{
																	check=1;
																	v1[3] = getval($3);
																}
															}
			| PRINTSTR PB STR PE SEMICOLON 				{
																check = 2;
																strcpy(keep[3],$3);
															}
			| PRINTLN PB PE	SEMICOLON 						{
																check = 3;
															}
			;


/*--------print end------------*/

/*--------expression begin--------*/

expression : NUMBER 							{ $$ = $1;}
			| ID 								{ if(!isdeclared($1)) {
														printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,$1);
														exit(-1);
													}
												  else{
													$$ = getval($1);
													}
												}
			| MINUS expression %prec UMINUS		{ $$ = -$2;}
			| expression PLUS expression 		{ $$ = $1 + $3;}
			| expression MINUS expression 		{ $$ = $1 - $3;}
			| expression MULTIPLY expression 	{ $$ = $1 * $3;}
			| expression DIVIDE expression 		{ dividefun($1,$3); }
			| expression MOD expression 		{ modfun($1,$3); }
			| expression COMPARE expression 	   { findmax($1,$3);}
			| expression COMPAREREVERSE expression { findmin($1,$3); }
			| expression GCDFUNC expression 		{ gcdfun($1,$3); }
			| expression LCMFUNC expression 		{ lcmfun($1,$3);}
			| expression POWERFUNC expression 		{ $$=powerfun($1,$3);}
			| expression LESSTHAN expression		{ $$ = $1 < $3; }
			| expression GREATERTHAN expression		{ $$ = $1 > $3; }
			| expression LESSEQUAL expression		{ $$ = $1 <= $3; }
			| expression GREATEREQUAL expression	{ $$ = $1 >= $3; }
			| expression EQUAL expression			{ $$ = $1 == $3; }
			| expression NOTEQUAL expression		{ $$ = $1 != $3; }
			| PB expression PE						{$$ = $2;}
			;


/*--------expression End--------*/


/*---------ifelse begin----------*/

ifelse 	: IF PB ifexp PE BB ifbody BE elseif		{	ifdone[ifptr] = 0;
															ifptr--;
														
															if(mark1){
																if(check==1){
																	printf("%d",v1[0]);
																}
																else if(check==2){
																	int i;
																	int l=strlen(keep[0]);
																	for(i = 1;  i < l-1; i++) 
																		printf("%c",keep[0][i]);
																}
																else{
																	printf("\n");
																}
															}
														}
		;
ifexp	: expression 								{	ifptr++;
														ifdone[ifptr] = 0;
														pop = -1;
														mark1 = 0;
														if($1){
															mark1 = 1;
															ifdone[ifptr] = 1;
														}
													}
		;
elseif 	: /* empty */
		| elseif ELSEIF PB expression PE BB ifbody BE	{	if($4 && ifdone[ifptr] == 0){
																	ifdone[ifptr] = 1;
																	if(check==1){
																		printf("%d",v1[1]);
																	}
																	else if(check==2){
																		int i;
																		int l=strlen(keep[1]);
																		for(i = 1;  i < l-1; i++) 
																			printf("%c",keep[1][i]);
																	}
																	else{
																		printf("\n");
																	}
																}
															}
		| elseif ELSE BB ifbody BE						{	if(ifdone[ifptr] == 0){
																	ifdone[ifptr] = 1;
																	if(check==1)
																	{
																		printf("%d",v1[2]);
																	}
																	else if(check==2)
																	{
																		int i;
																		int l=strlen(keep[2]);
																		for(i = 1;  i < l-1; i++) 
																			printf("%c",keep[2][i]);
																	}
																	else
																	{
																		printf("\n");
																	}
																}
															}

		;

/*---------ifelse end------------*/


/*------for loop begin----------*/


forloop	: FOR PB expression TO expression COLON expression PE BB loopbody BE 	
					{
						int start = $3;
						int end = $5;
						int dif = $7;
						int count = 0;
						int i = 0;
						finaldif=dif;
						for(i = start; i <= end; i += dif){
							count++;
						}	
						savestate = count;
						if(check==1){
							int k=0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("%d",v1[3]);
							}
						}
						else if(check==2){
							int l = strlen(keep[3]);
							int k = 0,i=0;
							for(k = 1; k <= savestate; k += finaldif){
								for(i = 1;  i < l-1; i++) { 
									printf("%c",keep[3][i]);
								}
							}
						}
						else{
							int k = 0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("\n");
							}
						}
						
					}
		;


/*------foor loop end------------*/


/* while loop begin */


whileloop	: WHILE PB expression TO expression COLON expression PE BB loopbody BE 	
					{
						int start = $3;
						int end = $5;
						int dif = $7;
						int count = 0;
						int i = 0;
						finaldif=dif;
						for(i = start; i <= end; i += dif){
							count++;
						}	
						savestate = count;
						if(check==1){
							int k=0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("%d",v1[3]);
							}
						}
						else if(check==2){
							int l = strlen(keep[3]);
							int k = 0,i=0;
							for(k = 1; k <= savestate; k += finaldif){
								for(i = 1;  i < l-1; i++) { 
									printf("%c",keep[3][i]);
								}
							}
						}
						else{
							int k = 0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("\n");
							}
						}
						
					}
		;


/* while loop end */



/*------switch case begin--------*/

switch	: SWITCH PB expswitch PE BB switchinside BE 
		;

expswitch 	:  expression 				{	switchdone = 0;
											switchvar = $1;
										}
			;


switchinside	: /* empty */
				| switchinside expression COLON BB loopbody BE 	{	if($2 == switchvar){
																			if(check==1){
																				printf("%d\n",v1[3]);
																			}
																			else if(check==2){
																				int l = strlen(keep[3]);
																				int i=0;
																				for(i = 1;  i < l-1; i++) { 
																						printf("%c",keep[3][i]);
																					}
																			}
																			else{
																				printf("\n");
																			}
																			switchdone = 1;
																		}					
																	}
				| switchinside DEFAULT COLON BB loopbody BE 		{	if(switchdone == 0){
																			if(check==1){
																				printf("%d\n",v1[3]);
																			}
																			else if(check==2){
																				int l = strlen(keep[3]);
																				int i=0;
																				for(i = 1;  i < l-1; i++) { 
																						printf("%c",keep[3][i]);
																					}
																			}
																			else{
																				printf("\n");
																			}
																			switchdone = 1;
																		}
																	}
				;


/*------switch case end----------*/

/*------function begin-----------*/

function 	: /* empty */
			| function func
			;

func 	: type UDFUNCTION PB fparameter PE BB statement BE	{	printf("User Defined found\n");  }
		;
fparameter 	: /* empty */
			| type ID fsparameter
			;
fsparameter : /* empty */
			| fsparameter COMMA type ID
			;
 


return: RETURN ID SEMICOLON { printf("Value returns\n");}
		| RETURN expression { printf("Value returns\n");}
		;


call: CALL ID PB expression COMMA expression PE SEMICOLON { printf("Summation : %d\n",($4+$6));}
/*-------function end------------*/
%%

int yyerror(char *s){
	printf( "\nError on Line %d:\n %s\n",yylineno, s);
}

