#pragma once
#include <string>

class ImageMetadata {
public:
	// Constructor.
	ImageMetadata(
		std::string fileName,
		std::string imageType,
		std::string date,
		double sizeMB,
		std::string authorName,
		int width,
		int height,
		int apertureSizeDenom,
		int exposureTimeDenom,
		int ISOValue,
		bool flashEnabled
	);

	// Getter functions.
	std::string getFileName();
	std::string getImageType();
	std::string getDate();
	double getSizeMB();
	std::string getAuthorName();
	int getWidth();
	int getHeight();
	std::string getApertureSize();
	std::string getExposureTime();
	int getISOValue();
	bool getFlashEnabled();

	// Setter functions.
	void setFileName(std::string newFileName);
	void setImageType(std::string newImageType);
	void setDate(std::string newDate);
	void setSizeMB(double newSizeMB);
	void setAuthorName(std::string newAuthorName);
	void setWidth(int newWidth);
	void setHeight(int newHeight);
	void setApertureSizeDenom(int newApertureSizeDenom);
	void setExposureTimeDenom(int newExposureTimeDenom);
	void setISOValue(int newISOValue);
	void setFlashEnabled(bool newFlashEnabled);

private:
	std::string fileName;
	std::string imageType;
	std::string date;
	double sizeMB;
	std::string authorName;
	int width;
	int height;
	std::string apertureSize;
	std::string exposureTime;
	int ISOValue;
	bool flashEnabled;

	// Private functions to prevent invalid values.
	std::string validateFileName(std::string newFileName);
	std::string validateImageType(std::string newImageType);
	std::string validateDate(std::string newDate);
	double validateSize(double sizeMB);
	std::string validateAuthorName(std::string newAuthorName);
	int validateInt(int intValue, std::string valueName);
};

// External function to print information. 
void printImageInfo(ImageMetadata image);