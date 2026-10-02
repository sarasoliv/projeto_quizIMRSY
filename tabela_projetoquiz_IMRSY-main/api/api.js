require("dotenv").config();
const Groq = require("groq-sdk");

const groq = new Groq({
    apiKey: process.env.GROQ_API_KEY
});

async function gerarPerguntas() {
    const args = process.argv.slice(2);
    const quantidade = args[0] || "2";
    const dificuldade = args[1] || "fácil";
    const tema = args[2] || "Therac-25";

    const prompt = `Crie exatamente ${quantidade} perguntas de quiz sobre ${tema} com dificuldade${dificuldade}. Responda APENAS em JSON no formato: {"perguntas":[{"pergunta":"Texto","alternativas":["A","B","C","D"],"respostaCorreta":0}]}`;

    try {
        const resposta = await groq.chat.completions.create({
            model: "llama-3.3-70b-versatile",
            messages: [{ role: "user", content: prompt }]
        });

        console.log(resposta.choices[0].message.content);
    } catch (erro) {
        console.log("Erro na IA");
    }
}

gerarPerguntas();