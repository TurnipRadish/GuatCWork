# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'Login.ui'
##
## Created by: Qt User Interface Compiler version 6.6.3
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QFrame, QHBoxLayout, QLabel,
    QLineEdit, QPushButton, QSizePolicy, QStackedWidget,
    QVBoxLayout, QWidget)
import UI.res_rc

class Ui_Form(object):
    def setupUi(self, Form):
        if not Form.objectName():
            Form.setObjectName(u"Form")
        Form.resize(899, 636)
        self.frame_2 = QFrame(Form)
        self.frame_2.setObjectName(u"frame_2")
        self.frame_2.setGeometry(QRect(440, 70, 391, 511))
        self.frame_2.setMouseTracking(True)
        self.frame_2.setStyleSheet(u"#frame_2 {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-top-right-radius:21px;\n"
"	border-bottom-right-radius:21px;\n"
"}")
        self.frame_2.setFrameShape(QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QFrame.Raised)
        self.CloseButton = QPushButton(self.frame_2)
        self.CloseButton.setObjectName(u"CloseButton")
        self.CloseButton.setGeometry(QRect(350, 10, 31, 31))
        self.CloseButton.setMouseTracking(True)
        self.CloseButton.setStyleSheet(u"QPushButton{\n"
"	border:none;\n"
"}\n"
"QPushButton:hover {\n"
"	padding-top: 5px;\n"
"}")
        icon = QIcon()
        icon.addFile(u":/icons/delete-1--remove-add-button-buttons-delete-cross-x.png", QSize(), QIcon.Normal, QIcon.Off)
        self.CloseButton.setIcon(icon)
        self.CloseButton.setIconSize(QSize(24, 24))
        self.frame_3 = QFrame(self.frame_2)
        self.frame_3.setObjectName(u"frame_3")
        self.frame_3.setGeometry(QRect(0, 40, 391, 461))
        self.frame_3.setMinimumSize(QSize(391, 461))
        self.frame_3.setFrameShape(QFrame.StyledPanel)
        self.frame_3.setFrameShadow(QFrame.Raised)
        self.verticalLayout = QVBoxLayout(self.frame_3)
        self.verticalLayout.setSpacing(0)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.verticalLayout.setContentsMargins(0, 0, 0, 0)
        self.frame_4 = QFrame(self.frame_3)
        self.frame_4.setObjectName(u"frame_4")
        sizePolicy = QSizePolicy(QSizePolicy.Policy.Preferred, QSizePolicy.Policy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(6)
        sizePolicy.setHeightForWidth(self.frame_4.sizePolicy().hasHeightForWidth())
        self.frame_4.setSizePolicy(sizePolicy)
        self.frame_4.setFrameShape(QFrame.StyledPanel)
        self.frame_4.setFrameShadow(QFrame.Raised)
        self.verticalLayout_3 = QVBoxLayout(self.frame_4)
        self.verticalLayout_3.setSpacing(0)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.verticalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.frame_6 = QFrame(self.frame_4)
        self.frame_6.setObjectName(u"frame_6")
        sizePolicy1 = QSizePolicy(QSizePolicy.Policy.Preferred, QSizePolicy.Policy.Expanding)
        sizePolicy1.setHorizontalStretch(0)
        sizePolicy1.setVerticalStretch(5)
        sizePolicy1.setHeightForWidth(self.frame_6.sizePolicy().hasHeightForWidth())
        self.frame_6.setSizePolicy(sizePolicy1)
        self.frame_6.setFrameShape(QFrame.StyledPanel)
        self.frame_6.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_2 = QHBoxLayout(self.frame_6)
        self.horizontalLayout_2.setSpacing(0)
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.horizontalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.stackedWidget = QStackedWidget(self.frame_6)
        self.stackedWidget.setObjectName(u"stackedWidget")
        self.stackedWidget.setStyleSheet(u"QLineEdit {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border:none;\n"
"	border-bottom:1px solid black;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius:7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	padding-bottom:5px;\n"
"}")
        self.page_Rigister = QWidget()
        self.page_Rigister.setObjectName(u"page_Rigister")
        self.verticalLayout_5 = QVBoxLayout(self.page_Rigister)
        self.verticalLayout_5.setObjectName(u"verticalLayout_5")
        self.lineEdit_R_account = QLineEdit(self.page_Rigister)
        self.lineEdit_R_account.setObjectName(u"lineEdit_R_account")
        self.lineEdit_R_account.setMinimumSize(QSize(0, 35))

        self.verticalLayout_5.addWidget(self.lineEdit_R_account)

        self.lineEdit_R_password1 = QLineEdit(self.page_Rigister)
        self.lineEdit_R_password1.setObjectName(u"lineEdit_R_password1")
        self.lineEdit_R_password1.setMinimumSize(QSize(0, 35))

        self.verticalLayout_5.addWidget(self.lineEdit_R_password1)

        self.lineEdit_R_password2 = QLineEdit(self.page_Rigister)
        self.lineEdit_R_password2.setObjectName(u"lineEdit_R_password2")
        self.lineEdit_R_password2.setMinimumSize(QSize(0, 35))

        self.verticalLayout_5.addWidget(self.lineEdit_R_password2)

        self.pushButton_R_sure = QPushButton(self.page_Rigister)
        self.pushButton_R_sure.setObjectName(u"pushButton_R_sure")
        self.pushButton_R_sure.setMinimumSize(QSize(0, 42))

        self.verticalLayout_5.addWidget(self.pushButton_R_sure)

        self.stackedWidget.addWidget(self.page_Rigister)
        self.page_Login = QWidget()
        self.page_Login.setObjectName(u"page_Login")
        self.verticalLayout_4 = QVBoxLayout(self.page_Login)
        self.verticalLayout_4.setObjectName(u"verticalLayout_4")
        self.lineEdit_L_account = QLineEdit(self.page_Login)
        self.lineEdit_L_account.setObjectName(u"lineEdit_L_account")
        self.lineEdit_L_account.setMinimumSize(QSize(0, 42))

        self.verticalLayout_4.addWidget(self.lineEdit_L_account)

        self.lineEdit_L_password = QLineEdit(self.page_Login)
        self.lineEdit_L_password.setObjectName(u"lineEdit_L_password")
        self.lineEdit_L_password.setMinimumSize(QSize(0, 42))
        self.lineEdit_L_password.setEchoMode(QLineEdit.Password)

        self.verticalLayout_4.addWidget(self.lineEdit_L_password)

        self.pushButton_L_sure = QPushButton(self.page_Login)
        self.pushButton_L_sure.setObjectName(u"pushButton_L_sure")
        self.pushButton_L_sure.setMinimumSize(QSize(0, 47))

        self.verticalLayout_4.addWidget(self.pushButton_L_sure)

        self.stackedWidget.addWidget(self.page_Login)

        self.horizontalLayout_2.addWidget(self.stackedWidget)


        self.verticalLayout_3.addWidget(self.frame_6)

        self.frame_7 = QFrame(self.frame_4)
        self.frame_7.setObjectName(u"frame_7")
        sizePolicy2 = QSizePolicy(QSizePolicy.Policy.Preferred, QSizePolicy.Policy.Expanding)
        sizePolicy2.setHorizontalStretch(0)
        sizePolicy2.setVerticalStretch(1)
        sizePolicy2.setHeightForWidth(self.frame_7.sizePolicy().hasHeightForWidth())
        self.frame_7.setSizePolicy(sizePolicy2)
        self.frame_7.setStyleSheet(u"QPushButton{\n"
"	border:none;\n"
"}\n"
"QPushButton:pressed{\n"
"	padding-bottom:5px;\n"
"}")
        self.frame_7.setFrameShape(QFrame.StyledPanel)
        self.frame_7.setFrameShadow(QFrame.Raised)
        self.horizontalLayout = QHBoxLayout(self.frame_7)
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.LoginButton = QPushButton(self.frame_7)
        self.LoginButton.setObjectName(u"LoginButton")
        self.LoginButton.setEnabled(True)
        icon1 = QIcon()
        icon1.addFile(u":/icons/logout-1--arrow-exit-frame-leave-logout-rectangle-.png", QSize(), QIcon.Normal, QIcon.Off)
        self.LoginButton.setIcon(icon1)
        self.LoginButton.setIconSize(QSize(16, 27))

        self.horizontalLayout.addWidget(self.LoginButton)

        self.RegisterButton = QPushButton(self.frame_7)
        self.RegisterButton.setObjectName(u"RegisterButton")
        icon2 = QIcon()
        icon2.addFile(u":/icons/user-add-plus--actions-add-close-geometric-human-p.png", QSize(), QIcon.Normal, QIcon.Off)
        self.RegisterButton.setIcon(icon2)
        self.RegisterButton.setIconSize(QSize(16, 27))

        self.horizontalLayout.addWidget(self.RegisterButton)


        self.verticalLayout_3.addWidget(self.frame_7)


        self.verticalLayout.addWidget(self.frame_4)

        self.frame_5 = QFrame(self.frame_3)
        self.frame_5.setObjectName(u"frame_5")
        sizePolicy2.setHeightForWidth(self.frame_5.sizePolicy().hasHeightForWidth())
        self.frame_5.setSizePolicy(sizePolicy2)
        self.frame_5.setFrameShape(QFrame.StyledPanel)
        self.frame_5.setFrameShadow(QFrame.Raised)
        self.verticalLayout_2 = QVBoxLayout(self.frame_5)
        self.verticalLayout_2.setSpacing(0)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.verticalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.stackedWidget000 = QStackedWidget(self.frame_5)
        self.stackedWidget000.setObjectName(u"stackedWidget000")
        self.page_7 = QWidget()
        self.page_7.setObjectName(u"page_7")
        self.stackedWidget000.addWidget(self.page_7)
        self.page_8 = QWidget()
        self.page_8.setObjectName(u"page_8")
        self.stackedWidget000.addWidget(self.page_8)

        self.verticalLayout_2.addWidget(self.stackedWidget000)


        self.verticalLayout.addWidget(self.frame_5)

        self.frame = QFrame(Form)
        self.frame.setObjectName(u"frame")
        self.frame.setGeometry(QRect(90, 40, 351, 561))
        self.frame.setStyleSheet(u"#frame {\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0.511, y1:0.307, x2:0.488273, y2:1, stop:0 rgba(0, 60, 155, 248), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 24px;\n"
"}")
        self.frame.setFrameShape(QFrame.StyledPanel)
        self.frame.setFrameShadow(QFrame.Raised)
        self.label = QLabel(self.frame)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(0, 50, 351, 201))
        self.label.setStyleSheet(u"color: rgb(255, 255, 255);\n"
"")
        self.label_3 = QLabel(self.frame)
        self.label_3.setObjectName(u"label_3")
        self.label_3.setGeometry(QRect(10, 10, 171, 41))
        self.label_3.setPixmap(QPixmap(u":/icons/logo.png"))
        self.label_3.setScaledContents(True)

        self.retranslateUi(Form)

        self.stackedWidget.setCurrentIndex(1)
        self.stackedWidget000.setCurrentIndex(0)


        QMetaObject.connectSlotsByName(Form)
    # setupUi

    def retranslateUi(self, Form):
        Form.setWindowTitle(QCoreApplication.translate("Form", u"Form", None))
        self.CloseButton.setText("")
        self.lineEdit_R_account.setPlaceholderText(QCoreApplication.translate("Form", u"\u8d26\u53f7\uff1a", None))
        self.lineEdit_R_password1.setPlaceholderText(QCoreApplication.translate("Form", u"\u5bc6\u7801\uff1a", None))
        self.lineEdit_R_password2.setPlaceholderText(QCoreApplication.translate("Form", u"\u786e\u8ba4\u5bc6\u7801\uff1a", None))
        self.pushButton_R_sure.setText(QCoreApplication.translate("Form", u"\u6ce8\u518c", None))
        self.lineEdit_L_account.setPlaceholderText(QCoreApplication.translate("Form", u"\u8d26\u53f7\uff1a", None))
        self.lineEdit_L_password.setPlaceholderText(QCoreApplication.translate("Form", u"\u5bc6\u7801\uff1a", None))
        self.pushButton_L_sure.setText(QCoreApplication.translate("Form", u"\u786e\u8ba4", None))
        self.LoginButton.setText(QCoreApplication.translate("Form", u"\u767b\u5165", None))
        self.RegisterButton.setText(QCoreApplication.translate("Form", u"\u6ce8\u518c", None))
        self.label.setText(QCoreApplication.translate("Form", u"<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">\u8f7b\u91cf\u7ea7\u4ea4\u901a\u6807\u5fd7</span></p><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">\u68c0\u6d4b\u7cfb\u7edf</span></p></body></html>", None))
        self.label_3.setText("")
    # retranslateUi

