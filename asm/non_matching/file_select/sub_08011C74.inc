	THUMB_FUNC_START sub_08011C74
sub_08011C74: @ 0x08011C74
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08011C88  @ =gUnknown_030004A0
	ldrh r0, [r1, #12]
	cmp r0, #31
	bhi _08011C8C
	add r0, r0, #2
	strh r0, [r1, #12]
	b _08011CA8
	.byte 0x00
	.byte 0x00
_08011C88:
	.4byte gUnknown_030004A0
_08011C8C:
	ldr r3, _08011CB4  @ =0x03000030
	ldr r2, _08011CB8  @ =gUnknown_084275FC
	ldr r0, _08011CBC  @ =gUnknown_02016D60
	ldrb r1, [r0, #26]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r0, [r3]
	ldr r1, [r1]
	add r0, r0, r1
	ldr r1, _08011CC0  @ =0x0600E000
	bl LZ77UnCompVram
	mov r0, #3
	strb r0, [r4, #20]
_08011CA8:
	ldr r1, _08011CBC  @ =gUnknown_02016D60
	mov r0, #1
	strb r0, [r1, #27]
	pop {r4}
	pop {r0}
	bx r0
_08011CB4:
	.4byte 0x03000030
_08011CB8:
	.4byte gUnknown_084275FC
_08011CBC:
	.4byte gUnknown_02016D60
_08011CC0:
	.4byte 0x0600E000
	THUMB_FUNC_END sub_08011C74

