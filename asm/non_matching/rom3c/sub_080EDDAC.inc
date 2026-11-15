	THUMB_FUNC_START sub_080EDDAC
sub_080EDDAC: @ 0x080EDDAC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080EDDFC  @ =gRam
	ldr r1, _080EDE00  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080EDDF6
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r1, _080EDE04  @ =0x0000097C
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bhi _080EDDF6
	add r1, r1, #1
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bhi _080EDDF6
	ldr r1, _080EDE08  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #63
	strb r0, [r6]
_080EDDF6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EDDFC:
	.4byte gRam
_080EDE00:
	.4byte 0x00000FC2
_080EDE04:
	.4byte 0x0000097C
_080EDE08:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EDDAC

