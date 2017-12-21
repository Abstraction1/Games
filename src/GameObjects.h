#ifndef GameObjects_h__
#define GameObjects_h__
/* --------------------------------------------------------------------------*/
/**
 * @Synopsis										Main Game Class   
 */
/* --------------------------------------------------------------------------*/
class GameObjects 
{
	public:
		/* --------------------------------------------------------------------------*/
		/**
		 * @Synopsis  								default constructor 
		 */
		/* --------------------------------------------------------------------------*/
		GameObjects();
		/* --------------------------------------------------------------------------*/
		/**
		 * @Synopsis   								Start location 
		 *
		 * @Param xCoord							Start X coor
		 * @Param yCoord							Start Y coord
		 */
		/* --------------------------------------------------------------------------*/
		GameObjects(const int& xCoord, const int& yCoord);
		/* --------------------------------------------------------------------------*/
		/**
		 * @Synopsis   								Getter for X coord and Y coord
		 *
		 * @Param xCoord							
		 * @Param yCoord
		 */
		/* --------------------------------------------------------------------------*/
		void getXY(int& xCoord,  int& yCoord);
		/* --------------------------------------------------------------------------*/
		/**
		 * @Synopsis   								Setter for X coord and Y coord
		 *
		 * @Param xCoord
		 * @Param yCoord
		 */
		/* --------------------------------------------------------------------------*/
		void setXY(const int& xCoord, const int& yCoord);
	private:
		int xCoord_;
		int yCoord_;
};
#endif // GameObjects_h__
