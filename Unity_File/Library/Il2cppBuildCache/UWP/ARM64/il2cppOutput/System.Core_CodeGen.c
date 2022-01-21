#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000029 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000031 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000032 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004B System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004E System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000050 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000054 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000056 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005C TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000060 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000061 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000063 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000065 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006E TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000074 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000075 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000078 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000081 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000087 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000088 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000089 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000008A System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x0000008B System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000008C System.Void System.Linq.Set`1::Resize()
// 0x0000008D System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000008E System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000008F System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000090 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000092 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000093 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000094 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000095 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000096 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000097 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000098 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000099 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009B System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000009C System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000009D System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000009E System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000009F System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A0 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A1 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000A2 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000A3 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000A4 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000AA System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000AC System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000AD System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000AE System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000AF System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B0 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B1 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000B4 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000BB System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000BC System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C0 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000C1 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[194] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[194] = 
{
	7413,
	7413,
	7661,
	7661,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7301,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[65] = 
{
	{ 0x02000004, { 99, 4 } },
	{ 0x02000005, { 103, 9 } },
	{ 0x02000006, { 114, 7 } },
	{ 0x02000007, { 123, 10 } },
	{ 0x02000008, { 135, 11 } },
	{ 0x02000009, { 149, 9 } },
	{ 0x0200000A, { 161, 12 } },
	{ 0x0200000B, { 176, 1 } },
	{ 0x0200000C, { 177, 2 } },
	{ 0x0200000D, { 179, 12 } },
	{ 0x0200000E, { 191, 8 } },
	{ 0x0200000F, { 199, 11 } },
	{ 0x02000010, { 210, 12 } },
	{ 0x02000011, { 222, 12 } },
	{ 0x02000012, { 234, 2 } },
	{ 0x02000014, { 236, 8 } },
	{ 0x02000016, { 244, 3 } },
	{ 0x02000017, { 249, 5 } },
	{ 0x02000018, { 254, 7 } },
	{ 0x02000019, { 261, 3 } },
	{ 0x0200001A, { 264, 7 } },
	{ 0x0200001B, { 271, 4 } },
	{ 0x0200001C, { 275, 23 } },
	{ 0x0200001E, { 298, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 4 } },
	{ 0x06000019, { 59, 4 } },
	{ 0x0600001A, { 63, 3 } },
	{ 0x0600001B, { 66, 4 } },
	{ 0x0600001C, { 70, 3 } },
	{ 0x0600001D, { 73, 3 } },
	{ 0x0600001E, { 76, 1 } },
	{ 0x0600001F, { 77, 1 } },
	{ 0x06000020, { 78, 3 } },
	{ 0x06000021, { 81, 3 } },
	{ 0x06000022, { 84, 2 } },
	{ 0x06000023, { 86, 3 } },
	{ 0x06000024, { 89, 2 } },
	{ 0x06000025, { 91, 5 } },
	{ 0x06000026, { 96, 3 } },
	{ 0x06000037, { 112, 2 } },
	{ 0x0600003C, { 121, 2 } },
	{ 0x06000041, { 133, 2 } },
	{ 0x06000047, { 146, 3 } },
	{ 0x0600004C, { 158, 3 } },
	{ 0x06000051, { 173, 3 } },
	{ 0x06000091, { 247, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[300] = 
{
	{ (Il2CppRGCTXDataType)2, 7033 },
	{ (Il2CppRGCTXDataType)3, 27003 },
	{ (Il2CppRGCTXDataType)2, 11352 },
	{ (Il2CppRGCTXDataType)2, 10500 },
	{ (Il2CppRGCTXDataType)3, 47278 },
	{ (Il2CppRGCTXDataType)2, 7756 },
	{ (Il2CppRGCTXDataType)2, 10534 },
	{ (Il2CppRGCTXDataType)3, 47343 },
	{ (Il2CppRGCTXDataType)2, 10512 },
	{ (Il2CppRGCTXDataType)3, 47294 },
	{ (Il2CppRGCTXDataType)2, 7034 },
	{ (Il2CppRGCTXDataType)3, 27004 },
	{ (Il2CppRGCTXDataType)2, 11384 },
	{ (Il2CppRGCTXDataType)2, 10546 },
	{ (Il2CppRGCTXDataType)3, 47359 },
	{ (Il2CppRGCTXDataType)2, 7782 },
	{ (Il2CppRGCTXDataType)2, 10584 },
	{ (Il2CppRGCTXDataType)3, 47539 },
	{ (Il2CppRGCTXDataType)2, 10565 },
	{ (Il2CppRGCTXDataType)3, 47441 },
	{ (Il2CppRGCTXDataType)2, 1279 },
	{ (Il2CppRGCTXDataType)3, 146 },
	{ (Il2CppRGCTXDataType)3, 147 },
	{ (Il2CppRGCTXDataType)2, 4084 },
	{ (Il2CppRGCTXDataType)3, 16956 },
	{ (Il2CppRGCTXDataType)2, 1280 },
	{ (Il2CppRGCTXDataType)3, 164 },
	{ (Il2CppRGCTXDataType)3, 165 },
	{ (Il2CppRGCTXDataType)2, 4101 },
	{ (Il2CppRGCTXDataType)3, 16965 },
	{ (Il2CppRGCTXDataType)3, 52989 },
	{ (Il2CppRGCTXDataType)2, 1317 },
	{ (Il2CppRGCTXDataType)3, 329 },
	{ (Il2CppRGCTXDataType)3, 52995 },
	{ (Il2CppRGCTXDataType)2, 1323 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)2, 8546 },
	{ (Il2CppRGCTXDataType)3, 37594 },
	{ (Il2CppRGCTXDataType)2, 8547 },
	{ (Il2CppRGCTXDataType)3, 37595 },
	{ (Il2CppRGCTXDataType)3, 22236 },
	{ (Il2CppRGCTXDataType)3, 52923 },
	{ (Il2CppRGCTXDataType)2, 1283 },
	{ (Il2CppRGCTXDataType)3, 209 },
	{ (Il2CppRGCTXDataType)3, 53032 },
	{ (Il2CppRGCTXDataType)2, 1326 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)3, 52944 },
	{ (Il2CppRGCTXDataType)2, 1309 },
	{ (Il2CppRGCTXDataType)3, 301 },
	{ (Il2CppRGCTXDataType)2, 1649 },
	{ (Il2CppRGCTXDataType)3, 3047 },
	{ (Il2CppRGCTXDataType)3, 3048 },
	{ (Il2CppRGCTXDataType)2, 7757 },
	{ (Il2CppRGCTXDataType)3, 29188 },
	{ (Il2CppRGCTXDataType)2, 6155 },
	{ (Il2CppRGCTXDataType)2, 4378 },
	{ (Il2CppRGCTXDataType)2, 4630 },
	{ (Il2CppRGCTXDataType)2, 4950 },
	{ (Il2CppRGCTXDataType)2, 6156 },
	{ (Il2CppRGCTXDataType)2, 4379 },
	{ (Il2CppRGCTXDataType)2, 4631 },
	{ (Il2CppRGCTXDataType)2, 4951 },
	{ (Il2CppRGCTXDataType)2, 4632 },
	{ (Il2CppRGCTXDataType)2, 4952 },
	{ (Il2CppRGCTXDataType)3, 16958 },
	{ (Il2CppRGCTXDataType)2, 6157 },
	{ (Il2CppRGCTXDataType)2, 4380 },
	{ (Il2CppRGCTXDataType)2, 4633 },
	{ (Il2CppRGCTXDataType)2, 4953 },
	{ (Il2CppRGCTXDataType)2, 4634 },
	{ (Il2CppRGCTXDataType)2, 4954 },
	{ (Il2CppRGCTXDataType)3, 16959 },
	{ (Il2CppRGCTXDataType)2, 6154 },
	{ (Il2CppRGCTXDataType)2, 4629 },
	{ (Il2CppRGCTXDataType)2, 4949 },
	{ (Il2CppRGCTXDataType)2, 2821 },
	{ (Il2CppRGCTXDataType)2, 4612 },
	{ (Il2CppRGCTXDataType)2, 4613 },
	{ (Il2CppRGCTXDataType)2, 4946 },
	{ (Il2CppRGCTXDataType)3, 16955 },
	{ (Il2CppRGCTXDataType)2, 4611 },
	{ (Il2CppRGCTXDataType)2, 4945 },
	{ (Il2CppRGCTXDataType)3, 16954 },
	{ (Il2CppRGCTXDataType)2, 4377 },
	{ (Il2CppRGCTXDataType)2, 4627 },
	{ (Il2CppRGCTXDataType)2, 4628 },
	{ (Il2CppRGCTXDataType)2, 4948 },
	{ (Il2CppRGCTXDataType)3, 16957 },
	{ (Il2CppRGCTXDataType)2, 4376 },
	{ (Il2CppRGCTXDataType)3, 52895 },
	{ (Il2CppRGCTXDataType)3, 15559 },
	{ (Il2CppRGCTXDataType)2, 3858 },
	{ (Il2CppRGCTXDataType)2, 4615 },
	{ (Il2CppRGCTXDataType)2, 4947 },
	{ (Il2CppRGCTXDataType)2, 5193 },
	{ (Il2CppRGCTXDataType)2, 4660 },
	{ (Il2CppRGCTXDataType)2, 4960 },
	{ (Il2CppRGCTXDataType)3, 17218 },
	{ (Il2CppRGCTXDataType)3, 27005 },
	{ (Il2CppRGCTXDataType)3, 27007 },
	{ (Il2CppRGCTXDataType)2, 934 },
	{ (Il2CppRGCTXDataType)3, 27006 },
	{ (Il2CppRGCTXDataType)3, 27015 },
	{ (Il2CppRGCTXDataType)2, 7037 },
	{ (Il2CppRGCTXDataType)2, 10513 },
	{ (Il2CppRGCTXDataType)3, 47295 },
	{ (Il2CppRGCTXDataType)3, 27016 },
	{ (Il2CppRGCTXDataType)2, 4723 },
	{ (Il2CppRGCTXDataType)2, 5008 },
	{ (Il2CppRGCTXDataType)3, 16973 },
	{ (Il2CppRGCTXDataType)3, 52855 },
	{ (Il2CppRGCTXDataType)2, 10566 },
	{ (Il2CppRGCTXDataType)3, 47442 },
	{ (Il2CppRGCTXDataType)3, 27008 },
	{ (Il2CppRGCTXDataType)2, 7036 },
	{ (Il2CppRGCTXDataType)2, 10501 },
	{ (Il2CppRGCTXDataType)3, 47279 },
	{ (Il2CppRGCTXDataType)3, 16972 },
	{ (Il2CppRGCTXDataType)3, 27009 },
	{ (Il2CppRGCTXDataType)3, 52854 },
	{ (Il2CppRGCTXDataType)2, 10547 },
	{ (Il2CppRGCTXDataType)3, 47360 },
	{ (Il2CppRGCTXDataType)3, 27022 },
	{ (Il2CppRGCTXDataType)2, 7038 },
	{ (Il2CppRGCTXDataType)2, 10535 },
	{ (Il2CppRGCTXDataType)3, 47344 },
	{ (Il2CppRGCTXDataType)3, 29256 },
	{ (Il2CppRGCTXDataType)3, 13372 },
	{ (Il2CppRGCTXDataType)3, 16974 },
	{ (Il2CppRGCTXDataType)3, 13371 },
	{ (Il2CppRGCTXDataType)3, 27023 },
	{ (Il2CppRGCTXDataType)3, 52856 },
	{ (Il2CppRGCTXDataType)2, 10585 },
	{ (Il2CppRGCTXDataType)3, 47540 },
	{ (Il2CppRGCTXDataType)3, 27036 },
	{ (Il2CppRGCTXDataType)2, 7040 },
	{ (Il2CppRGCTXDataType)2, 10568 },
	{ (Il2CppRGCTXDataType)3, 47444 },
	{ (Il2CppRGCTXDataType)3, 27037 },
	{ (Il2CppRGCTXDataType)2, 4726 },
	{ (Il2CppRGCTXDataType)2, 5011 },
	{ (Il2CppRGCTXDataType)3, 16978 },
	{ (Il2CppRGCTXDataType)3, 16977 },
	{ (Il2CppRGCTXDataType)2, 10515 },
	{ (Il2CppRGCTXDataType)3, 47297 },
	{ (Il2CppRGCTXDataType)3, 52866 },
	{ (Il2CppRGCTXDataType)2, 10567 },
	{ (Il2CppRGCTXDataType)3, 47443 },
	{ (Il2CppRGCTXDataType)3, 27029 },
	{ (Il2CppRGCTXDataType)2, 7039 },
	{ (Il2CppRGCTXDataType)2, 10549 },
	{ (Il2CppRGCTXDataType)3, 47362 },
	{ (Il2CppRGCTXDataType)3, 16976 },
	{ (Il2CppRGCTXDataType)3, 16975 },
	{ (Il2CppRGCTXDataType)3, 27030 },
	{ (Il2CppRGCTXDataType)2, 10514 },
	{ (Il2CppRGCTXDataType)3, 47296 },
	{ (Il2CppRGCTXDataType)3, 52865 },
	{ (Il2CppRGCTXDataType)2, 10548 },
	{ (Il2CppRGCTXDataType)3, 47361 },
	{ (Il2CppRGCTXDataType)3, 27043 },
	{ (Il2CppRGCTXDataType)2, 7041 },
	{ (Il2CppRGCTXDataType)2, 10587 },
	{ (Il2CppRGCTXDataType)3, 47542 },
	{ (Il2CppRGCTXDataType)3, 29257 },
	{ (Il2CppRGCTXDataType)3, 13374 },
	{ (Il2CppRGCTXDataType)3, 16980 },
	{ (Il2CppRGCTXDataType)3, 16979 },
	{ (Il2CppRGCTXDataType)3, 13373 },
	{ (Il2CppRGCTXDataType)3, 27044 },
	{ (Il2CppRGCTXDataType)2, 10516 },
	{ (Il2CppRGCTXDataType)3, 47298 },
	{ (Il2CppRGCTXDataType)3, 52867 },
	{ (Il2CppRGCTXDataType)2, 10586 },
	{ (Il2CppRGCTXDataType)3, 47541 },
	{ (Il2CppRGCTXDataType)3, 16969 },
	{ (Il2CppRGCTXDataType)3, 16970 },
	{ (Il2CppRGCTXDataType)3, 16981 },
	{ (Il2CppRGCTXDataType)3, 332 },
	{ (Il2CppRGCTXDataType)3, 331 },
	{ (Il2CppRGCTXDataType)2, 4712 },
	{ (Il2CppRGCTXDataType)2, 5000 },
	{ (Il2CppRGCTXDataType)3, 16971 },
	{ (Il2CppRGCTXDataType)2, 4749 },
	{ (Il2CppRGCTXDataType)2, 5041 },
	{ (Il2CppRGCTXDataType)3, 334 },
	{ (Il2CppRGCTXDataType)2, 1168 },
	{ (Il2CppRGCTXDataType)2, 1318 },
	{ (Il2CppRGCTXDataType)3, 330 },
	{ (Il2CppRGCTXDataType)3, 333 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)2, 4715 },
	{ (Il2CppRGCTXDataType)2, 5002 },
	{ (Il2CppRGCTXDataType)3, 362 },
	{ (Il2CppRGCTXDataType)2, 930 },
	{ (Il2CppRGCTXDataType)2, 1324 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)3, 361 },
	{ (Il2CppRGCTXDataType)3, 211 },
	{ (Il2CppRGCTXDataType)2, 9715 },
	{ (Il2CppRGCTXDataType)3, 43468 },
	{ (Il2CppRGCTXDataType)2, 4706 },
	{ (Il2CppRGCTXDataType)2, 4996 },
	{ (Il2CppRGCTXDataType)3, 43469 },
	{ (Il2CppRGCTXDataType)3, 213 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)3, 210 },
	{ (Il2CppRGCTXDataType)3, 212 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)2, 9719 },
	{ (Il2CppRGCTXDataType)3, 43473 },
	{ (Il2CppRGCTXDataType)2, 4718 },
	{ (Il2CppRGCTXDataType)2, 5004 },
	{ (Il2CppRGCTXDataType)3, 43474 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)3, 382 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)3, 303 },
	{ (Il2CppRGCTXDataType)2, 9717 },
	{ (Il2CppRGCTXDataType)3, 43470 },
	{ (Il2CppRGCTXDataType)2, 4709 },
	{ (Il2CppRGCTXDataType)2, 4998 },
	{ (Il2CppRGCTXDataType)3, 43471 },
	{ (Il2CppRGCTXDataType)3, 43472 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)2, 1310 },
	{ (Il2CppRGCTXDataType)3, 302 },
	{ (Il2CppRGCTXDataType)3, 304 },
	{ (Il2CppRGCTXDataType)2, 11403 },
	{ (Il2CppRGCTXDataType)2, 2822 },
	{ (Il2CppRGCTXDataType)3, 15599 },
	{ (Il2CppRGCTXDataType)2, 3874 },
	{ (Il2CppRGCTXDataType)2, 11874 },
	{ (Il2CppRGCTXDataType)3, 43465 },
	{ (Il2CppRGCTXDataType)3, 43466 },
	{ (Il2CppRGCTXDataType)2, 5210 },
	{ (Il2CppRGCTXDataType)3, 43467 },
	{ (Il2CppRGCTXDataType)2, 827 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)3, 37569 },
	{ (Il2CppRGCTXDataType)2, 8548 },
	{ (Il2CppRGCTXDataType)3, 37596 },
	{ (Il2CppRGCTXDataType)2, 1650 },
	{ (Il2CppRGCTXDataType)3, 3049 },
	{ (Il2CppRGCTXDataType)3, 37575 },
	{ (Il2CppRGCTXDataType)3, 13313 },
	{ (Il2CppRGCTXDataType)2, 972 },
	{ (Il2CppRGCTXDataType)3, 37570 },
	{ (Il2CppRGCTXDataType)2, 8543 },
	{ (Il2CppRGCTXDataType)3, 3482 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)2, 3014 },
	{ (Il2CppRGCTXDataType)3, 13331 },
	{ (Il2CppRGCTXDataType)3, 37571 },
	{ (Il2CppRGCTXDataType)3, 13308 },
	{ (Il2CppRGCTXDataType)3, 13309 },
	{ (Il2CppRGCTXDataType)3, 13307 },
	{ (Il2CppRGCTXDataType)3, 13310 },
	{ (Il2CppRGCTXDataType)2, 3010 },
	{ (Il2CppRGCTXDataType)2, 11464 },
	{ (Il2CppRGCTXDataType)3, 16967 },
	{ (Il2CppRGCTXDataType)3, 13312 },
	{ (Il2CppRGCTXDataType)2, 4542 },
	{ (Il2CppRGCTXDataType)3, 13311 },
	{ (Il2CppRGCTXDataType)2, 4385 },
	{ (Il2CppRGCTXDataType)2, 11393 },
	{ (Il2CppRGCTXDataType)2, 4663 },
	{ (Il2CppRGCTXDataType)2, 4962 },
	{ (Il2CppRGCTXDataType)3, 15578 },
	{ (Il2CppRGCTXDataType)2, 3867 },
	{ (Il2CppRGCTXDataType)3, 17938 },
	{ (Il2CppRGCTXDataType)3, 17939 },
	{ (Il2CppRGCTXDataType)3, 17944 },
	{ (Il2CppRGCTXDataType)2, 5204 },
	{ (Il2CppRGCTXDataType)3, 17941 },
	{ (Il2CppRGCTXDataType)3, 54095 },
	{ (Il2CppRGCTXDataType)2, 3018 },
	{ (Il2CppRGCTXDataType)3, 13361 },
	{ (Il2CppRGCTXDataType)1, 4533 },
	{ (Il2CppRGCTXDataType)2, 11409 },
	{ (Il2CppRGCTXDataType)3, 17940 },
	{ (Il2CppRGCTXDataType)1, 11409 },
	{ (Il2CppRGCTXDataType)1, 5204 },
	{ (Il2CppRGCTXDataType)2, 11872 },
	{ (Il2CppRGCTXDataType)2, 11409 },
	{ (Il2CppRGCTXDataType)2, 4669 },
	{ (Il2CppRGCTXDataType)2, 4966 },
	{ (Il2CppRGCTXDataType)3, 17945 },
	{ (Il2CppRGCTXDataType)3, 17943 },
	{ (Il2CppRGCTXDataType)3, 17942 },
	{ (Il2CppRGCTXDataType)2, 701 },
	{ (Il2CppRGCTXDataType)3, 13375 },
	{ (Il2CppRGCTXDataType)2, 944 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	194,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	65,
	s_rgctxIndices,
	300,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
