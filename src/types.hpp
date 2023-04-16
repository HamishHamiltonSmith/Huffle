#pragma once
#include <string>

enum TokenType {
	FALSE, TRUE, NUL, PLUS,MINUS,EQUAL,LEFT_BR,RIGHT_BR,LEFT_SQ,RIGHT_SQ,LEFT_CURL,RIGHT_CURL,SLASH,STAR,AT,DOT,COMMA,GREATER,LESS,EXL,
	IS_EQUAL,ISN_EQUAL,GR_EQUAL,LE_EQUAL, UDV, SEMI_COL,
	IF, ELSE, ELF, FOR, WHILE, SWITCH, INTEGER, STRING, IDENTIFIER, FUNC, CLASS, AND, OR, NOT, PRINT, RETURN, EF
};

std::string convert[44] = {
	"FALSE", "TRUE", "NUL","PLUS","MINUS","EQUAL","LEFT_BR","RIGHT_BR","LEFT_SQ","RIGHT_SQ","LEFT_CURL","RIGHT_CURL","SLASH","STAR","AT","DOT","COMMA","GREATER","LESS","EXL","IS_EQUAL","ISN_EQUAL","GR_EQUAL","LE_EQUAL",
	"UDV","SEMI_COL", "IF","ELSE","ELF","FOR","WHILE","SWITCH","INTEGER","STRING","IDENTIFIER","FUNC","CLASS","AND", "OR", "NOT","PRINT","RETURN","EF"
}; 