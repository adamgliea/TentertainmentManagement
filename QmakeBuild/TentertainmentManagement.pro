SOURCES += ../Main/main.cpp \
		   ../Main/TentertainmentManagement.cpp \
		   ../Outliner/ToutlinerTreeView.cpp \
		   ../Panel/TadminSetupPanel.cpp \
		   ../Panel/TassetSetupPanel.cpp \
		   ../Panel/TinventoryReportPanel.cpp \
		   ../Panel/TmachineFuncSetupPanel.cpp \
		   ../Panel/TmachineGroupDetailSetupPanel.cpp \
		   ../Panel/TmachineGroupDifferenceReportPanel.cpp \
		   ../Panel/TmachineGroupReportEntertainmentPanel.cpp \
		   ../Panel/TmachineGroupReportGiftPanel.cpp \
		   ../Panel/TmachineGroupReportLotteryPanel.cpp \
		   ../Panel/TmachineGroupReportSummaryPanel.cpp \
		   ../Panel/TwarningSystemPanel.cpp \
		   ../Panel/TwelcomePanel.cpp \
		   ../Model/TDatabaseManager.cpp \
		   ../TestCases/DBTestCases.cpp \

HEADERS += ../Main/TentertainmentManagement.h

INCLUDEPATH += ../. \
			   ../Main \
			   ../Outliner \
			   ../Panel \
			   ../Common \
			   ../Model \
			   ../GeneratedFiles \
			   /usr/local/include/mysql

LIBS += -lmysqlpp
LIBS += -lgtest
LIBS += -lmysqlclient

CONFIG += qt debug



