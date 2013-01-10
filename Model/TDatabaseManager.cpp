#include "TDatabaseManager.h"

namespace YR2K {
	TDatabaseManager::TDatabaseManager() :
	m_conn(NULL) {

	}

	TDatabaseManager::~TDatabaseManager() {
		this->disconnect();
	}

	bool TDatabaseManager::connect(const char *db, const char *server, const char *user, const char *password, unsigned int port) {
		this->disconnect();

		this->m_conn = new mysqlpp::Connection(false);

		return this->m_conn->connect(db, server, user, password, port);
	}

#pragma mark -- Private Functions

	void TDatabaseManager::disconnect() {
		if (this->m_conn != NULL) {
			this->m_conn->disconnect();
			this->m_conn = NULL;
		}
	}
}

