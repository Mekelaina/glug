mod tokens;
use tokens::*;


fn parse(text: String) -> Vec<Token>{
    let mut toks: Vec<Token> = Vec::new();

    let mut buffer: String = String::from("");

    let mut col: i16 = 0;
    let line: i16 = 1;

    for c in text.chars(){
        match c {
            x if x.is_whitespace() => {
                
            }
            '(' => {
                if buffer != ""{
                    toks.push(Token{ttype: TokenType::TFunCall, value: buffer, line: line, column: col});
                    buffer = "".to_string();
                }
                toks.push(Token{ttype: TokenType::TLParen, value: "(".to_string(), line: line, column: col});
            }
            ')' => {
                toks.push(Token{ttype: TokenType::TRParen, value: ")".to_string(), line: line, column: col});
            }
            ';' => {
                toks.push(Token{ttype: TokenType::TSemicolon, value: ";".to_string(), line: line, column: col});
            }
            x if x.is_digit(10) => {
                toks.push(Token{ttype: TokenType::TIntLit, value: c.to_string(), line: line, column: col});
            }
            _ => {
                buffer.push(c);
            }
        }
        col += 1;
    }


    return toks;
}



fn main() {
    let input: String = String::from("quit(0);");
    let toks: Vec<Token> = parse(input);
    println!("{:?}", toks);
}