	THUMB_FUNC_START sub_0801DEC0
sub_0801DEC0: @ 0x0801DEC0
	push {r4,r5,lr}
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r5, r1, #24
	ldr r2, _0801DF20  @ =gUnknown_0813AB04
	ldr r0, [r3, #88]
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	asr r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	add r4, r0, #0
	add r2, r3, #0
	add r2, r2, #112
	ldrb r0, [r2]
	cmp r4, r0
	bne _0801DEFA
	add r0, r3, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r1, r3, #0
	add r1, r1, #42
	lsr r0, r0, #3
	ldrb r1, [r1]
	cmp r0, r1
	beq _0801DF1A
_0801DEFA:
	strb r4, [r2]
	add r0, r3, #0
	add r0, r0, #43
	ldrb r1, [r0]
	lsr r1, r1, #3
	sub r0, r0, #1
	strb r1, [r0]
	lsl r1, r1, #2
	add r1, r5, r1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r3, #0
	bl 0x08003870
_0801DF1A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0801DF20:
	.4byte gUnknown_0813AB04
	THUMB_FUNC_END sub_0801DEC0

