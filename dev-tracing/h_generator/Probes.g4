grammar Probes;

provider: 'provider' IDENTIFIER '{' elements += probe (elements += probe)* '};' ;
probe: 'probe' IDENTIFIER '(' (args += argument (',' args += argument)*)* ');' ; 
argument: type name ;
type: POINTER_TYPE | IDENTIFIER | TYPE_WITH_SPACES ;
name: IDENTIFIER ;

IDENTIFIER : ([_a-zA-Z0-9]+) ;
POINTER_TYPE : ([_a-zA-Z0-9]+'*'+) ;
TYPE_WITH_SPACES : ('short '|'long '|'unsigned '|'signed '|'const ')(IDENTIFIER|POINTER_TYPE) ; 
WS : [ \t\r\n] -> skip ;
COMMENT : '/*' .*? '*/' -> skip ;
LINE_COMMENT : '#' ~[\r\n]* -> skip ;