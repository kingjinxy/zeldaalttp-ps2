	THUMB_FUNC_START sub_080F9BB8
sub_080F9BB8: @ 0x080F9BB8
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #207
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080F9C06
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080F9C0C  @ =gRam
	ldr r1, _080F9C10  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #128
	strb r1, [r0]
	ldr r5, _080F9C14  @ =0x00000FC2
	add r0, r2, r5
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080F9C18  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r5, _080F9C1C  @ =0x00001172
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _080F9C20  @ =0x00001012
	add r2, r2, r0
	add r2, r4, r2
	strb r3, [r2]
_080F9C06:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F9C0C:
	.4byte gRam
_080F9C10:
	.4byte 0x00000F52
_080F9C14:
	.4byte 0x00000FC2
_080F9C18:
	.4byte 0x00001122
_080F9C1C:
	.4byte 0x00001172
_080F9C20:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080F9BB8

