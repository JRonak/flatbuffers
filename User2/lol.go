// automatically generated by the FlatBuffers compiler, do not modify

package User2

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

type lol struct {
	_tab flatbuffers.Table
}

func GetRootAslol(buf []byte, offset flatbuffers.UOffsetT) *lol {
	n := flatbuffers.GetUOffsetT(buf[offset:])
	x := &lol{}
	x.Init(buf, n+offset)
	return x
}

func (rcv *lol) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *lol) Id() int32 {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(4))
	if o != 0 {
		return rcv._tab.GetInt32(o + rcv._tab.Pos)
	}
	return 0
}

func (rcv *lol) MutateId(n int32) bool {
	return rcv._tab.MutateInt32Slot(4, n)
}

func lolStart(builder *flatbuffers.Builder) {
	builder.StartObject(1)
}
func lolAddId(builder *flatbuffers.Builder, id int32) {
	builder.PrependInt32Slot(0, id, 0)
}
func lolEnd(builder *flatbuffers.Builder) flatbuffers.UOffsetT {
	return builder.EndObject()
}
