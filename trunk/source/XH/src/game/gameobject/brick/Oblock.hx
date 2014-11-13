package game.gameobject.brick;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class Oblock extends Block
{
	
	public function new(_x:Int, _y:Int) 
	{
		super(_x,_y);
		mType = BlockType.O;
		mDirect = BlockDirect.LEFT;
		mListDirect = new Array<Int>();
		mListDirect[0] = BlockDirect.LEFT;
		//
		mData = 
			[
				[1, 1],
				[1, 1],
			];
		mListChild = new Array<Brick>();
		for (i in 0...mData.length) 
		{
			for (j in 0...mData[0].length) 
			{
				if (mData[i][j] == 1) 
				{
					var _brick:Brick = new Brick();
					_brick.setValue(j * Game.BRICK_WIDTH, 0 - (i + 1) * Game.BRICK_HEIGHT, mType);
					mListChild.push(_brick);
					this.addChild(_brick);
				}
			}
		}
	}
	override public function setDirect(_direct:Int):Void
	{
	}
		
}