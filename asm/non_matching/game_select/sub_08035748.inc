	THUMB_FUNC_START sub_08035748
sub_08035748: @ 0x08035748
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0803579E
	mov r0, #3
	strb r0, [r4, #20]
	ldr r1, _08035784  @ =gUnknown_0201F000
	mov r0, #4
	str r0, [r1]
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r2, #252
	lsl r2, r2, #1
	cmp r0, r2
	ble _0803578C
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #24
	strb r0, [r1]
	mov r1, #50
	ldrsh r0, [r4, r1]
	ldr r1, _08035788  @ =0xFFFFFE08
	add r0, r0, r1
	b _0803579A
_08035784:
	.4byte gUnknown_0201F000
_08035788:
	.4byte 0xFFFFFE08
_0803578C:
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #8
	strb r0, [r1]
	mov r1, #50
	ldrsh r0, [r4, r1]
	sub r0, r2, r0
_0803579A:
	lsl r0, r0, #1
	str r0, [r4, #12]
_0803579E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035748

