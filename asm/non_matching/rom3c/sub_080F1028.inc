	THUMB_FUNC_START sub_080F1028
sub_080F1028: @ 0x080F1028
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #48
	mov r2, sp
	bl sub_080C9164
	ldr r0, _080F105C  @ =gRam
	ldr r2, _080F1060  @ =0x00000F92
	add r1, r0, r2
	add r4, r4, r1
	ldr r1, _080F1064  @ =0x00000996
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F105C:
	.4byte gRam
_080F1060:
	.4byte 0x00000F92
_080F1064:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F1028

