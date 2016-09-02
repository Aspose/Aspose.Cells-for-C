#pragma once
#include "System/Byte.h"
//#include "System/String.h"
#include "FormulaNodeOperatorMath.h"
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
//#include "System/Math.h"
#define STATIC_FORMULANODEOPERATORPOWER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IMathCalculator;
class FormulaNodeOperatorTwo;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorPower : public Aspose::Cells::FormulaModel::FormulaNodeOperatorMath
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc(Aspose::Cells::System::Double leftCalcValue , Aspose::Cells::System::Double rightCalcValue , intrusive_ptr<Aspose::Cells::FormulaModel::IMathCalculator> calc);
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> CreateInstance();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 FormulaNodeOperatorPower();
		public:
			virtual ~FormulaNodeOperatorPower();
	};

}

}

}