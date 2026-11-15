	THUMB_FUNC_START sub_080D6B54
sub_080D6B54: @ 0x080D6B54
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080D6BA4  @ =gRam
	ldr r2, _080D6BA8  @ =0x00000996
	add r0, r1, r2
	ldrb r0, [r0]
	mov r3, #15
	and r3, r3, r0
	cmp r3, #0
	bne _080D6B80
	ldr r2, _080D6BAC  @ =0x00000F92
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bls _080D6B80
	strb r3, [r2]
_080D6B80:
	ldr r2, _080D6BB0  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080D6B9C
	mov r0, #63
	strb r0, [r2]
	ldr r0, _080D6BB4  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D6B9C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6BA4:
	.4byte gRam
_080D6BA8:
	.4byte 0x00000996
_080D6BAC:
	.4byte 0x00000F92
_080D6BB0:
	.4byte 0x00000FC2
_080D6BB4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D6B54

