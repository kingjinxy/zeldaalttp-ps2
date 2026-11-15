	THUMB_FUNC_START sub_081332B0
sub_081332B0: @ 0x081332B0
	push {r4,lr}
	ldr r1, _081332EC  @ =gGloves
	ldrb r0, [r1]
	cmp r0, #0
	beq _081332D8
	sub r0, r0, #1
	ldr r1, _081332F0  @ =gUnknown_0822BC08
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r4, [r0]
	add r0, r4, #0
	bl sub_08133468
	ldr r1, _081332F4  @ =gUnknown_020009FA
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08133468
	ldr r1, _081332F8  @ =gUnknown_02000DFA
	strh r0, [r1]
_081332D8:
	ldr r1, _081332FC  @ =gRam
	ldr r0, _08133300  @ =0x0000099B
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081332EC:
	.4byte gGloves
_081332F0:
	.4byte gUnknown_0822BC08
_081332F4:
	.4byte gUnknown_020009FA
_081332F8:
	.4byte gUnknown_02000DFA
_081332FC:
	.4byte gRam
_08133300:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081332B0

