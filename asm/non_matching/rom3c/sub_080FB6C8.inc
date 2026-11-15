	THUMB_FUNC_START sub_080FB6C8
sub_080FB6C8: @ 0x080FB6C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080FB72C  @ =gRam
	ldr r2, _080FB730  @ =0x00000EE2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r3, [r1]
	ldr r5, _080FB734  @ =0x00000F02
	add r1, r4, r5
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r3, r3, r1
	sub r3, r3, #16
	sub r2, r2, #16
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	sub r5, r5, #16
	add r1, r4, r5
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #16
	ldr r1, _080FB738  @ =0x00000968
	add r0, r4, r1
	strb r3, [r0]
	lsr r3, r3, #8
	ldr r5, _080FB73C  @ =0x00000974
	add r0, r4, r5
	strb r3, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	lsr r2, r2, #8
	add r5, r5, #1
	add r0, r4, r5
	strb r2, [r0]
	add r1, r1, #3
	add r0, r4, r1
	mov r1, #48
	strb r1, [r0]
	ldr r2, _080FB740  @ =0x0000096D
	add r4, r4, r2
	strb r1, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080FB72C:
	.4byte gRam
_080FB730:
	.4byte 0x00000EE2
_080FB734:
	.4byte 0x00000F02
_080FB738:
	.4byte 0x00000968
_080FB73C:
	.4byte 0x00000974
_080FB740:
	.4byte 0x0000096D
	THUMB_FUNC_END sub_080FB6C8

