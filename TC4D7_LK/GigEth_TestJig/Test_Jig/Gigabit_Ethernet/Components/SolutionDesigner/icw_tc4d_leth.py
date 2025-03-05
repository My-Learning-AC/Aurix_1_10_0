COLOR_BLACK = 0x000000
COLOR_BLUE  = 0x0000FF
COLOR_GREEN = 0x00CF00


lethDmaEnable_obj = [LETH_DMA_CH0_EN, LETH_DMA_CH1_EN, LETH_DMA_CH2_EN, LETH_DMA_CH3_EN, LETH_DMA_CH4_EN, LETH_DMA_CH5_EN, LETH_DMA_CH6_EN, LETH_DMA_CH7_EN]

class LethMacQueueTx:
    QUEUE_AV = 2
    QUEUE_ENABLED = 1
    QUEUE_DISABLED = 0
    QUEUE_UNINIT = -1

    macQueueTxEnable_obj = [[LETH_PORT0_MTL_TXQ0_OPERATION_MODE_TXQEN, LETH_PORT0_MTL_TXQ1_OPERATION_MODE_TXQEN, LETH_PORT0_MTL_TXQ2_OPERATION_MODE_TXQEN, LETH_PORT0_MTL_TXQ3_OPERATION_MODE_TXQEN, LETH_PORT0_MTL_TXQ4_OPERATION_MODE_TXQEN], 
                            [LETH_PORT1_MTL_TXQ0_OPERATION_MODE_TXQEN, LETH_PORT1_MTL_TXQ1_OPERATION_MODE_TXQEN, LETH_PORT1_MTL_TXQ2_OPERATION_MODE_TXQEN, LETH_PORT1_MTL_TXQ3_OPERATION_MODE_TXQEN, LETH_PORT1_MTL_TXQ4_OPERATION_MODE_TXQEN],
                            [LETH_PORT2_MTL_TXQ0_OPERATION_MODE_TXQEN, LETH_PORT2_MTL_TXQ1_OPERATION_MODE_TXQEN, LETH_PORT2_MTL_TXQ2_OPERATION_MODE_TXQEN, LETH_PORT2_MTL_TXQ3_OPERATION_MODE_TXQEN, LETH_PORT2_MTL_TXQ4_OPERATION_MODE_TXQEN],
                            [LETH_PORT3_MTL_TXQ0_OPERATION_MODE_TXQEN, LETH_PORT3_MTL_TXQ1_OPERATION_MODE_TXQEN, LETH_PORT3_MTL_TXQ2_OPERATION_MODE_TXQEN, LETH_PORT3_MTL_TXQ3_OPERATION_MODE_TXQEN, LETH_PORT3_MTL_TXQ4_OPERATION_MODE_TXQEN]]
    
    def __init__(self, portIdx_i, queueIdx_i, bridgeChannel):
        self.init = 1
        self.queueIdx_i = queueIdx_i
        self.portIdx_i = portIdx_i
        self.bridgeChannel = bridgeChannel
        self.mode = self.enableGet()
        self.gfxUpdateRequest = 0
        self.gfxQueueMode = LethMacQueueTx.QUEUE_UNINIT
        #breakpoint()
        #self.onClickEvent(self.mode)

    def enableGet(self):
        self.mode = int(self.macQueueTxEnable_obj[self.portIdx_i][self.queueIdx_i].getValue())
        self.mode = self.mode ^ 3
        if (self.mode == 3):
            self.mode = 0
        return (self.mode)

    def manualInit(self):
        #self.onClickEvent(self.mode)
        self.init = 0

class LethMacQueueRx:
    QUEUE_AV = 2
    QUEUE_ENABLED = 1
    QUEUE_DISABLED = 0
    QUEUE_UNINIT = -1

    macQueueRxEnable_obj = [[LETH_PORT0_MAC_RXQ_CTRL0_RXQ0EN, LETH_PORT0_MAC_RXQ_CTRL0_RXQ1EN],
                            [LETH_PORT1_MAC_RXQ_CTRL0_RXQ0EN, LETH_PORT1_MAC_RXQ_CTRL0_RXQ1EN],
                            [LETH_PORT2_MAC_RXQ_CTRL0_RXQ0EN, LETH_PORT2_MAC_RXQ_CTRL0_RXQ1EN],
                            [LETH_PORT3_MAC_RXQ_CTRL0_RXQ0EN, LETH_PORT3_MAC_RXQ_CTRL0_RXQ1EN]]
    
    def __init__(self, portIdx_i, queueIdx_i, bridgeChannel):
        self.init = 1
        self.queueIdx_i = queueIdx_i
        self.portIdx_i = portIdx_i
        self.bridgeChannel = bridgeChannel
        self.mode = self.enableGet()
        self.gfxUpdateRequest = 0
        self.gfxQueueMode = LethMacQueueRx.QUEUE_UNINIT
        #breakpoint()
        #self.onClickEvent(self.mode)

    def enableGet(self):
        self.mode = int(self.macQueueRxEnable_obj[self.portIdx_i][self.queueIdx_i].getValue())
        self.mode = self.mode ^ 3
        if (self.mode == 3):
            self.mode = 0
        return (self.mode)

    def manualInit(self):
        #self.onClickEvent(self.mode)
        self.init = 0

class LethMacAddress:
    macAddr_obj = [[LETH_PORT0_MAC_ADDRESS0, LETH_PORT0_MAC_ADDRESS1],
                   [LETH_PORT1_MAC_ADDRESS0, LETH_PORT1_MAC_ADDRESS1],
                   [LETH_PORT2_MAC_ADDRESS0, LETH_PORT2_MAC_ADDRESS1],
                   [LETH_PORT3_MAC_ADDRESS0, LETH_PORT3_MAC_ADDRESS1]]

    macAddrHigh_obj = [[LETH_PORT0_MAC_ADDRESS0_HIGH_VAR, LETH_PORT0_MAC_ADDRESS1_HIGH_VAR],
                       [LETH_PORT1_MAC_ADDRESS0_HIGH_VAR, LETH_PORT1_MAC_ADDRESS1_HIGH_VAR],
                       [LETH_PORT2_MAC_ADDRESS0_HIGH_VAR, LETH_PORT2_MAC_ADDRESS1_HIGH_VAR],
                       [LETH_PORT3_MAC_ADDRESS0_HIGH_VAR, LETH_PORT3_MAC_ADDRESS1_HIGH_VAR]]

    macAddrLow_obj = [[LETH_PORT0_MAC_ADDRESS0_LOW_VAR, LETH_PORT0_MAC_ADDRESS1_LOW_VAR],
                      [LETH_PORT1_MAC_ADDRESS0_LOW_VAR, LETH_PORT1_MAC_ADDRESS1_LOW_VAR],
                      [LETH_PORT2_MAC_ADDRESS0_LOW_VAR, LETH_PORT2_MAC_ADDRESS1_LOW_VAR],
                      [LETH_PORT3_MAC_ADDRESS0_LOW_VAR, LETH_PORT3_MAC_ADDRESS1_LOW_VAR]]

    macAddrMask_obj = [[LETH_PORT0_MAC_ADDRESS0_MASK_VAR, LETH_PORT0_MAC_ADDRESS1_MASK_VAR], 
                       [LETH_PORT1_MAC_ADDRESS0_MASK_VAR, LETH_PORT1_MAC_ADDRESS1_MASK_VAR],
                       [LETH_PORT2_MAC_ADDRESS0_MASK_VAR, LETH_PORT2_MAC_ADDRESS1_MASK_VAR],
                       [LETH_PORT3_MAC_ADDRESS0_MASK_VAR, LETH_PORT3_MAC_ADDRESS1_MASK_VAR]]

    def __init__(self, portIdx_i, addrIdx_i):
        self.addrIdx_i = addrIdx_i
        self.portIdx_i = portIdx_i

    def convertLethMacAddress(self, macTextObj):
        MBC = 0
        macText = macTextObj.text.upper()
        #print(macText)
        #LSB            MSB
        #00:03:19:00:01:00
        #  ^
        #  x
        x = macText.find(":")
        mac0_s = macText[:x]
        y = mac0_s.find("X")
        if (y == -1):
            mac0_i = int(mac0_s, 16)
        else:
            mac0_i = 0
            mac0_s = 'xx'
            MBC |= (1 << 0)

        x += 1
        #00:03:19:00:01:A0
        #   ^ ^
        #   x x2
        x2 = macText.find(":", x)
        mac1_s = macText[x:x2]
        y = mac1_s.find("X")
        if (y == -1):
            mac1_i = int(mac1_s, 16)
        else:
            mac1_i = 0
            mac1_s = 'xx'
            MBC |= (1 << 1)

        x = x2 + 1
        #00:03:19:00:01:00
        #      ^ ^
        #      x x2
        x2 = macText.find(":", x)
        mac2_s = macText[x:x2]
        y = mac2_s.find("X")
        if (y == -1):
            mac2_i = int(mac2_s, 16)
        else:
            mac2_i = 0
            mac2_s = 'xx'
            MBC |= (1 << 2)

        x = x2 + 1
        #00:03:19:00:01:00
        #         ^ ^
        #         x x2
        x2 = macText.find(":", x)
        mac3_s = macText[x:x2]
        y = mac3_s.find("X")
        if (y == -1):
            mac3_i = int(mac3_s, 16)
        else:
            mac3_i = 0
            mac3_s = 'xx'
            MBC |= (1 << 3)

        x = x2 + 1
        #00:03:19:00:01:00
        #            ^ ^
        #            x x2
        x2 = macText.find(":", x)
        mac4_s = macText[x:x2]
        y = mac4_s.find("X")
        if (y == -1):
            mac4_i = int(mac4_s, 16)
        else:
            mac4_i = 0
            mac4_s = 'xx'
            MBC |= (1 << 4)

        x = x2 + 1
        #00:03:19:00:01:00
        #               ^
        #               x
        mac5_s = macText[x:]
        y = mac5_s.find("X")
        if (y == -1):
            mac5_i = int(mac5_s, 16)
        else:
            mac5_i = 0
            mac5_s = 'xx'
            MBC |= (1 << 5)

        macLow = (mac3_i << 24) | (mac2_i << 16) | (mac1_i << 8) | mac0_i
        macHigh = (mac5_i << 8) | mac4_i
        
        macTextObj.text = mac0_s + ':' + mac1_s  + ':' + mac2_s  + ':' + mac3_s  + ':' + mac4_s  + ':' + mac5_s
        return macHigh, macLow, MBC
        
    def onMacAddrChange(self):
        #print('onMacAddrChange: ' + LethMacAddress.gethMacAddr_obj[self.portIdx_i][self.addrIdx_i].objectName)
        macHigh, macLow, MBC = self.convertLethMacAddress(self.macAddr_obj[self.portIdx_i][self.addrIdx_i])
        self.macAddrHigh_obj[self.portIdx_i][self.addrIdx_i].value = macHigh
        self.macAddrLow_obj[self.portIdx_i][self.addrIdx_i].value = macLow
        self.macAddrMask_obj[self.portIdx_i][self.addrIdx_i].value = MBC

class LethMac:
    MAC_ENABLED = 2
    MAC_DISABLED = 0
    
    macEnable_obj = [LETH_PORT0_EN, LETH_PORT1_EN, LETH_PORT2_EN, LETH_PORT3_EN]

    def __init__(self, portIdx_i, bridgePort):
        self.bridgePort = bridgePort
        self.portIdx_i = portIdx_i
        self.mode = self.macEnable_obj[portIdx_i].checked
        self.queueTx = [LethMacQueueTx(portIdx_i, 0, bridgePort.channelTx[0]), LethMacQueueTx(portIdx_i, 1, bridgePort.channelTx[1]), LethMacQueueTx(portIdx_i, 2, bridgePort.channelTx[2]), LethMacQueueTx(portIdx_i, 3, bridgePort.channelTx[3]), LethMacQueueTx(portIdx_i, 4, bridgePort.channelTx[4])]
#        self.queueRx = [MacQueueRx(portIdx_i, 0, bridgePort.channelRx[0]), MacQueueRx(portIdx_i, 1, bridgePort.channelRx[1]), MacQueueRx(portIdx_i, 2, bridgePort.channelRx[2]), MacQueueRx(portIdx_i, 3, bridgePort.channelRx[3]), MacQueueRx(portIdx_i, 4, bridgePort.channelRx[4]), MacQueueRx(portIdx_i, 5, bridgePort.channelRx[5]), MacQueueRx(portIdx_i, 6, bridgePort.channelRx[6]), MacQueueRx(portIdx_i, 7, bridgePort.channelRx[7])]
        self.queueRx = [LethMacQueueRx(portIdx_i, 0, bridgePort.channelRx[0]), LethMacQueueRx(portIdx_i, 1, bridgePort.channelRx[1])]
        self.addr = [LethMacAddress(portIdx_i, 0), LethMacAddress(portIdx_i, 1)]
#        for i in range(0, 8):
#            self.queueTx[i].linkQueueRx(self.queueRx[i])
#        for i in range(0, 8):
#            self.queueRx[i].linkQueueTx(self.queueTx[i])
    
    def manualInit(self):
        for idx in range(0, 5):
            self.queueTx[idx].manualInit()
        for idx in range(0, 2):
            self.queueRx[idx].manualInit()

class LethBridgeChannelTx:
    CHANNEL_ENABLED = 2
    CHANNEL_UNDEF = 1
    CHANNEL_DISABLED = 0
    CHANNEL_UNINIT = -1
    FORWARD_ENABLED = 2
    FORWARD_DISABLED = 0
    LINK_DISABLED = 0
    LINK_ENABLED = 1
    LINK_DASHED = 2
    LINK_UNINIT = -1

    channelEn_obj = [[LETH_PORT0_CTRL_REG_TXQ0_EN, LETH_PORT0_CTRL_REG_TXQ1_EN, LETH_PORT0_CTRL_REG_TXQ2_EN, LETH_PORT0_CTRL_REG_TXQ3_EN, LETH_PORT0_CTRL_REG_TXQ4_EN],
                     [LETH_PORT1_CTRL_REG_TXQ0_EN, LETH_PORT1_CTRL_REG_TXQ1_EN, LETH_PORT1_CTRL_REG_TXQ2_EN, LETH_PORT1_CTRL_REG_TXQ3_EN, LETH_PORT1_CTRL_REG_TXQ4_EN],
                     [LETH_PORT2_CTRL_REG_TXQ0_EN, LETH_PORT2_CTRL_REG_TXQ1_EN, LETH_PORT2_CTRL_REG_TXQ2_EN, LETH_PORT2_CTRL_REG_TXQ3_EN, LETH_PORT2_CTRL_REG_TXQ4_EN],
                     [LETH_PORT3_CTRL_REG_TXQ0_EN, LETH_PORT3_CTRL_REG_TXQ1_EN, LETH_PORT3_CTRL_REG_TXQ2_EN, LETH_PORT3_CTRL_REG_TXQ3_EN, LETH_PORT3_CTRL_REG_TXQ4_EN]]

    dmaMap_obj = [[LETH_PORT0_TXQ_MAP_TXQ0_MAP, LETH_PORT0_TXQ_MAP_TXQ1_MAP, LETH_PORT0_TXQ_MAP_TXQ2_MAP, LETH_PORT0_TXQ_MAP_TXQ3_MAP, LETH_PORT0_TXQ_MAP_TXQ4_MAP], 
                  [LETH_PORT1_TXQ_MAP_TXQ0_MAP, LETH_PORT1_TXQ_MAP_TXQ1_MAP, LETH_PORT1_TXQ_MAP_TXQ2_MAP, LETH_PORT1_TXQ_MAP_TXQ3_MAP, LETH_PORT1_TXQ_MAP_TXQ4_MAP],
                  [LETH_PORT2_TXQ_MAP_TXQ0_MAP, LETH_PORT2_TXQ_MAP_TXQ1_MAP, LETH_PORT2_TXQ_MAP_TXQ2_MAP, LETH_PORT2_TXQ_MAP_TXQ3_MAP, LETH_PORT2_TXQ_MAP_TXQ4_MAP],
                  [LETH_PORT3_TXQ_MAP_TXQ0_MAP, LETH_PORT3_TXQ_MAP_TXQ1_MAP, LETH_PORT3_TXQ_MAP_TXQ2_MAP, LETH_PORT3_TXQ_MAP_TXQ3_MAP, LETH_PORT3_TXQ_MAP_TXQ4_MAP]]
    
    def __init__(self, portIdx_i, channelIdx_i, dmaChannel):
        #print('++++++++++++++++++++++++++++++++++++++++++++++')
        #print('+ LethBridge.LethBridgePortTx.LethBridgeChannel.__init__ +')
        #print('++++++++++++++++++++++++++++++++++++++++++++++')
        self.init = 1
        self.channelIdx_i = channelIdx_i
        self.portIdx_i = portIdx_i
        self.dmaLinkEn_b = 0
        dmaChIdx_i = self.dmaMapGet(portIdx_i, channelIdx_i)
        #print("GethTxBrdgToDmaMapGet() = " + str(dmaChIdx_i))
        if (dmaChannel.dmaChIdx_i == dmaChIdx_i):
            self.dmaChannel = dmaChannel
        else:
            self.dmaChannel = ldma.channelTx[dmaChIdx_i]
        self.mode = self.enableGet()

    def dmaMapGet(self, portIdx_i, channelIdx_i):
        dmaChIdx_i = -1
        if (portIdx_i < 4) and (channelIdx_i < 5):
            dmaChIdx_i = self.dmaMap_obj[portIdx_i][channelIdx_i].currentIndex
        return dmaChIdx_i
        
    def enableGet(self):
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++++')
        #print('+ LethBridge.LethBridgePort.LethBridgeChannelTx.enableGet +++++')
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++++')
        self.mode = self.channelEn_obj[self.portIdx_i][self.channelIdx_i].checked
        #print('LethBridge.Port[' + str(self.portIdx_i) + '].Channel[' + str(self.channelIdx_i) + '].enableGet(' + str(self.mode) + ')')        
        if self.mode == LethBridgeChannelTx.CHANNEL_UNDEF:
            self.mode = LethBridgeChannelTx.CHANNEL_ENABLED
        return (self.mode)

    def manualInit(self):
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++')
        #print('+ LethBridge.LethBridgePort.LethBridgeChannelTx.manualInit ++')
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++')
        self.init = 0

class LethBridgeChannelRx:
    CHANNEL_ENABLED = 2
    CHANNEL_UNDEF = 1
    CHANNEL_DISABLED = 0
    CHANNEL_UNINIT = -1
    FORWARD_ENABLED = 2
    FORWARD_DISABLED = 0
    LINK_DISABLED = 0
    LINK_ENABLED = 1
    LINK_DASHED = 2
    LINK_UNINIT = -1
    
    channelEn_obj = [[LETH_PORT0_CTRL_REG_RXC0_EN, LETH_PORT0_CTRL_REG_RXC1_EN, LETH_PORT0_CTRL_REG_RXC2_EN, LETH_PORT0_CTRL_REG_RXC3_EN, LETH_PORT0_CTRL_REG_RXC4_EN, LETH_PORT0_CTRL_REG_RXC5_EN, LETH_PORT0_CTRL_REG_RXC6_EN, LETH_PORT0_CTRL_REG_RXC7_EN],
                     [LETH_PORT1_CTRL_REG_RXC0_EN, LETH_PORT1_CTRL_REG_RXC1_EN, LETH_PORT1_CTRL_REG_RXC2_EN, LETH_PORT1_CTRL_REG_RXC3_EN, LETH_PORT1_CTRL_REG_RXC4_EN, LETH_PORT1_CTRL_REG_RXC5_EN, LETH_PORT1_CTRL_REG_RXC6_EN, LETH_PORT1_CTRL_REG_RXC7_EN],
                     [LETH_PORT2_CTRL_REG_RXC0_EN, LETH_PORT2_CTRL_REG_RXC1_EN, LETH_PORT2_CTRL_REG_RXC2_EN, LETH_PORT2_CTRL_REG_RXC3_EN, LETH_PORT2_CTRL_REG_RXC4_EN, LETH_PORT2_CTRL_REG_RXC5_EN, LETH_PORT2_CTRL_REG_RXC6_EN, LETH_PORT2_CTRL_REG_RXC7_EN],
                     [LETH_PORT3_CTRL_REG_RXC0_EN, LETH_PORT3_CTRL_REG_RXC1_EN, LETH_PORT3_CTRL_REG_RXC2_EN, LETH_PORT3_CTRL_REG_RXC3_EN, LETH_PORT3_CTRL_REG_RXC4_EN, LETH_PORT3_CTRL_REG_RXC5_EN, LETH_PORT3_CTRL_REG_RXC6_EN, LETH_PORT3_CTRL_REG_RXC7_EN]]

    dmaMap_obj = [[LETH_PORT0_RXC_MAP_RXC0_MAP, LETH_PORT0_RXC_MAP_RXC1_MAP, LETH_PORT0_RXC_MAP_RXC2_MAP, LETH_PORT0_RXC_MAP_RXC3_MAP, LETH_PORT0_RXC_MAP_RXC4_MAP, LETH_PORT0_RXC_MAP_RXC5_MAP, LETH_PORT0_RXC_MAP_RXC6_MAP, LETH_PORT0_RXC_MAP_RXC7_MAP], 
                  [LETH_PORT1_RXC_MAP_RXC0_MAP, LETH_PORT1_RXC_MAP_RXC1_MAP, LETH_PORT1_RXC_MAP_RXC2_MAP, LETH_PORT1_RXC_MAP_RXC3_MAP, LETH_PORT1_RXC_MAP_RXC4_MAP, LETH_PORT1_RXC_MAP_RXC5_MAP, LETH_PORT1_RXC_MAP_RXC6_MAP, LETH_PORT1_RXC_MAP_RXC7_MAP],
                  [LETH_PORT2_RXC_MAP_RXC0_MAP, LETH_PORT2_RXC_MAP_RXC1_MAP, LETH_PORT2_RXC_MAP_RXC2_MAP, LETH_PORT2_RXC_MAP_RXC3_MAP, LETH_PORT2_RXC_MAP_RXC4_MAP, LETH_PORT2_RXC_MAP_RXC5_MAP, LETH_PORT2_RXC_MAP_RXC6_MAP, LETH_PORT2_RXC_MAP_RXC7_MAP],
                  [LETH_PORT3_RXC_MAP_RXC0_MAP, LETH_PORT3_RXC_MAP_RXC1_MAP, LETH_PORT3_RXC_MAP_RXC2_MAP, LETH_PORT3_RXC_MAP_RXC3_MAP, LETH_PORT3_RXC_MAP_RXC4_MAP, LETH_PORT3_RXC_MAP_RXC5_MAP, LETH_PORT3_RXC_MAP_RXC6_MAP, LETH_PORT3_RXC_MAP_RXC7_MAP]]

    def __init__(self, portIdx_i, channelIdx_i, dmaChannel):
        self.init = 1
        self.channelIdx_i = channelIdx_i
        self.portIdx_i = portIdx_i
        self.dmaLinkEn_b = 0
        dmaChIdx_i = self.dmaMapGet(portIdx_i, channelIdx_i)
        if (dmaChannel.dmaChIdx_i == dmaChIdx_i):
            self.dmaChannel = dmaChannel
        else:
            self.dmaChannel = ldma.channelRx[dmaChIdx_i]
        self.mode = self.enableGet()

    def dmaMapGet(self, portIdx_i, channelIdx_i):
        dmaChIdx_i = -1
        if (portIdx_i < 4) and (channelIdx_i < 8):
            dmaChIdx_i = self.dmaMap_obj[portIdx_i][channelIdx_i].currentIndex
        return dmaChIdx_i

    def enableGet(self):
        self.mode = self.channelEn_obj[self.portIdx_i][self.channelIdx_i].checked
        if self.mode == LethBridgeChannelRx.CHANNEL_UNDEF:
            self.mode = LethBridgeChannelRx.CHANNEL_ENABLED
        return (self.mode)
        
    def manualInit(self):
        self.init = 0

class LethBridgePort:
    def __init__(self, portIdx_i, dma):
        #read bridge mode, single port, or dual port
        self.portIdx_i = portIdx_i
        self.dma = dma
        
        for i in range(0, 8):
            dma.channelTx[i].bind_to(self.TriggeredByDmaTx)
            dma.channelRx[i].bind_to(self.TriggeredByDmaRx)
        self.channelTx = [LethBridgeChannelTx(portIdx_i, 0, dma.channelTx[0]), LethBridgeChannelTx(portIdx_i, 1, dma.channelTx[1]), LethBridgeChannelTx(portIdx_i, 2, dma.channelTx[2]), LethBridgeChannelTx(portIdx_i, 3, dma.channelTx[3]), LethBridgeChannelTx(portIdx_i, 4, dma.channelTx[4])]
        self.channelRx = [LethBridgeChannelRx(portIdx_i, 0, dma.channelRx[0]), LethBridgeChannelRx(portIdx_i, 1, dma.channelRx[1]), LethBridgeChannelRx(portIdx_i, 2, dma.channelRx[2]), LethBridgeChannelRx(portIdx_i, 3, dma.channelRx[3]), LethBridgeChannelRx(portIdx_i, 4, dma.channelRx[4]), LethBridgeChannelRx(portIdx_i, 5, dma.channelRx[5]), LethBridgeChannelRx(portIdx_i, 6, dma.channelRx[6]), LethBridgeChannelRx(portIdx_i, 7, dma.channelRx[7])]

    def TriggeredByDmaTx(self, dmaChIdx_i, portIdx_i):
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++++')
        #print('+ LethBridge.LethBridgePort +++++++++++++++++++++++++++++++')
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++++')
        #print('LethBridge.LethBridgePort[' + str(self.portIdx_i) + '].TriggeredByDmaTx(' + str(dmaChIdx_i) + ') for port ' + str(portIdx_i))
        if (self.portIdx_i == portIdx_i):
            for i in range(0, 8):
                self.channelTx[i].reconnectDma(dmaChIdx_i)

    def TriggeredByDmaRx(self, dmaChIdx_i, portIdx_i):
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++++')
        #print('+ LethBridge.LethBridgePort +++++++++++++++++++++++++++++++')
        #print('+++++++++++++++++++++++++++++++++++++++++++++++++++')
        #print('LethBridge.LethBridgePort[' + str(self.portIdx_i) + '].TriggeredByDmaRx(' + str(dmaChIdx_i) + ') for port ' + str(portIdx_i))
        if (self.portIdx_i == portIdx_i):
            for i in range(0, 8):
                self.channelRx[i].reconnectDma(dmaChIdx_i)

class LethBridge:
    def __init__(self, dma):
        #read bridge mode, single port, or dual port
        self.brdgMode = int(LETH_ETHBR_FWD_CTRL_REG_Q_CH_MAPPING_EN.getValue())
        self.portSel = LETH_ETHBR_FWD_CTRL_REG_PORT_SEL.currentIndex
        self.port = [LethBridgePort(0, dma), LethBridgePort(1, dma), LethBridgePort(2, dma), LethBridgePort(3, dma)]
        self.dma = dma

class LethDmaChannelTx:
    CHANNEL_ENABLED = 1
    CHANNEL_DISABLED = 0
    CHANNEL_UNINIT = -1

    enable_obj = [LETH_DMA_TXCH0_EN, LETH_DMA_TXCH1_EN, LETH_DMA_TXCH2_EN, LETH_DMA_TXCH3_EN, LETH_DMA_TXCH4_EN, LETH_DMA_TXCH5_EN, LETH_DMA_TXCH6_EN, LETH_DMA_TXCH7_EN]

    def __init__(self, dmaChIdx_i):
        #print('LethDmaChannelTx[' + str(dmaChIdx_i) + '].init')
        self.init = 1
        self.dmaChIdx_i = dmaChIdx_i
        self.mode = self.enableGet()
        self._observers = []

    def handleTabHighlighting(self):
        if (int(lethDmaEnable_obj[self.dmaChIdx_i].text) == 0):
            LETH_DMA_CHANNEL_SELECT.setTabTextColor(self.dmaChIdx_i, COLOR_BLACK)
        else:
            LETH_DMA_CHANNEL_SELECT.setTabTextColor(self.dmaChIdx_i, COLOR_GREEN)

    def enableGet(self):
        self.mode = int(LethDmaChannelTx.enable_obj[self.dmaChIdx_i].getValue())
        return (self.mode)

    def onEnableClick(self, mode):
        #print('---------------------------------------------------')
        #print('- Dma.ChannelTx -----------------------------------')
        #print('---------------------------------------------------')
        #print('LethDmaChannelTx[' + str(self.dmaChIdx_i) + '].onEnableTxClick(' + MODE_s[mode] + ')')
        #print('LethDmaChannelTx[' + str(self.dmaChIdx_i) + '].onEnableTxClick(' + str(mode) + ')')
        self.mode = mode
        if (mode == LethDmaChannelTx.CHANNEL_ENABLED):
            #print('LethDmaChannelTx[' + str(self.dmaChIdx_i) + '].mode = ENABLED')
            self.handleTabHighlighting()
        else:
            #print('LethDmaChannelTx[' + str(self.dmaChIdx_i) + '].mode = DISABLED')
            self.handleTabHighlighting()

    def manualInit(self):
        #print('---------------------------------------------------')
        #print('- Dma.LethDmaChannelTx ----------------------------------')
        #print('---------------------------------------------------')
        #print("DMA.Channel[" + str(self.dmaChIdx_i) + "].manualInit")
        #print("gethDmaTxEnable_obj[" + str(self.dmaChIdx_i) + "].checked = " + str(int(gethDmaTxEnable_obj[self.dmaChIdx_i].getValue())))
        #print("self.useCount = " + str(self.useCount))
        self.mode = self.enableGet()
        self.onEnableClick(self.mode)
        #print("self.useCount = " + str(self.useCount))
        self.init = 0
 
    def bind_to(self, callback):
        #print('bound')
        self._observers.append(callback)
        
class LethDmaChannelRx:
    CHANNEL_ENABLED = 1
    CHANNEL_DISABLED = 0
    CHANNEL_UNINIT = -1

    enable_obj = [LETH_DMA_RXCH0_EN, LETH_DMA_RXCH1_EN, LETH_DMA_RXCH2_EN, LETH_DMA_RXCH3_EN, LETH_DMA_RXCH4_EN, LETH_DMA_RXCH5_EN, LETH_DMA_RXCH6_EN, LETH_DMA_RXCH7_EN]

    def __init__(self, dmaChIdx_i):
        #print('LethDmaChannelRx[' + str(dmaChIdx_i) + '].init')
        self.init = 1
        self.dmaChIdx_i = dmaChIdx_i
        self.mode = self.enableGet()
        self._observers = []

    def enableGet(self):
        self.mode = int(LethDmaChannelRx.enable_obj[self.dmaChIdx_i].getValue())
        return (self.mode)

    def handleTabHighlighting(self):
        if (int(lethDmaEnable_obj[self.dmaChIdx_i].text) == 0):
            LETH_DMA_CHANNEL_SELECT.setTabTextColor(self.dmaChIdx_i, COLOR_BLACK)
        else:
            LETH_DMA_CHANNEL_SELECT.setTabTextColor(self.dmaChIdx_i, COLOR_GREEN)
            
    def onEnableClick(self, mode):
        #print('---------------------------------------------------')
        #print('- Dma.ChannelRx -----------------------------------')
        #print('---------------------------------------------------')
        #print('LethDmaChannelRx[' + str(self.dmaChIdx_i) + '].onEnableClick(' + MODE_s[mode] + ')')
        #print('LethDmaChannelRx[' + str(self.dmaChIdx_i) + '].onEnableClick(' + str(mode) + ')')
        self.mode = mode
        if (mode == LethDmaChannelRx.CHANNEL_ENABLED):
            #print('LethDmaChannelRx[' + str(self.dmaChIdx_i) + '].mode = ENABLED')
            self.handleTabHighlighting()
        else:
            #print('LethDmaChannelRx[' + str(self.dmaChIdx_i) + '].mode = DISABLED')
            self.handleTabHighlighting()

    def manualInit(self):
        #print('---------------------------------------------------')
        #print('- Dma.LethDmaChannelRx --------------------------------')
        #print('---------------------------------------------------')
        #print("DMA.ChannelRx[" + str(self.dmaChIdx_i) + "].manualInit")
        #print("gethDmaRxEnable_obj[" + str(self.dmaChIdx_i) + "].checked = " + str(int(gethDmaRxEnable_obj[self.dmaChIdx_i].getValue())))
        #print("self.useRxCount = " + str(self.useCount))
        self.mode = self.enableGet()
        self.onEnableClick(self.mode)
        #print("self.useRxCount = " + str(self.useCount))
        self.init = 0

    def bind_to(self, callback):
        #print('bound')
        self._observers.append(callback)

class LethDma:
    def __init__(self):
        self.channelTx = [LethDmaChannelTx(0), LethDmaChannelTx(1), LethDmaChannelTx(2), LethDmaChannelTx(3), LethDmaChannelTx(4), LethDmaChannelTx(5), LethDmaChannelTx(6), LethDmaChannelTx(7)]
        self.channelRx = [LethDmaChannelRx(0), LethDmaChannelRx(1), LethDmaChannelRx(2), LethDmaChannelRx(3), LethDmaChannelRx(4), LethDmaChannelRx(5), LethDmaChannelRx(6), LethDmaChannelRx(7)]

def Save_Leth_Disclaimer(file, filename):
    file.write("/**\n")
    file.write(" * \\file " + filename + "\n")
    file.write(" * \\brief Functions to interface to the Geth MAC\n")
    file.write(" *\n")
    file.write(" * \\copyright Copyright (c) 2019-2020 Infineon Technologies AG. All rights reserved.\n")
    file.write(" *\n")
    file.write(" *\n")
    file.write(" *                                 IMPORTANT NOTICE\n")
    file.write(" *\n")
    file.write(" *\n")
    file.write(" * Use of this file is subject to the terms of use agreed between (i) you or\n")
    file.write(" * the company in which ordinary course of business you are acting and (ii)\n")
    file.write(" * Infineon Technologies AG or its licensees. If and as long as no such\n")
    file.write(" * terms of use are agreed, use of this file is subject to following:\n")
    file.write("\n")
    file.write("\n")
    file.write(" * Boost Software License - Version 1.0 - August 17th, 2003\n")
    file.write("\n")
    file.write(" * Permission is hereby granted, free of charge, to any person or\n")
    file.write(" * organization obtaining a copy of the software and accompanying\n")
    file.write(" * documentation covered by this license (the \"Software\") to use, reproduce,\n")
    file.write(" * display, distribute, execute, and transmit the Software, and to prepare\n")
    file.write(" * derivative works of the Software, and to permit third-parties to whom the\n")
    file.write(" * Software is furnished to do so, all subject to the following:\n")
    file.write("\n")
    file.write(" * The copyright notices in the Software and this entire statement, including\n")
    file.write(" * the above license grant, this restriction and the following disclaimer, must\n")
    file.write(" * be included in all copies of the Software, in whole or in part, and all\n")
    file.write(" * derivative works of the Software, unless such copies or derivative works are\n")
    file.write(" * solely in the form of machine-executable object code generated by a source\n")
    file.write(" * language processor.\n")
    file.write("\n")
    file.write(" * THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n")
    file.write(" * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n")
    file.write(" * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT\n")
    file.write(" * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE\n")
    file.write(" * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,\n")
    file.write(" * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER\n")
    file.write(" * DEALINGS IN THE SOFTWARE.\n")
    file.write(" */\n")
    file.write("\n")

def Save_Leth_IncludeGuardOpen(file, text):
    file.write("#ifndef " + text + "\n")
    file.write("#define " + text + "\n")
    file.write("\n")
    file.write("#include \"types.h\"\n")
    file.write("\n")

def Save_Leth_IncludeGuardClose(file, text):
    file.write("#endif /* " + text + " */ \n")
    file.write("\n")

def Save_Leth_Prot_C_Objects():
    file = open("leth_prot_a.c", "w")
    
    Save_Leth_Disclaimer(file, "leth_prot_a.c")
    file.write("#include \"types.h\"\n")
    file.write("#include \"tc4d_leth_prot_cfg.h\"\n")
    file.write("#include \"leth_prot_a.h\"\n\n")
    
    file.write("/* MAC/DMA Access Protection */\n")
    file.write("const uint32 LETH_ACCENn_WRA[] = {")
    for i in range(0, 8):
        obj_s = "LETH_ACCENCH" + str(i) + "_WRA"
        file.write(obj_s)
        if i < 7:
            file.write(", ")
    file.write("};\n")
    file.write("const uint32 LETH_ACCENn_WRB[] = {")
    for i in range(0, 8):
        obj_s = "LETH_ACCENCH" + str(i) + "_WRB"
        file.write(obj_s)
        if i < 7:
            file.write(", ")
    file.write("};\n")
    file.write("const uint32 LETH_ACCENn_RDA[] = {")
    for i in range(0, 8):
        obj_s = "LETH_ACCENCH" + str(i) + "_RDA"
        file.write(obj_s)
        if i < 7:
            file.write(", ")
    file.write("};\n")
    file.write("const uint32 LETH_ACCENn_RDB[] = {")
    for i in range(0, 8):
        obj_s = "LETH_ACCENCH" + str(i) + "_RDB"
        file.write(obj_s)
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("\n")
    file.close()

def Save_Leth_Dma_C_Objects():
    file = open("leth_dma_a.c", "w")
    
    Save_Leth_Disclaimer(file, "leth_dma_a.c")
    file.write("#include \"types.h\"\n")
    file.write("#include \"tc4d_leth_dma_cfg.h\"\n")
    file.write("#include \"leth_dma_a.h\"\n\n")
    
    file.write("/* descriptor type per DMA channel, 0 = normal descriptor, 1 = normal + context descriptor*/\n")
    file.write("const uint8 LETH_DMA_TX_DESC_TYPE_LIST[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_TX_DESC_TYPE'
        idx = globals()[objObject].currentIndex
        file.write(str(idx))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* descriptor type per DMA channel, 0 = normal descriptor, 1 = normal + context descriptor*/\n")
    file.write("const uint8 LETH_DMA_RX_DESC_TYPE_LIST[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_RX_DESC_TYPE'
        idx = globals()[objObject].currentIndex
        file.write(str(idx))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* time stamping enabled per DMA channel, 0 = disabled, 1 = enabled*/\n")
    file.write("const uint8 LETH_DMA_TS_EN[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_TS_EN'
        if (globals()[objObject].checked == True):
            idx = 1
        else:
            idx = 0
        file.write(str(idx))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* tx interrupt enabled per DMA channel, 0 = disabled, 1 = enabled*/\n")
    file.write("const uint8 LETH_DMA_INT_TIE[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_INTERRUPT_ENABLE_TIE'
        if (globals()[objObject].checked == True):
            idx = 1
        else:
            idx = 0
        file.write(str(idx))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* rx interrupt enabled per DMA channel, 0 = disabled, 1 = enabled*/\n")
    file.write("const uint8 LETH_DMA_INT_RIE[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_INTERRUPT_ENABLE_RIE'
        if (globals()[objObject].checked == True):
            idx = 1
        else:
            idx = 0
        file.write(str(idx))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* DMA Tx channel enabled, 0 = disabled, 1 = enabled*/\n")
    file.write("const uint8 LETH_DMA_TXCH_EN[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_TXCH' + str(i) + '_EN'
        idx = globals()[objObject].getValue()
        file.write(str(idx))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* DMA Rx channel enabled, 0 = disabled, 1 = enabled*/\n")
    file.write("const uint8 LETH_DMA_RXCH_EN[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_RXCH' + str(i) + '_EN'
        idx = globals()[objObject].getValue()
        file.write(str(idx))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* DMA Tx TDES2.VTIR */\n")
    file.write("const uint8 LETH_DMA_TX_TDES2_VTIR[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_TDES2_VTIR'
        value = globals()[objObject].currentIndex
        file.write(str(value))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* DMA Tx CTXT.TDES3.VT */\n")
    file.write("const uint16 LETH_DMA_TX_CDES3_VT[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_CDES3_VT'
        value = globals()[objObject].value
        file.write(str(value))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* DMA Tx channel buffer size */\n")
    file.write("const uint16 LETH_DMA_TX_BUFFER_SIZE[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_TX_BUFFER_SIZE'
        value = globals()[objObject].value
        file.write(str(value))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* DMA Rx channel buffer size */\n")
    file.write("const uint16 LETH_DMA_RX_BUFFER_SIZE[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_RX_BUFFER_SIZE'
        value = globals()[objObject].value
        file.write(str(value))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("/* DMA Tx TDES3.SAIC */\n")
    file.write("const uint8 LETH_DMA_TX_TDES3_SAIC[] = {")
    for i in range(0, 8):
        objObject = 'LETH_DMA_CH' + str(i) + '_TX_DESC_SAIC'
        value = globals()[objObject].currentIndex
        file.write(str(value))
        if i < 7:
            file.write(", ")
    file.write("};\n")

    file.write("\n")
    file.close()

def Save_Leth_Prot_H_Objects():
    file = open("leth_prot_a.h", "w")
    
    Save_Leth_Disclaimer(file, "leth_prot_a.h")
    Save_Leth_IncludeGuardOpen(file, "LETH_PROT_A_H");
    
    file.write("/* MAC/DMA Access Protection */\n")
    file.write("extern const uint32 LETH_ACCENn_WRA[];\n")
    file.write("extern const uint32 LETH_ACCENn_WRB[];\n")
    file.write("extern const uint32 LETH_ACCENn_RDA[];\n")
    file.write("extern const uint32 LETH_ACCENn_RDB[];\n")

    file.write("\n")
    Save_Leth_IncludeGuardClose(file, "LETH_PROT_A_H");
    file.close()

def Save_Leth_Dma_H_Objects():
    file = open("leth_dma_a.h", "w")
    
    Save_Leth_Disclaimer(file, "leth_dma_a.h")
    Save_Leth_IncludeGuardOpen(file, "LETH_DMA_A_H");
    
    file.write("/* descriptor type per DMA channel, 0 = normal descriptor, 1 = normal + context descriptor*/\n")
    file.write("extern const uint8 LETH_DMA_TX_DESC_TYPE_LIST[];\n")

    file.write("/* descriptor type per DMA channel, 0 = normal descriptor, 1 = normal + context descriptor*/\n")
    file.write("extern const uint8 LETH_DMA_RX_DESC_TYPE_LIST[];\n")

    file.write("/* time stamping enabled per DMA channel, 0 = disabled, 1 = enabled*/\n")
    file.write("extern const uint8 LETH_DMA_TS_EN[];\n")

    file.write("/* tx interrupt enabled per DMA channel, 0 = disabled, 1 = enabled*/\n")
    file.write("extern const uint8 LETH_DMA_INT_TIE[];\n")

    file.write("/* rx interrupt enabled per DMA channel, 0 = disabled, 1 = enabled*/\n")
    file.write("extern const uint8 LETH_DMA_INT_RIE[];\n")

    file.write("/* DMA Tx channel enabled, 0 = disabled, 1 = enabled*/\n")
    file.write("extern const uint8 LETH_DMA_TXCH_EN[];\n")

    file.write("/* DMA Rx channel enabled, 0 = disabled, 1 = enabled*/\n")
    file.write("extern const uint8 LETH_DMA_RXCH_EN[];\n")

    file.write("/* DMA Tx TDES2.VTIR */\n")
    file.write("extern const uint8 LETH_DMA_TX_TDES2_VTIR[];\n")

    file.write("/* DMA Tx CTXT.TDES3.VT */\n")
    file.write("extern const uint16 LETH_DMA_TX_CDES3_VT[];\n")

    file.write("/* DMA Tx channel buffer size */\n")
    file.write("extern const uint16 LETH_DMA_TX_BUFFER_SIZE[];\n")

    file.write("/* DMA Rx channel buffer size */\n")
    file.write("extern const uint16 LETH_DMA_RX_BUFFER_SIZE[];\n")

    file.write("/* DMA Tx TDES3.SAIC */\n")
    file.write("extern const uint8 LETH_DMA_TX_TDES3_SAIC[];\n")

    file.write("\n")
    Save_Leth_IncludeGuardClose(file, "LETH_DMA_A_H");
    file.close()

def Save_Leth_Mac_H_Objects():
    file = open("leth_mac_a.h", "w")
    
    Save_Leth_Disclaimer(file, "leth_mac_a.h")
    Save_Leth_IncludeGuardOpen(file, "LETH_MAC_A_H");
    
    file.write("/* broadcast default address */\n")
    file.write("extern const uint8 g_lethBroadCast_a[6];\n\n")
    
    file.write("/* MAC0 addresses */\n")
    file.write("extern const uint8 LETH_MAC0_ADDR[][6];\n")
    file.write("\n")

    for i in range(0, 2):
        file.write("#define LETH_MAC0_ADDR" + str(i) + " {")
        objObject = 'LETH_PORT0_MAC_ADDRESS' + str(i)
        addr_s = globals()[objObject].text
        
        addr_s = addr_s.replace('x', 'F', 8) 
        addr_s = '0x' + addr_s
        addr_s = addr_s.replace(':', ', 0x', 7) 
        file.write(addr_s)
        file.write("}\n")
    file.write("\n")

    file.write("/* MAC1 addresses */\n")
    file.write("extern const uint8 LETH_MAC1_ADDR[][6];\n")
    file.write("\n")
    for i in range(0, 2):
        file.write("#define LETH_MAC1_ADDR" + str(i) + " {")
        objObject = 'LETH_PORT1_MAC_ADDRESS' + str(i)
        addr_s = globals()[objObject].text
        
        addr_s = addr_s.replace('x', 'F', 8) 
        addr_s = '0x' + addr_s
        addr_s = addr_s.replace(':', ', 0x', 7) 
        file.write(addr_s)
        file.write("}\n")
    file.write("\n")

    file.write("/* MAC2 addresses */\n")
    file.write("extern const uint8 LETH_MAC2_ADDR[][6];\n")
    file.write("\n")
    for i in range(0, 2):
        file.write("#define LETH_MAC2_ADDR" + str(i) + " {")
        objObject = 'LETH_PORT2_MAC_ADDRESS' + str(i)
        addr_s = globals()[objObject].text
        
        addr_s = addr_s.replace('x', 'F', 8) 
        addr_s = '0x' + addr_s
        addr_s = addr_s.replace(':', ', 0x', 7) 
        file.write(addr_s)
        file.write("}\n")
    file.write("\n")

    file.write("/* MAC3 addresses */\n")
    file.write("extern const uint8 LETH_MAC3_ADDR[][6];\n")
    file.write("\n")
    for i in range(0, 2):
        file.write("#define LETH_MAC3_ADDR" + str(i) + " {")
        objObject = 'LETH_PORT3_MAC_ADDRESS' + str(i)
        addr_s = globals()[objObject].text
        
        addr_s = addr_s.replace('x', 'F', 8) 
        addr_s = '0x' + addr_s
        addr_s = addr_s.replace(':', ', 0x', 7) 
        file.write(addr_s)
        file.write("}\n")
    file.write("\n")

    file.write("\n")
    objObject = 'LETH_PORT0_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT0_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC0 EST GCL */\n")
        file.write("extern const uint32 LETH_PORT0_MTL_EST_GCL_DATA[];\n")
            
    objObject = 'LETH_PORT1_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT1_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC1 EST GCL */\n")
        file.write("extern const uint32 LETH_PORT1_MTL_EST_GCL_DATA[];\n")

    objObject = 'LETH_PORT2_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT2_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC2 EST GCL */\n")
        file.write("extern const uint32 LETH_PORT2_MTL_EST_GCL_DATA[];\n")

    objObject = 'LETH_PORT3_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT3_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC3 EST GCL */\n")
        file.write("extern const uint32 LETH_PORT3_MTL_EST_GCL_DATA[];\n")

    file.write("\n")

    Save_Leth_IncludeGuardClose(file, "LETH_MAC_A_H");
    file.close()

def Save_Leth_Mac_C_Objects():
    file = open("leth_mac_a.c", "w")
    
    Save_Leth_Disclaimer(file, "leth_mac_a.c")
    
    file.write("#include \"types.h\"\n")
    file.write("#include \"leth_mac_a.h\"\n")
    file.write("#include \"tc4d_leth_mac_cfg.h\"\n")
    file.write("\n")
    file.write("/* broadcast default address */\n")
    file.write("const uint8 g_lethBroadCast_a[6] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};\n\n")
    
    file.write("/* MAC0 addresses */\n")
    file.write("const uint8 LETH_MAC0_ADDR[][6] = {")
    objObject = 'LETH_PORT0_MAC_ADDRESS0'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write(",  /* MAC0 Address 0 */ \n")
    objObject = 'LETH_PORT0_MAC_ADDRESS1'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("                                   ")
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write("}; /* MAC0 Address 1 */ \n")

    file.write("/* MAC1 addresses */\n")
    file.write("const uint8 LETH_MAC1_ADDR[][6] = {")
    objObject = 'LETH_PORT1_MAC_ADDRESS0'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write(",  /* MAC1 Address 0 */ \n")
    objObject = 'LETH_PORT1_MAC_ADDRESS1'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("                                   ")
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write("}; /* MAC1 Address 1 */ \n")

    file.write("/* MAC2 addresses */\n")
    file.write("const uint8 LETH_MAC2_ADDR[][6] = {")
    objObject = 'LETH_PORT2_MAC_ADDRESS0'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write(",  /* MAC2 Address 0 */ \n")
    objObject = 'LETH_PORT2_MAC_ADDRESS1'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("                                   ")
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write("}; /* MAC2 Address 1 */ \n")

    file.write("/* MAC3 addresses */\n")
    file.write("const uint8 LETH_MAC3_ADDR[][6] = {")
    objObject = 'LETH_PORT3_MAC_ADDRESS0'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write(",  /* MAC3 Address 0 */ \n")
    objObject = 'LETH_PORT3_MAC_ADDRESS1'
    addr_s = globals()[objObject].text
    addr_s = addr_s.replace('x', 'F') 
    addr_s = '0x' + addr_s
    addr_s = addr_s.replace(':', ', 0x', 7)
    file.write("                                   ")
    file.write("{")
    file.write(addr_s)
    file.write("}")
    file.write("}; /* MAC3 Address 1 */ \n")

    file.write("\n")
    objObject = 'LETH_PORT0_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT0_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC0 EST GCL */\n")
        file.write("const uint32 LETH_PORT0_MTL_EST_GCL_DATA[" + str(maxCnt) + "] = {")
        for i in range(0, 10):
            objObject = 'LETH_PORT0_MTL_EST_GCL_IDX' + str(i) + '_EN'
            if globals()[objObject].checked == 1:
                if maxCnt > 1:
                    file.write("LETH_PORT0_MTL_EST_GCL_DATA" + str(i) + ", ")
                else:
                    file.write("LETH_PORT0_MTL_EST_GCL_DATA" + str(i) + "};\n")
                maxCnt-=1
            
    file.write("\n")
    objObject = 'LETH_PORT1_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT1_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC1 EST GCL */\n")
        file.write("const uint32 LETH_PORT1_MTL_EST_GCL_DATA[" + str(maxCnt) + "] = {")
        for i in range(0, 10):
            objObject = 'LETH_PORT1_MTL_EST_GCL_IDX' + str(i) + '_EN'
            if globals()[objObject].checked == 1:
                if maxCnt > 1:
                    file.write("LETH_PORT1_MTL_EST_GCL_DATA" + str(i) + ", ")
                else:
                    file.write("LETH_PORT1_MTL_EST_GCL_DATA" + str(i) + "};\n")
                maxCnt-=1

    file.write("\n")
    objObject = 'LETH_PORT2_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT2_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC2 EST GCL */\n")
        file.write("const uint32 LETH_PORT2_MTL_EST_GCL_DATA[" + str(maxCnt) + "] = {")
        for i in range(0, 10):
            objObject = 'LETH_PORT2_MTL_EST_GCL_IDX' + str(i) + '_EN'
            if globals()[objObject].checked == 1:
                if maxCnt > 1:
                    file.write("LETH_PORT2_MTL_EST_GCL_DATA" + str(i) + ", ")
                else:
                    file.write("LETH_PORT2_MTL_EST_GCL_DATA" + str(i) + "};\n")
                maxCnt-=1

    file.write("\n")
    objObject = 'LETH_PORT3_MTL_EST_CONTROL_EEST'
    objObject2 = 'LETH_PORT3_MTL_EST_GCL_LLR'
    maxCnt = int(globals()[objObject2].text)
    if globals()[objObject].checked == 1 and  maxCnt > 0:
        file.write("/* MAC3 EST GCL */\n")
        file.write("const uint32 LETH_PORT3_MTL_EST_GCL_DATA[" + str(maxCnt) + "] = {")
        for i in range(0, 10):
            objObject = 'LETH_PORT3_MTL_EST_GCL_IDX' + str(i) + '_EN'
            if globals()[objObject].checked == 1:
                if maxCnt > 1:
                    file.write("LETH_PORT3_MTL_EST_GCL_DATA" + str(i) + ", ")
                else:
                    file.write("LETH_PORT3_MTL_EST_GCL_DATA" + str(i) + "};\n")
                maxCnt-=1

    file.close()

def Save_Leth_Handler():
    #print('Save pressed')
    Save_Leth_Dma_H_Objects()
    Save_Leth_Dma_C_Objects()
    Save_Leth_Mac_H_Objects()
    Save_Leth_Mac_C_Objects()
    Save_Leth_Prot_H_Objects()
    Save_Leth_Prot_C_Objects()
    
#print('Run icw_tc4d.py...')
application.runScript("SetOutputOptions(1)")

FILE_SAVE.connect('triggered()', Save_Leth_Handler)
#FILE_SAVE_AS.connect('triggered()', Save_Handler)

ldma = LethDma()
lbridge = LethBridge(ldma)
lmac = [LethMac(0, lbridge.port[0]), LethMac(1, lbridge.port[1]), LethMac(2, lbridge.port[2]), LethMac(3, lbridge.port[3])]

LETH_DMA_TXCH0_EN.connect('buttonClicked(int)', ldma.channelTx[0].onEnableClick)
LETH_DMA_TXCH1_EN.connect('buttonClicked(int)', ldma.channelTx[1].onEnableClick)
LETH_DMA_TXCH2_EN.connect('buttonClicked(int)', ldma.channelTx[2].onEnableClick)
LETH_DMA_TXCH3_EN.connect('buttonClicked(int)', ldma.channelTx[3].onEnableClick)
LETH_DMA_TXCH4_EN.connect('buttonClicked(int)', ldma.channelTx[4].onEnableClick)
LETH_DMA_TXCH5_EN.connect('buttonClicked(int)', ldma.channelTx[5].onEnableClick)
LETH_DMA_TXCH6_EN.connect('buttonClicked(int)', ldma.channelTx[6].onEnableClick)
LETH_DMA_TXCH7_EN.connect('buttonClicked(int)', ldma.channelTx[7].onEnableClick)

LETH_DMA_RXCH0_EN.connect('buttonClicked(int)', ldma.channelRx[0].onEnableClick)
LETH_DMA_RXCH1_EN.connect('buttonClicked(int)', ldma.channelRx[1].onEnableClick)
LETH_DMA_RXCH2_EN.connect('buttonClicked(int)', ldma.channelRx[2].onEnableClick)
LETH_DMA_RXCH3_EN.connect('buttonClicked(int)', ldma.channelRx[3].onEnableClick)
LETH_DMA_RXCH4_EN.connect('buttonClicked(int)', ldma.channelRx[4].onEnableClick)
LETH_DMA_RXCH5_EN.connect('buttonClicked(int)', ldma.channelRx[5].onEnableClick)
LETH_DMA_RXCH6_EN.connect('buttonClicked(int)', ldma.channelRx[6].onEnableClick)
LETH_DMA_RXCH7_EN.connect('buttonClicked(int)', ldma.channelRx[7].onEnableClick)

LETH_PORT0_MAC_ADDRESS0.connect('editingFinished()', lmac[0].addr[0].onMacAddrChange)
LETH_PORT0_MAC_ADDRESS1.connect('editingFinished()', lmac[0].addr[1].onMacAddrChange)
LETH_PORT1_MAC_ADDRESS0.connect('editingFinished()', lmac[1].addr[0].onMacAddrChange)
LETH_PORT1_MAC_ADDRESS1.connect('editingFinished()', lmac[1].addr[1].onMacAddrChange)
LETH_PORT2_MAC_ADDRESS0.connect('editingFinished()', lmac[2].addr[0].onMacAddrChange)
LETH_PORT2_MAC_ADDRESS1.connect('editingFinished()', lmac[2].addr[1].onMacAddrChange)
LETH_PORT3_MAC_ADDRESS0.connect('editingFinished()', lmac[3].addr[0].onMacAddrChange)
LETH_PORT3_MAC_ADDRESS1.connect('editingFinished()', lmac[3].addr[1].onMacAddrChange)

#print("*******************************")
#print("* DMA manual init             *")
#print("*******************************")
for i in range(0, 8):
    ldma.channelTx[i].manualInit()
    ldma.channelRx[i].manualInit()
#print("*******************************")
#print("* Mac0 manual init            *")
#print("*******************************")
lmac[0].manualInit()
#print("*******************************")
#print("* Mac1 manual init            *")
#print("*******************************")
lmac[1].manualInit()
#print("*******************************")
#print("* Mac2 manual init            *")
#print("*******************************")
lmac[2].manualInit()
#print("*******************************")
#print("* Mac3 manual init            *")
#print("*******************************")
lmac[3].manualInit()
