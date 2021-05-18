/*class XsX3dModel {
private:
	bool alala = 0;
	int sirsm = 0;
	std::string cikti;
	bool dewam = false;
	std::string hehe;
	XsVertex temp_vertex;
public:
	XsVertexDepo vertex;
	void loadFromFile(const char* __file_name) {
		std::stringstream __ss;
		std::ifstream __in_file(__file_name);
		char __harf;
		std::string __kelime;
		std::string __gec;
		if (!__in_file.is_open())
		{
			XsLogError(XS_LOG_RED, XS_LOG_WHITE, "file cannot open :/ -- ");
			XsLogDate(XS_LOG_RED, XS_LOG_WHITE, XS_DATE_STYLE0);
			XS_NEWLINE;
		}
		while (__in_file >> __kelime) {
			if (__kelime == "<Coordinate") {
				std::string gecici;
				int sirams = 0;
				while (gecici != "/>") {
					__in_file >> gecici;
					if (std::atof(gecici.c_str()) != NULL) {
						if (sirams == 3) {
							sirams = 0;
							vertex.push_back(temp_vertex);
						}
						if(sirams == 0)
							temp_vertex.position.x = std::atof(gecici.c_str());
						else if (sirams == 1)
							temp_vertex.position.y = std::atof(gecici.c_str());
						else if (sirams == 2)
							temp_vertex.position.z = std::atof(gecici.c_str());
						sirams++;
					}
				}
			}
		}
	}
};*/