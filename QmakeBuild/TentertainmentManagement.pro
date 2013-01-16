SOURCES += ../Main/main.cpp \
		   ../Main/TentertainmentManagement.cpp \
		   ../Outliner/ToutlinerTreeView.cpp \
		   ../Panel/TadminSetupPanel.cpp \
		   ../Panel/TassetSetupPanel.cpp \
		   ../Panel/TinventoryReportPanel.cpp \
		   ../Panel/TmachineFuncSetupPanel.cpp \
		   ../Panel/TmachineGroupDifferenceReportPanel.cpp \
		   ../Panel/TmachineGroupReportPanel.cpp \
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
			   /usr/local/include/mysql

LIBS += -lmysqlpp
LIBS += -lgtest
LIBS += -lmysqlclient

CONFIG += qt debug



