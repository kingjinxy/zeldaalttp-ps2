	THUMB_FUNC_START sub_081051E0
sub_081051E0: @ 0x081051E0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r3, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #24
	lsr r5, r2, #24
	ldr r4, _08105220  @ =gRam
	ldr r0, _08105224  @ =0x00000F52
	add r2, r4, r0
	add r2, r3, r2
	mov r0, #16
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #28
	strb r1, [r2]
	cmp r1, #0
	beq _08105212
	ldr r0, _08105228  @ =0x00001132
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08105212:
	ldr r1, _0810522C  @ =0x00000FB2
	add r0, r4, r1
	add r0, r6, r0
	strb r5, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_08105220:
	.4byte gRam
_08105224:
	.4byte 0x00000F52
_08105228:
	.4byte 0x00001132
_0810522C:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_081051E0

