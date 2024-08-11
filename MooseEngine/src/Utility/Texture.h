#pragma once


class Texture
{
public:

	Texture(const char* path, bool flip);
	~Texture();

	void BindTexture();

private:

	unsigned int texture_Handle;;
};

