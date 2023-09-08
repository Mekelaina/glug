

#[derive(Debug)]
pub enum TokenType {
    TEmpty,
    TFunCall,
    TLParen,
    TRParen,
    TIntLit,
    TSemicolon
}

#[derive(Debug)]
pub struct Token{
    pub ttype: TokenType,
    pub value: String,
    pub line: i16,
    pub column: i16
}