
void printAddr(uint16_t addr, uint8_t col, uint8_t row);
void printByte(uint8_t val, uint8_t col, uint8_t row);

// Implements an entire 6502 address space
class AddressSpace {
  private:
    byte ram[0x1000];
    byte pia[0x14];

  public:
    uint8_t Read(uint16_t addr);

    void Write(uint16_t addr, uint8_t val);
};
