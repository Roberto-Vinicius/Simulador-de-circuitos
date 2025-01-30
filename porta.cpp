#include "porta.h"

///
/// AS PORTAS
///

/// Porta NOT
ptr_Porta PortaNOT::clone() const {
    return new PortaNOT(*this);
}

std::string PortaNOT::getName() const {
    return "NT";
}

bool PortaNOT::simular(const std::vector<bool3S>& in_port) {
    if (in_port.size() == 1) {
        setOutput(~in_port[0]);
        return true;
    }
    setOutput(bool3S::UNDEF);
    return false;
}

/// Porta AND
ptr_Porta PortaAND::clone() const {
    return new PortaAND(*this);
}

std::string PortaAND::getName() const {
    return "AN";
}

bool PortaAND::simular(const std::vector<bool3S>& in_port) {
    if (!in_port.empty() && in_port.size() == static_cast<size_t>(getNumInputs())) {
        bool3S result = in_port[0];
        for (int i = 1; i < getNumInputs(); ++i) {
            result &= in_port[i];
        }
        setOutput(result);
        return true;
    }
    setOutput(bool3S::UNDEF);
    return false;
}

/// Porta NAND
ptr_Porta PortaNAND::clone() const {
    return new PortaNAND(*this);
}

std::string PortaNAND::getName() const {
    return "NA";
}

bool PortaNAND::simular(const std::vector<bool3S>& in_port) {
    if (!in_port.empty() && in_port.size() == static_cast<size_t>(getNumInputs())) {
        bool3S result = in_port[0];
        for (int i = 1; i < getNumInputs(); ++i) {
            result &= in_port[i];
        }
        setOutput(~result);
        return true;
    }
    setOutput(bool3S::UNDEF);
    return false;
}

/// Porta OR
ptr_Porta PortaOR::clone() const {
    return new PortaOR(*this);
}

std::string PortaOR::getName() const {
    return "OR";
}

bool PortaOR::simular(const std::vector<bool3S>& in_port) {
    if (!in_port.empty() && in_port.size() == static_cast<size_t>(getNumInputs())) {
        bool3S result = in_port[0];
        for (int i = 1; i < getNumInputs(); ++i) {
            result |= in_port[i];
        }
        setOutput(result);
        return true;
    }
    setOutput(bool3S::UNDEF);
    return false;
}

/// Porta NOR
ptr_Porta PortaNOR::clone() const {
    return new PortaNOR(*this);
}

std::string PortaNOR::getName() const {
    return "NO";
}

bool PortaNOR::simular(const std::vector<bool3S>& in_port) {
    if (!in_port.empty() && in_port.size() == static_cast<size_t>(getNumInputs())) {
        bool3S result = in_port[0];
        for (int i = 1; i < getNumInputs(); ++i) {
            result |= in_port[i];
        }
        setOutput(~result);
        return true;
    }
    setOutput(bool3S::UNDEF);
    return false;
}

/// Porta XOR
ptr_Porta PortaXOR::clone() const {
    return new PortaXOR(*this);
}

std::string PortaXOR::getName() const {
    return "XO";
}

bool PortaXOR::simular(const std::vector<bool3S>& in_port) {
    if (!in_port.empty() && in_port.size() == static_cast<size_t>(getNumInputs())) {
        bool3S result = in_port[0];
        for (int i = 1; i < getNumInputs(); ++i) {
            result ^= in_port[i];
        }
        setOutput(result);
        return true;
    }
    setOutput(bool3S::UNDEF);
    return false;
}

/// Porta NXOR
ptr_Porta PortaNXOR::clone() const {
    return new PortaNXOR(*this);
}

std::string PortaNXOR::getName() const {
    return "NX";
}

bool PortaNXOR::simular(const std::vector<bool3S>& in_port) {
    if (!in_port.empty() && in_port.size() == static_cast<size_t>(getNumInputs())) {
        bool3S result = in_port[0];
        for (int i = 1; i < getNumInputs(); ++i) {
            result ^= in_port[i];
        }
        setOutput(~result);
        return true;
    }
    setOutput(bool3S::UNDEF);
    return false;
}
