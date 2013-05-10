#include "nazemadmin.h"

NazemAdmin::NazemAdmin(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new NazemAdmin)
{
    try
    {
    qDebug() << query.exec("CREATE TABLE IF NOT EXISTS students(Account_no TEXT, "
                           "name TEXT, phone_no TEXT, "
                           "creditcard TEXT, stock TEXT, "
                           "debt TEXT, loan TEXT, "
                           "payment TEXT, member_ship TEXT)");
    qDebug() << query.lastError();
    }
    catch (QSqlError)
    {
        qDebug() << "error";
    }

    tableView = new QTableView();
    vertical_layout = new QVBoxLayout;
    setLayout(vertical_layout);
    vertical_layout->addWidget(tableView);
    table1->setTable("students");
    table1->setEditStrategy(QSqlTableModel::OnManualSubmit);
    table1->select();
    tableView->setModel(table1);

//    void setupUi(QMainWindow *MainWindow)
//    {
//        if (MainWindow->objectName().isEmpty())
//            MainWindow->setObjectName(QStringLiteral("MainWindow"));
//        MainWindow->resize(400, 344);
//        centralWidget = new QWidget(MainWindow);
//        centralWidget->setObjectName(QStringLiteral("centralWidget"));
//        verticalLayoutWidget = new QWidget(centralWidget);
//        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
//        verticalLayoutWidget->setGeometry(QRect(0, 0, 391, 251));
//        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
//        verticalLayout->setSpacing(6);
//        verticalLayout->setContentsMargins(11, 11, 11, 11);
//        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
//        verticalLayout->setContentsMargins(0, 0, 0, 0);
//        tableView = new QTableView(verticalLayoutWidget);
//        tableView->setObjectName(QStringLiteral("tableView"));

//        verticalLayout->addWidget(tableView);

//        buttonBox = new QDialogButtonBox(centralWidget);
//        buttonBox->setObjectName(QStringLiteral("buttonBox"));
//        buttonBox->setGeometry(QRect(230, 260, 161, 23));
//        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
//        MainWindow->setCentralWidget(centralWidget);
//        menuBar = new QMenuBar(MainWindow);
//        menuBar->setObjectName(QStringLiteral("menuBar"));
//        menuBar->setGeometry(QRect(0, 0, 400, 21));
//        MainWindow->setMenuBar(menuBar);
//        mainToolBar = new QToolBar(MainWindow);
//        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
//        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
//        statusBar = new QStatusBar(MainWindow);
//        statusBar->setObjectName(QStringLiteral("statusBar"));
//        MainWindow->setStatusBar(statusBar);

}
