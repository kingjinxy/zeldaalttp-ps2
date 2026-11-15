	THUMB_FUNC_START sub_080C5104
sub_080C5104: @ 0x080C5104
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080C512C  @ =gRam
	ldr r3, _080C5130  @ =0x00000FF2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #236
	bne _080C5126
	ldr r0, _080C5134  @ =0x000015F0
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
	add r0, r2, #0
	bl sub_080C5138
_080C5126:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C512C:
	.4byte gRam
_080C5130:
	.4byte 0x00000FF2
_080C5134:
	.4byte 0x000015F0
	THUMB_FUNC_END sub_080C5104

