	THUMB_FUNC_START sub_0810B0C4
sub_0810B0C4: @ 0x0810B0C4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r2, _0810B114  @ =gRam
	ldr r1, _0810B118  @ =0x00000FC2
	add r0, r2, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _0810B148
	sub r1, r1, #96
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #10
	beq _0810B128
	ldr r1, _0810B11C  @ =gUnknown_0817CABC
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5]
	ldr r0, _0810B120  @ =0x00000FB2
	add r1, r2, r0
	add r1, r4, r1
	ldr r2, _0810B124  @ =gUnknown_0817CAC6
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #58
	bl sub_080CF0AC
	b _0810B148
	.byte 0x00
	.byte 0x00
_0810B114:
	.4byte gRam
_0810B118:
	.4byte 0x00000FC2
_0810B11C:
	.4byte gUnknown_0817CABC
_0810B120:
	.4byte 0x00000FB2
_0810B124:
	.4byte gUnknown_0817CAC6
_0810B128:
	ldr r0, _0810B150  @ =0x00000F52
	add r1, r2, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #188
	lsl r0, r0, #4
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add r0, r6, #0
	mov r1, #59
	bl sub_080CF140
_0810B148:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810B150:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810B0C4

