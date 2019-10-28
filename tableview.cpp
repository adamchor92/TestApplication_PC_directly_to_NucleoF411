#include "tableview.h"
#include <QStringList>

TableView::TableView(Ui::MainWindow* pUiHandle)
{
    m_pUiHandle = pUiHandle;
    m_pTableWidget = m_pUiHandle->tableWidget_FrameDisplay;
}

void TableView::initFrameDisplay()
{
    QStringList frameFieldNames;

    frameFieldNames.insert(0, "Source");
    frameFieldNames.insert(1, "Module");
    frameFieldNames.insert(2, "Function");
    frameFieldNames.insert(3, "Parameter");
    frameFieldNames.insert(4, "Sign");
    frameFieldNames.insert(5,"Length");
    frameFieldNames.insert(6,"P1");
    frameFieldNames.insert(7,"P2");
    frameFieldNames.insert(8,"P3");
    frameFieldNames.insert(9,"P4");
    frameFieldNames.insert(10,"P5");
    frameFieldNames.insert(11,"P6");
    frameFieldNames.insert(12,"P7");
    frameFieldNames.insert(13,"P8");
    frameFieldNames.insert(14,"P9");
    frameFieldNames.insert(15,"P10");
    frameFieldNames.insert(16,"CRC1");
    frameFieldNames.insert(17,"CRC2");
    frameFieldNames.insert(18,"CRC3");
    frameFieldNames.insert(19,"CRC4");

    m_pTableWidget->setColumnCount(FRAME_SIZE);

    m_pTableWidget->horizontalHeader()->setStretchLastSection(true);

    m_pTableWidget->setHorizontalHeaderLabels(frameFieldNames);

    for(int column=0; column < FRAME_SIZE; column++)
    {
        m_pTableWidget->setColumnWidth(column, 90);
    }
}

void TableView::updateFrame(uint8_t uartFrame[], bool isReceivedFrame)
{
    int rowCount = m_pTableWidget->rowCount();

    m_pTableWidget->insertRow(rowCount);

    QTableWidgetItem* source = new QTableWidgetItem(QChar(uartFrame[0]));
    source->setTextAlignment(Qt::AlignCenter);
    source->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* module = new QTableWidgetItem(QChar(uartFrame[1]));
    module->setTextAlignment(Qt::AlignCenter);
    module->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* function = new QTableWidgetItem(QChar(uartFrame[2]));
    function->setTextAlignment(Qt::AlignCenter);
    function->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* parameter = new QTableWidgetItem(QChar(uartFrame[3]));
    parameter->setTextAlignment(Qt::AlignCenter);
    parameter->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* sign = new QTableWidgetItem(QChar(uartFrame[4]));
    sign->setTextAlignment(Qt::AlignCenter);
    sign->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* length = new QTableWidgetItem(QChar(uartFrame[5]));
    length->setTextAlignment(Qt::AlignCenter);
    length->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload1 = new QTableWidgetItem(QChar(uartFrame[6]));
    payload1->setTextAlignment(Qt::AlignCenter);
    payload1->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload2 = new QTableWidgetItem(QChar(uartFrame[7]));
    payload2->setTextAlignment(Qt::AlignCenter);
    payload2->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload3 = new QTableWidgetItem(QChar(uartFrame[8]));
    payload3->setTextAlignment(Qt::AlignCenter);
    payload3->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload4 = new QTableWidgetItem(QChar(uartFrame[9]));
    payload4->setTextAlignment(Qt::AlignCenter);
    payload4->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload5 = new QTableWidgetItem(QChar(uartFrame[10]));
    payload5->setTextAlignment(Qt::AlignCenter);
    payload5->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload6 = new QTableWidgetItem(QChar(uartFrame[11]));
    payload6->setTextAlignment(Qt::AlignCenter);
    payload6->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload7 = new QTableWidgetItem(QChar(uartFrame[12]));
    payload7->setTextAlignment(Qt::AlignCenter);
    payload7->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload8 = new QTableWidgetItem(QChar(uartFrame[13]));
    payload8->setTextAlignment(Qt::AlignCenter);
    payload8->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload9 = new QTableWidgetItem(QChar(uartFrame[14]));
    payload9->setTextAlignment(Qt::AlignCenter);
    payload9->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* payload10 = new QTableWidgetItem(QChar(uartFrame[15]));
    payload10->setTextAlignment(Qt::AlignCenter);
    payload10->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* crc1 = new QTableWidgetItem(QString::number(uartFrame[16]));
    crc1->setTextAlignment(Qt::AlignCenter);
    crc1->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* crc2 = new QTableWidgetItem(QString::number(uartFrame[17]));
    crc2->setTextAlignment(Qt::AlignCenter);
    crc2->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* crc3 = new QTableWidgetItem(QString::number(uartFrame[18]));
    crc3->setTextAlignment(Qt::AlignCenter);
    crc3->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    QTableWidgetItem* crc4 = new QTableWidgetItem(QString::number(uartFrame[19]));
    crc4->setTextAlignment(Qt::AlignCenter);
    crc4->setFlags(Qt::ItemFlag::NoItemFlags | Qt::ItemFlag::ItemIsEnabled);

    m_pTableWidget->setItem(rowCount, 0, source);
    m_pTableWidget->setItem(rowCount, 1, module);
    m_pTableWidget->setItem(rowCount, 2, function);
    m_pTableWidget->setItem(rowCount, 3, parameter);
    m_pTableWidget->setItem(rowCount, 4, sign);
    m_pTableWidget->setItem(rowCount, 5, length);
    m_pTableWidget->setItem(rowCount, 6, payload1);
    m_pTableWidget->setItem(rowCount, 7, payload2);
    m_pTableWidget->setItem(rowCount, 8, payload3);
    m_pTableWidget->setItem(rowCount, 9, payload4);
    m_pTableWidget->setItem(rowCount, 10, payload5);
    m_pTableWidget->setItem(rowCount, 11, payload6);
    m_pTableWidget->setItem(rowCount, 12, payload7);
    m_pTableWidget->setItem(rowCount, 13, payload8);
    m_pTableWidget->setItem(rowCount, 14, payload9);
    m_pTableWidget->setItem(rowCount, 15, payload10);
    m_pTableWidget->setItem(rowCount, 16, crc1);
    m_pTableWidget->setItem(rowCount, 17, crc2);
    m_pTableWidget->setItem(rowCount, 18, crc3);
    m_pTableWidget->setItem(rowCount, 19, crc4);

    if(isReceivedFrame == true)
    {
        for(int column = 0; column < FRAME_SIZE; column++)
        {
            m_pTableWidget->item(rowCount, column)->setBackground(QBrush(Qt::green));
        }
    }

    m_pTableWidget->scrollToBottom();
}