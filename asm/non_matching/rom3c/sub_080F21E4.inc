	THUMB_FUNC_START sub_080F21E4
sub_080F21E4: @ 0x080F21E4
	push {r4-r6,lr}
	add r5, r0, #0
	mov r3, #254
	ldr r4, _080F2274  @ =gRam
	ldr r1, _080F2278  @ =0x00001622
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080F227C  @ =0x00001623
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r6, _080F2280  @ =0x000016C4
	add r0, r4, r6
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080F2284  @ =gUnknown_081790BC
	and r5, r5, r3
	add r0, r5, r0
	sub r1, r1, r2
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r3, #1
	ldr r0, _080F2288  @ =gUnknown_081790C0
	add r0, r5, r0
	ldrh r0, [r0]
	cmp r1, r0
	bcs _080F226A
	ldr r1, _080F228C  @ =0x00001624
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080F2290  @ =0x00001625
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r6, r6, #5
	add r0, r4, r6
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080F2294  @ =gUnknown_081790C4
	add r0, r5, r0
	sub r1, r1, r2
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _080F2298  @ =gUnknown_081790C8
	add r0, r5, r0
	ldrh r0, [r0]
	cmp r1, r0
	bcs _080F226A
	mov r3, #0
_080F226A:
	add r0, r3, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080F2274:
	.4byte gRam
_080F2278:
	.4byte 0x00001622
_080F227C:
	.4byte 0x00001623
_080F2280:
	.4byte 0x000016C4
_080F2284:
	.4byte gUnknown_081790BC
_080F2288:
	.4byte gUnknown_081790C0
_080F228C:
	.4byte 0x00001624
_080F2290:
	.4byte 0x00001625
_080F2294:
	.4byte gUnknown_081790C4
_080F2298:
	.4byte gUnknown_081790C8
	THUMB_FUNC_END sub_080F21E4

