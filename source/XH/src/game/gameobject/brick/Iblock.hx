package game.gameobject.brick;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class Iblock extends Block
{
	
	public function new(_x:Int, _y:Int) 
	{
		super(_x,_y);
		mType = BlockType.I;
		mDirect = BlockDirect.TOP;
		mListDirect = new Array<Int>();
		mListDirect[0] = BlockDirect.LEFT;
		mListDirect[1] = BlockDirect.TOP;
		
		mData = 
			[
				[1],
				[1],
				[1],
				[1]
			];		
		mListChild = new Array<Brick>();
		var _index = 0;
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
					_index++;
				}
			}
		}
	}
	override public function setDirect(_direct:Int):Void
	{
		switch (_direct) 
		{
			case BlockDirect.LEFT:
				if (mDirect == BlockDirect.TOP ||mDirect == BlockDirect.BOTTOM ) 
				{
					mData = 
						[
							[1, 1, 1, 1]
						];
					UpdateDirect();
				}
				mDirect = BlockDirect.LEFT;
			case BlockDirect.RIGHT:
				if (mDirect == BlockDirect.TOP ||mDirect == BlockDirect.BOTTOM ) 
				{
					mData = 
						[
							[1, 1, 1, 1]
						];
					UpdateDirect();
				}
				mDirect = BlockDirect.RIGHT;
			case BlockDirect.TOP:
				if (mDirect == BlockDirect.LEFT ||mDirect == BlockDirect.RIGHT ) 
				{
					if (column > 6) 
					{
						setColumn(6);
					}					
					mData = 
						[
							[1],
							[1],
							[1],
							[1]
						];
					UpdateDirect();
				}
				mDirect = BlockDirect.TOP;				
			case BlockDirect.BOTTOM:
				if (mDirect == BlockDirect.LEFT ||mDirect == BlockDirect.RIGHT ) 
				{
					if (column > 6) 
					{
						setColumn(6);
					}
					mData = 
						[
							[1],
							[1],
							[1],
							[1]
						];
					UpdateDirect();
				}
				mDirect = BlockDirect.BOTTOM;
			default:
				
		}
		
	}
		
}