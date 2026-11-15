	THUMB_FUNC_START sub_08127134
sub_08127134: @ 0x08127134
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _08127148  @ =gUnknown_03000050
	ldr r0, [r1, #12]
	cmp r0, #0
	beq _0812714C
	sub r0, r0, #1
	str r0, [r1, #12]
	b _0812715A
_08127148:
	.4byte gUnknown_03000050
_0812714C:
	add r0, r1, #0
	add r0, r0, #72
	add r0, r2, r0
	ldr r1, _08127160  @ =gUnknown_08180940
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
_0812715A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08127160:
	.4byte gUnknown_08180940
	THUMB_FUNC_END sub_08127134

