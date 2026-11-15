	THUMB_FUNC_START sub_080EC16C
sub_080EC16C: @ 0x080EC16C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080EC19C  @ =gRam
	ldr r0, _080EC1A0  @ =0x00001002
	add r1, r4, r0
	add r1, r3, r1
	ldr r2, _080EC1A4  @ =0x00000EE2
	add r0, r4, r2
	add r0, r3, r0
	ldrb r2, [r0]
	mov r0, #16
	and r0, r0, r2
	strb r0, [r1]
	cmp r0, #0
	beq _080EC196
	ldr r1, _080EC1A8  @ =0x00001122
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #7
	strb r1, [r0]
_080EC196:
	pop {r4}
	pop {r0}
	bx r0
_080EC19C:
	.4byte gRam
_080EC1A0:
	.4byte 0x00001002
_080EC1A4:
	.4byte 0x00000EE2
_080EC1A8:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080EC16C

