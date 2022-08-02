function verificar(){
    data = new Date()
    ano = data.getFullYear()
    fano = document.getElementById('ano')
    //fano = Number(fano.value)
    res = document.getElementById('resultado')
    if(fano.value.length==0 || Number(fano.value) > ano){
        window.alert('[ERRO] Verifique os dados e tente novamente')
    } else{
        fsex = document.getElementsByName('radiosex')
        idade = ano - Number(fano.value)
        genero = ''
        img = document.createElement('img')
        img.setAttribute('id', 'foto')
        if(fsex[0].checked){
            genero = `homem`
            if (idade<4){
                img.setAttribute('src', 'homem-bebe.png')
                document.body.style.background = '#c1bcb8'
            }
            else if(idade<15){
                img.setAttribute('src', 'homem-crianca.png') 
                document.body.style.background = '#7d7862'
            }
            else if(idade<35){
                img.setAttribute('src', 'homem-jovem.png')
                document.body.style.background = '#8ad3c8'
            }
            else if(idade<55){
                img.setAttribute('src', 'homem-adulto.png')
                document.body.style.background = '#ffc0dd'
            }
            else{
                img.setAttribute('src', 'homem-idoso.png')
                document.body.style.background = '#3b657e'
            }
        } else if(fsex[1].checked){
            genero = `mulher`
            if (idade<4){
                img.setAttribute('src', 'mulher-bebe.png')
                document.body.style.background = '#cfcfcf'
            }
            else if(idade<15){
                img.setAttribute('src', 'mulher-crianca.png') 
                document.body.style.background = '#b1c7b2'
            }
            else if(idade<35){
                img.setAttribute('src', 'mulher-jovem.png')
                document.body.style.background = '#bdc0cf'
            }
            else if(idade<55){
                img.setAttribute('src', 'mulher-adulta.png')
                document.body.style.background = '#798e87'
            }
            else{
                img.setAttribute('src', 'mulher-idosa.png')
                document.body.style.background = '#bab89f'
            }
        }
        res.style.textAlign = 'center'
        res.innerHTML = `Detectamos ${genero} com ${idade} anos<br>`
        res.appendChild(img)
    }
}