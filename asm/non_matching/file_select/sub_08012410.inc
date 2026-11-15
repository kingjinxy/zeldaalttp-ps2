	THUMB_FUNC_START sub_08012410
sub_08012410: @ 0x08012410
	add r1, r0, #0
	add r1, r1, #128
	ldr r0, _0801241C  @ =gUnknown_03004A50
	cmp r1, r0
	bcc _08012424
	b _0801243C
_0801241C:
	.4byte gUnknown_03004A50
_08012420:
	add r0, r1, #0
	b _0801243E
_08012424:
	mov r2, #192
	lsl r2, r2, #3
	add r0, r0, r2
	cmp r1, r0
	bcs _0801243C
	add r2, r0, #0
_08012430:
	ldr r0, [r1]
	cmp r0, #0
	beq _08012420
	add r1, r1, #128
	cmp r1, r2
	bcc _08012430
_0801243C:
	mov r0, #0
_0801243E:
	bx lr
	THUMB_FUNC_END sub_08012410

