document.getElementById('calculate').addEventListener('click', function() {
    const operation = parseInt(document.getElementById('operation').value);
    const num1 = parseFloat(document.getElementById('num1').value);
    const num2 = parseFloat(document.getElementById('num2').value);
    let result;

    if (isNaN(num1) || isNaN(num2)) {
        alert('Por favor, insira números válidos.');
        return;
    }

    switch (operation) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 !== 0) {
                result = num1 / num2;
            } else {
                alert('Erro: Divisão por zero!');
                return;
            }
            break;
        default:
            alert('Opção inválida!');
            return;
    }

    document.getElementById('result').innerText = `Resultado: ${result}`;
});

document.getElementById('exit').addEventListener('click', function() {
    window.close();
});
