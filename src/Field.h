#ifndef Field_h__
#define Field_h__

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis											Field Class
 */
/* --------------------------------------------------------------------------*/
class Field
{
	public:
		Field();
		void getXY(int& _width, int& _height);
	private:
		int width_;
		int height_;
};

#endif //Field_h__
