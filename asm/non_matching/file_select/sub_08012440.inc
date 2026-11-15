	THUMB_FUNC_START sub_08012440
sub_08012440: @ 0x08012440
	ldr r1, _08012458  @ =gUnknown_03004A50
	mov r2, #192
	lsl r2, r2, #3
	add r0, r1, r2
	cmp r1, r0
	bcs _08012462
	add r2, r0, #0
_0801244E:
	ldr r0, [r1]
	cmp r0, #0
	bne _0801245C
	add r0, r1, #0
	b _08012464
_08012458:
	.4byte gUnknown_03004A50
_0801245C:
	add r1, r1, #128
	cmp r1, r2
	bcc _0801244E
_08012462:
	mov r0, #0
_08012464:
	bx lr
	THUMB_FUNC_END sub_08012440

	.byte 0x00
	.byte 0x00
