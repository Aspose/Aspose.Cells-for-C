#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Double.h"
#include "System/String.h"
#include "System/DateTime.h"
#include "System/Single.h"
#include "System/Array1D.h"
#include "System/Collections/IEnumerator.h"

namespace Aspose {
	namespace Cells {
		class IWorksheet;
		enum CellValueType;
		enum CellValueFormatStrategy;
		enum NumberCategoryType;
		class IStyle;
		class IStyleFlag;
		class ICell;
		class ICellArea;
		class IFontSetting;
		class IRange;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Tables {
			class IListObject;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Encapsulates the object that represents a single Workbook cell.
			///  </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 	
			/// intrusive_ptr<IWorkbook> excel = Factory::CreateIWorkbook();
			/// intrusive_ptr<ICells> cells = excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			/// //Put a string into a cell
			/// intrusive_ptr<ICell>  cell = cells->GetObjectByIndex(0,0);
			/// cell->PutValue((StringPtr)new String("Hello"));	
			/// StringPtr first = cell->GetStringValue();
			/// //Put an integer into a cell
			/// cell = cells->GetObjectByIndex(new String("B1"));
			/// cell->PutValue(12);
			/// int second = cell->GetIntValue();
			/// //Put a double into a cell
			/// cell = cells->GetObjectByIndex(0, 2);
			/// cell->PutValue(-1.234);
			/// double third = cell->GetDoubleValue();
			/// //Put a formula into a cell
			/// cell = cells->GetObjectByIndex(new String("D1"));
			/// cell->SetFormula(new String("=B1 + C1"));
			/// //Put a combined formula: "sum(average(b1,c1), b1)" to cell at b2
			/// cell = cells->GetObjectByIndex(new String("b2"));
			/// cell->SetFormula(new String("=sum(average(b1,c1), b1)"));	
			/// //Set style of a cell
			/// intrusive_ptr<IStyle>  style = cell->GetIStyle();
			/// //Set background color
			/// style->SetBackgroundColor(Color::GetYellow()); 
			/// //Set format of a cell
			/// style->GetIFont()->SetName(new String("Courier New"));
			/// style->SetVerticalAlignment(TextAlignmentType::TextAlignmentType_Top);
			/// cell->SetStyle(style);
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API ICell : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the parent worksheet.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetIWorksheet()=0;
			/// <summary>
			/// Puts an boo value into the cell.
			/// </summary>
			/// 
			/// <param name="boolValue" />
			/// 
			/// 
			 virtual void PutValue(bool boolValue)=0;
			/// <summary>
			/// Puts an int value into the cell.
			/// </summary>
			/// 
			/// <param name="intValue" >Input value</param>
			/// 
			/// 
			 virtual void PutValue(Aspose::Cells::System::Int32 intValue)=0;
			/// <summary>
			/// Puts a double value into the cell.
			/// </summary>
			/// 
			/// <param name="doubleValue" >Input value</param>
			/// 
			/// 
			 virtual void PutValue(Aspose::Cells::System::Double doubleValue)=0;
			/// <summary>
			/// Puts a value into the cell, if appropriate the value will be converted to other data type and cell's number format will be reset.
			/// </summary>
			/// 
			/// <param name="stringValue" >Input value</param>
			/// 
			/// <param name="isConverted" >True: converted to other data type if appropriate.</param>
			/// 
			/// <param name="setStyle" >True: set the number format to cell's style when converting to other data type</param>
			/// 
			/// 
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue , bool isConverted , bool setStyle)=0;
			/// <summary>
			/// Puts a string value into the cell and converts the value to other data type if appropriate.
			/// </summary>
			/// 
			/// <param name="stringValue" >Input value</param>
			/// 
			/// <param name="isConverted" >True: converted to other data type if appropriate.</param>
			/// 
			/// 
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue , bool isConverted)=0;
			/// <summary>
			/// Puts a string value into the cell.
			/// </summary>
			/// 
			/// <param name="stringValue" >Input value</param>
			/// 
			/// 
			  virtual void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue)=0;
			/// <summary>
			/// Puts a DateTime value into the cell.
			/// </summary>
			/// 
			/// <param name="dateTime" >Input value</param>
			/// 
			/// 
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime)=0;
			/// <summary>
			/// Gets the DateTime value contained in the cell.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTimeValue()=0;
			/// <summary>
			/// Puts an object value into the cell.
			/// </summary>
			/// 
			/// <param name="objectValue" >input value</param>
			/// 
			/// 
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::System::Object> objectValue)=0;
			/// <summary>
			/// Gets row number (zero based) of the cell.
			/// </summary>
			/// 
			/// <value>Cell row number</value>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetRow()=0;
			/// <summary>
			/// Gets column number (zero based) of the cell.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetColumn()=0;
			/// <summary>
			/// Represents if the specified cell contains formula.
			/// </summary>
			/// 
			/// 
			 virtual bool IsFormula()=0;
			/// <summary>
			/// Represents cell value type.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::CellValueType GetType()=0;
			/// <summary>
			/// Gets the name of the cell. 
			/// </summary>
			/// 
			/// <remarks>
			/// A cell name includes its column letter and row number. For example, the name of a cell in row 0 and column 0 is A1.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Checks if a formula can properly evaluate a result.
			/// </summary>
			/// 
			/// <remarks>Only applies to formula cell.</remarks>
			/// 
			/// 
			 virtual bool IsErrorValue()=0;
			/// <summary>
			/// Gets the string value by specific formatted strategy.
			/// </summary>
			/// 
			/// <param name="formatStrategy" >The formatted strategy.</param>
			/// 
			/// <returns/>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetStringValue(Aspose::Cells::CellValueFormatStrategy formatStrategy)=0;
			/// <summary>
			/// Gets the string value contained in the cell. If the type of this cell is string, then return the string value itself.
			/// For other cell types, the formatted string value (formatted with the specified style of this cell) will be returned.
			/// The formatted cell value is same with what you can get from excel when copying a cell as text (such as
			/// copying cell to text editor or exporting to csv).
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetStringValue()=0;
			/// <summary>
			/// Gets cell's value as string without any format.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetStringValueWithoutFormat()=0;
			/// <summary>
			/// Represents the category type of this cell's number formatting.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType()=0;
			/// <summary>
			/// Gets the formatted string value of this cell.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetDisplayStringValue()=0;
			/// <summary>
			/// Gets the int value contained in the cell.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetIntValue()=0;
			/// <summary>
			/// Gets the double value contained in the cell.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Double GetDoubleValue()=0;
			/// <summary>
			/// Gets the float value contained in the cell.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Single GetFloatValue()=0;
			/// <summary>
			/// Gets the bool value contained in the cell.
			/// </summary>
			/// 
			/// 
			 virtual bool GetBoolValue()=0;
			/// <summary>
			/// Gets the display style of the cell.
			/// If the cell is conditional formatted, the display style is not same as the cell.GetStyle().
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetDisplayIStyle()=0;
			/// <summary>
			/// Gets the conditional formatted style when the cell value fits the condition.
			/// </summary>
			/// 
			/// <returns>Returns <see cref="IStyle" />
			///  object.</returns>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete.</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetConditionalIStyle()=0;
			/// <summary>
			///  Gets the cell style.
			///  </summary>
			/// 
			/// <returns>Style object.</returns>
			/// 
			/// <remarks>To change the style of the cell, please call Cell.SetStyle() method after changing the style.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// If checkBorders is true, check whether other cells' borders will affect the style of this cell.
			/// </summary>
			/// 
			/// <param name="checkBorders" >Check other cells' borders</param>
			/// 
			/// <returns/>
			/// 
			/// <remarks>
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle(bool checkBorders)=0;
			/// <summary>
			/// Sets the cell style.
			/// </summary>
			/// 
			/// <param name="style" >The cell style.</param>
			/// 
			/// <remarks>
			/// If the border settings are changed, the border of adjact cells will be updated too.
			/// </remarks>
			/// 
			/// 
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::IStyle> style)=0;
			/// <summary>
			/// Apply the cell style.
			/// </summary>
			/// 
			/// <param name="style" >The cell style.</param>
			/// 
			/// <param name="explicitFlag" >True, only overwriting formatting which is explicitly set.
			/// </param>
			/// 
			/// 
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::IStyle> style , bool explicitFlag)=0;
			/// <summary>
			/// Apply the cell style.
			/// </summary>
			/// 
			/// <param name="style" >The cell style.</param>
			/// 
			/// <param name="flag" >The style flag.</param>
			/// 
			/// 
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Gets cell's shared style index in the style pool.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetSharedStyleIndex()=0;
			/// <summary>
			///  Gets or sets a formula of the <see cref="ICell" />
			/// .
			///  </summary>
			/// 
			/// <remarks>A formula string always begins with an equal sign (=). 
			/// And please always use comma (,) as parameters delimiter, such as "=SUM(A1, E1, H2)".<p/>
			/// 
			/// User can set any formula in Workbook designer file. Aspose.Cells will keep all the formulas.
			/// If user use this property to set a formula to a cell, major part of Workbook built-in functions
			/// is supported. And more is coming. If you have any special need for Workbook built-in functions, 
			/// please let us know.		
			/// </remarks>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<IWorkbook> excel = Factory::CreateIWorkbook();
			/// intrusive_ptr<ICells> cells = excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells(); 
			/// cells->GetObjectByIndex(new String("B6"))->SetFormula(new String("=SUM(B2:B5, E1) + sheet2!A1"));
			/// 
			/// </code>
			/// </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFormula()=0;
			/// <summary>
			///  Gets or sets a formula of the <see cref="ICell" />
			///  </summary>
			/// 
			/// <remarks>A formula string always begins with an equal sign (=). 
			/// And please always use comma(,) as parameters delimeter, such as "=SUM(A1, E1, H2)".<p/>
			/// 
			/// User can set any formula in Workbook designer file. Aspose.Cells will keep all the formulas.
			/// If user use this property to set a formula to a cell, major part of Workbook built-in functions
			/// is supported. And more is coming. If you have any special need for Workbook built-in functions, 
			/// please let us know.		
			/// </remarks>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<IWorkbook> excel = Factory::CreateIWorkbook();
			/// intrusive_ptr<ICells> cells = excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells(); 
			/// cells->GetObjectByIndex(new String("B6"))->SetFormula(new String("=SUM(B2:B5, E1) + sheet2!A1"));
			/// 
			/// </code>
			/// </example>
			/// 
			/// 
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Set the formula and the value of the formula.
			/// </summary>
			/// 
			/// <param name="formula" >The formula.</param>
			/// 
			/// <param name="value" >The value of the formula.</param>
			/// 
			/// 
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Gets an R1C1 formula of the <see cref="ICell" />
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetR1C1Formula()=0;
			/// <summary>
			/// Sets an R1C1 formula of the <see cref="ICell" />
			/// </summary>
			/// 
			/// 
			 virtual void SetR1C1Formula(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether this cell contains an external link.
			/// Only applies when the cell is a formula cell.
			/// </summary>
			/// 
			/// 
			 virtual bool ContainsExternalLink()=0;
			/// <summary>
			/// Get all cells which refer to the specific cell.
			/// </summary>
			/// 
			/// <param name="isAll" >Indicates whether check other worksheets</param>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ICell*>> 		GetDependentICells(bool isAll)=0;
			/// <summary>
			/// Get all cells which will be updated when this cell is modified.
			/// This method can only work after calling Workbook.CalculateFormula.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetLeafs()=0;
			/// <summary>
			/// Indicates the cell's formula is and array formula 
			/// and it is the first cell of the array.
			/// </summary>
			/// 
			/// 
			 virtual bool IsArrayHeader()=0;
			/// <summary>
			/// Gets the array range if the cell's formula is an array formula.
			/// </summary>
			/// 
			/// <returns>
			/// The array range.
			/// </returns>
			/// 
			/// <remarks>Only applies when the cell's formula is an array formula</remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetArrayICellArea()=0;
			/// <summary>
			/// Indicates whether the cell formula is an array formula.
			/// </summary>
			/// 
			/// 
			 virtual bool IsInArray()=0;
			/// <summary>
			/// Indicates whether this cell is part of table formula.
			/// </summary>
			/// 
			/// 
			 virtual bool IsInTable()=0;
			/// <summary>
			/// Sets an array formula to a range of cells.
			/// </summary>
			/// 
			/// <param name="arrayFormula" >Array formula.</param>
			/// 
			/// <param name="rowNumber" >Number of rows to populate result of the array formula.</param>
			/// 
			/// <param name="columnNumber" >Number of columns to populate result of the array formula.</param>
			/// 
			/// 
			 virtual void SetArrayFormula(intrusive_ptr<Aspose::Cells::System::String> arrayFormula , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber)=0;
			/// <summary>
			/// Remove array formula.
			/// </summary>
			/// 
			/// <param name="leaveNormalFormula" >True represents converting the array formula to normal formula.</param>
			/// 
			/// 
			 virtual void RemoveArrayFormula(bool leaveNormalFormula)=0;
			/// <summary>
			///  Sets an Add-In formula to the cell.
			///  </summary>
			/// 
			/// <param name="addInFileName" >Add-In file name.</param>
			/// 
			/// <param name="addInFunction" >Add-In function name.</param>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///  
			///  cells->GetObjectByIndex(new String("h11"))->SetAddInFormula(new String("HRVSTTRK.xla"), new String(" = pct_overcut(F3:G3)"));
			///  cells->GetObjectByIndex(new String("h12"))->SetAddInFormula(new String("HRVSTTRK.xla"), new String("=pct_overcut()"));
			/// 
			///  </code>
			/// 
			///  </example>
			/// 
			/// <remarks>
			///  Add-In file should be placed in the directory or sub-directory of Workbook Add-In library.
			///  For example, file name can be "Eurotool.xla" or "solver\solver.xla". 
			///  </remarks>
			/// 
			/// 
			 virtual void SetAddInFormula(intrusive_ptr<Aspose::Cells::System::String> addInFileName , intrusive_ptr<Aspose::Cells::System::String> addInFunction)=0;
			/// <summary>
			/// Copies data from a source cell.
			/// </summary>
			/// 
			/// <param name="cell" >Source <see cref="ICell" />
			///  object.</param>
			/// 
			/// 
			 virtual void Copy(intrusive_ptr<Aspose::Cells::ICell> cell)=0;
			/// <summary>
			/// Gets the value contained in this cell.
			/// </summary>
			/// 
			/// <remarks>Possible type:
			/// <p>null,</p>
			/// 
			/// <p>Boolean,</p>
			/// 
			/// <p>DateTime,</p>
			/// 
			/// <p>Double,</p>
			/// 
			/// <p>Integer</p>
			/// 
			/// <p>String.</p>
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValue()=0;
			/// <summary>
			/// Gets the value contained in this cell.
			/// </summary>
			/// 
			/// <remarks>Possible type:
			/// <p>null,</p>
			/// 
			/// <p>Boolean,</p>
			/// 
			/// <p>DateTime,</p>
			/// 
			/// <p>Double,</p>
			/// 
			/// <p>Integer</p>
			/// 
			/// <p>String.</p>
			/// </remarks>
			/// 
			/// 
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Indicates if the cell's style is set. If return false, it means this cell has a default cell format.
			/// </summary>
			/// 
			/// 
			 virtual bool IsStyleSet()=0;
			/// <summary>
			/// Returns a Characters object that represents a range of characters within the cell text.
			/// </summary>
			/// 
			/// <param name="startIndex" >The index of the start of the character.</param>
			/// 
			/// <param name="length" >The number of characters.</param>
			/// 
			/// <returns>Characters object.</returns>
			/// 
			/// <remarks>This method only works on cell with string value.</remarks>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetObjectByIndex(new String("A1"))->PutValue((StringPtr)new String("Helloworld"));
			/// excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetObjectByIndex(new String("A1"))->GetIFontSetting(5, 5)->GetIFont()->SetIsBold(true);
			/// excel->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetObjectByIndex(new String("A1"))->GetIFontSetting(5, 5)->GetIFont()->SetColor(Color::GetBlue());
			/// 
			/// </code>
			/// </example>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IFontSetting> 		GetIFontSetting(Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length)=0;
			/// <summary>
			/// Indicates whether the cell string value is a rich text.
			/// </summary>
			/// 
			/// 
			 virtual bool IsRichText()=0;
			/// <summary>
			/// Returns all Characters objects 
			/// that represents a range of characters within the cell text.
			/// </summary>
			/// 
			/// <returns>All Characters objects </returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IFontSetting*>> 		GetIFontSettings()=0;
			/// <summary>
			/// Returns all Characters objects 
			/// that represents a range of characters within the cell text.
			/// </summary>
			/// 
			/// <param name="flag" >Indicates whether applying table style to the cell if the cell is in the table.</param>
			/// 
			/// <returns>All Characters objects </returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IFontSetting*>> 		GetIFontSettings(bool flag)=0;
			/// <summary>
			/// Sets rich text format of the cell.
			/// </summary>
			/// 
			/// <param name="characters" >All Characters objects.</param>
			/// 
			/// 
			 virtual void SetCharacters(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IFontSetting*>> characters)=0;
			/// <summary>
			/// Checks if a cell is part of a merged range or not. 
			/// </summary>
			/// 
			/// 
			 virtual bool IsMerged()=0;
			/// <summary>
			/// Returns an <see cref="IRange" />
			///  object which represents a merged range.
			/// </summary>
			/// 
			/// <returns><see cref="IRange" />
			///  object. Null if this cell is not merged.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetMergedIRange()=0;
			/// <summary>
			/// Sets a formula to a range of cells.
			/// </summary>
			/// 
			/// <param name="sharedFormula" >Shared formula.</param>
			/// 
			/// <param name="rowNumber" >Number of rows to populate the formula.</param>
			/// 
			/// <param name="columnNumber" >Number of columns to populate the formula.</param>
			/// 
			/// <remarks>
			/// 
			/// </remarks>
			/// 
			/// 
			 virtual void SetSharedFormula(intrusive_ptr<Aspose::Cells::System::String> sharedFormula , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber)=0;
			/// <summary>
			/// Returns a string represents the current Cell object.
			/// </summary>
			/// 
			/// <returns/>
			/// 
			/// 
			  virtual intrusive_ptr<Aspose::Cells::System::String> ToString()=0;
			/// <summary>
			/// Checks whether this object refers to the same cell with another.
			/// </summary>
			/// 
			/// <param name="obj" >another object</param>
			/// 
			/// <returns>true if two objects refers to the same cell.</returns>
			/// 
			/// 
			  virtual bool Equals(intrusive_ptr<Aspose::Cells::System::Object> obj)=0;
			/// <summary>
			/// Serves as a hash function for a particular type.
			/// </summary>
			/// 
			/// <returns>A hash code for current Cell object.</returns>
			/// 
			/// 
			  virtual Aspose::Cells::System::Int32 GetHashCode()=0;
			/// <summary>
			/// Checks whether this object refers to the same cell with another cell object.
			/// </summary>
			/// 
			/// <param name="cell" >another cell object</param>
			/// 
			/// <returns>true if two cell objects refers to the same cell.</returns>
			/// 
			/// 
			 virtual bool Equals(intrusive_ptr<Aspose::Cells::ICell> cell)=0;
			/// <summary>
			/// Gets the value of validation which applied to this cell.
			/// </summary>
			/// 
			/// <returns>
			/// 
			/// </returns>
			/// 
			/// 
			 virtual bool GetValidationValue()=0;
			/// <summary>
			/// Gets the table which contains this cell.
			/// </summary>
			/// 
			/// <returns/>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListObject> 		GetITable()=0;

	};
}
}
