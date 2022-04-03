#pragma once

#include <iostream>
#include <utility>

class Cliente {
public:
    Cliente(){}
    Cliente(std::string &nome, std::string &email, std::string &dataNascimento, int idade) : _nome(nome), _email(email), _dataNascimento(dataNascimento), _idade(idade) {}

    void setNome(const std::string &nome) {
        _nome = nome;
    }

    const std::string &getNome() const {
        return _nome;
    }

    void setEmail(const std::string &email) {
        _email = email;
    }

    const std::string &getEmail() const {
        return _email;
    }

    void setDataNascimento(const std::string &dataNascimento) {
        _dataNascimento = dataNascimento;
    }

    const std::string &getDataNascimento() const {
        return _dataNascimento;
    }

    int getIdade() const {
        return _idade;
    }

    void setIdade(int idade) {
        _idade = idade;
    }

private:
    std::string _nome;
    std::string _email;
    std::string _dataNascimento;
    int _idade;
};
