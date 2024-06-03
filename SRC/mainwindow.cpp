#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSpacerItem>

#include <array>
#include <QDragEnterEvent>

#include "tableau_w.h"
#include "waste_w.h"
#include "foundation_w.h"


constexpr size_t card_width = 166, card_height = 242;

void MainWindow::set_stock_icon()
{
    stock->setIcon(QIcon("../Solitaire/PNG-cards/0-0.png"));
    stock->setIconSize(QSize(card_width, card_height));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Waste_W *waste{};
    std::array<Foundation_W *, 4> foundations = {nullptr};
    std::array<Tableau_W *, 7> tableaux = {nullptr};

    setWindowTitle("Solitaire");
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    setStyleSheet("background-color: green;");

    topLay = new QHBoxLayout();
    bottomLay = new QHBoxLayout();
    parentLay = new QVBoxLayout(centralWidget);


    stock = new QPushButton(centralWidget);
    stock->setFixedSize(card_width, card_height);
    set_stock_icon();
    QObject::connect(stock, &QPushButton::clicked, &board, &GameBoard::check_stock);
    QObject::connect(&board, SIGNAL(stock_retrieved()), this, SLOT(set_stock_icon()));
    QObject::connect(&board, SIGNAL(empty_stock()), this, SLOT(remove_stock_icon()));
    topLay->addWidget(stock);

    waste = new Waste_W(centralWidget);
    waste->setFixedWidth(card_width);
    QObject::connect(waste, SIGNAL(pop()), &board, SLOT(pop_waste()));
    QObject::connect(waste, SIGNAL(top()), &board, SLOT(retrieve_waste()));
    QObject::connect(&board, SIGNAL(to_waste(Card*)), waste, SLOT(draw_card(Card*)));
    QObject::connect(&board, SIGNAL(stock_retrieved()), waste, SLOT(clear()));
    topLay->addWidget(waste);

    topLay->addItem(new QSpacerItem(20, 40, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum));


    for (size_t i = 0; i < board.foundations.size(); i++)
    {
        foundations[i] = new Foundation_W(centralWidget);
        QObject::connect(foundations[i], SIGNAL(draged_top()), &board.foundations[i], SLOT(pop()));
        QObject::connect(&board.foundations[i], SIGNAL(empty()), foundations[i], SLOT(clear()));
        QObject::connect(foundations[i], SIGNAL(drag_fail()), &board.foundations[i], SLOT(retrieve_foundation()));
        QObject::connect(&board.foundations[i], SIGNAL(top_changed(Card*)), foundations[i], SLOT(draw_card(Card*)));
        QObject::connect(foundations[i], SIGNAL(check_clipboard(QDragEnterEvent*&)), &board.foundations[i],SLOT(request_clipboard(QDragEnterEvent*&)));
        QObject::connect(foundations[i], SIGNAL(unclip()), &board.foundations[i], SLOT(request_clipboard()));
        foundations[i]->setFixedWidth(card_width);
        topLay->addWidget(foundations[i]);
    }


    bottomLay->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding));
    for (size_t i = 0; i < board.tableaux.size(); i++)
    {
        tableaux[i] = new Tableau_W(centralWidget);
        tableaux[i]->setFixedWidth(card_width);
        tableaux[i]->init(&board.tableaux[i]);
        QObject::connect(tableaux[i], SIGNAL(show_top()), &board.tableaux[i], SLOT(show()));
        QObject::connect(&board.tableaux[i], SIGNAL(flip(Card)), tableaux[i], SLOT(flip_top(Card)));
        QObject::connect(tableaux[i], SIGNAL(clip(size_t)), &board.tableaux[i], SLOT(remove(size_t)));
        QObject::connect(tableaux[i], SIGNAL(check_clipboard(QDragEnterEvent*&)), &board.tableaux[i],SLOT(request_clipboard(QDragEnterEvent*&)));
        QObject::connect(tableaux[i], SIGNAL(unclip()), &board.tableaux[i], SLOT(request_clipboard()));
        bottomLay->addWidget(tableaux[i]);
    }

    topLay->setSpacing(30);
    bottomLay->setSpacing(30);
    parentLay->addLayout(topLay);
    parentLay->addItem(new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum));
    parentLay->addLayout(bottomLay);

}

MainWindow::~MainWindow()
{
    delete ui;
}
