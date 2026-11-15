	THUMB_FUNC_START sub_0802BCE4
sub_0802BCE4: @ 0x0802BCE4
	push {r4,lr}
	add r2, r0, #0
	lsl r1, r1, #16
	lsr r4, r1, #16
	ldrb r0, [r2, #6]
	add r0, r0, #1
	strb r0, [r2, #6]
	ldr r0, _0802BD10  @ =gUnknown_0202A770
	ldr r3, [r0, #16]
	add r0, r3, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802BD14
	add r0, r3, #0
	add r0, r0, #42
	ldrb r0, [r0]
	lsl r0, r0, #2
	b _0802BD1A
	.byte 0x00
	.byte 0x00
_0802BD10:
	.4byte gUnknown_0202A770
_0802BD14:
	add r0, r1, #4
	mov r1, #24
	and r0, r0, r1
_0802BD1A:
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2, #4]
	ldr r1, _0802BD54  @ =gUnknown_0813D6AC
	ldrb r0, [r2, #4]
	add r0, r0, r4
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldrb r0, [r2, #4]
	add r0, r0, r4
	lsl r0, r0, #1
	add r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r2, #2]
	add r0, r0, r1
	strh r0, [r2, #2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802BD54:
	.4byte gUnknown_0813D6AC
	THUMB_FUNC_END sub_0802BCE4

