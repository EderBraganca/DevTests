var solution = function (s){
    s = s.replace(/\d/g, '')
    let a = s.split('')
    let qtd = []
    a.forEach(element => {
        qtd[element] = qtd[element] ? qtd[element] + 1 : 1;
    })
    qtd = Object.entries(qtd).sort((a, b) => b[1] - a[1])[0][0]
    return qtd
};


const a = "aaaaabbbasbdjsdgdbasa211111111";
const output = solution(a);
console.log(output);