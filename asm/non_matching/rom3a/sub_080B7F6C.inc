	THUMB_FUNC_START sub_080B7F6C
sub_080B7F6C: @ 0x080B7F6C
	push {r4,lr}
	ldr r2, _080B7FA8  @ =gUnknown_08170634
	ldr r0, _080B7FAC  @ =gUnknown_02006886
	ldrb r1, [r0]
	lsr r1, r1, #1
	lsl r0, r1, #2
	add r0, r0, r2
	ldr r3, [r0]
	ldr r0, _080B7FB0  @ =gUnknown_08170644
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	lsl r0, r0, #16
	cmp r0, #0
	blt _080B7FA2
	ldr r4, _080B7FB4  @ =gUnknown_02000402
_080B7F8E:
	asr r1, r0, #16
	lsl r0, r1, #1
	add r2, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r2]
	sub r1, r1, #1
	lsl r0, r1, #16
	cmp r0, #0
	bge _080B7F8E
_080B7FA2:
	pop {r4}
	pop {r0}
	bx r0
_080B7FA8:
	.4byte gUnknown_08170634
_080B7FAC:
	.4byte gUnknown_02006886
_080B7FB0:
	.4byte gUnknown_08170644
_080B7FB4:
	.4byte gUnknown_02000402
	THUMB_FUNC_END sub_080B7F6C

