#pragma once

class QString;

class CommonInterfaces {

public:
    virtual bool ping([[maybe_unused]] const QString& portName, [[maybe_unused]] int baud, [[maybe_unused]] int addr) = 0;
    virtual bool isConnected() const { return connected_; }
    virtual void reset() { connected_ = false; }

    virtual void open(int mode) = 0;
    virtual void close() = 0;

protected:
    bool connected_ = false;
};
