	THUMB_FUNC_START sub_0802A304
sub_0802A304: @ 0x0802A304
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _0802A324
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802A324
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_0802A324:
	ldr r0, _0802A33C  @ =gUnknown_0813D474
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802A33C:
	.4byte gUnknown_0813D474
	THUMB_FUNC_END sub_0802A304

