	THUMB_FUNC_START sub_08098B24
sub_08098B24: @ 0x08098B24
	push {r4-r6,lr}
	ldr r6, _08098B40  @ =gRam
	ldr r0, _08098B44  @ =0x0000188C
	add r1, r6, r0
	ldrh r0, [r1]
	add r5, r0, #0
	cmp r5, #0
	beq _08098B48
	sub r0, r0, #1
	strh r0, [r1]
	bl sub_08098950
	b _08098B84
	.byte 0x00
	.byte 0x00
_08098B40:
	.4byte gRam
_08098B44:
	.4byte 0x0000188C
_08098B48:
	mov r0, #4
	mov r1, #35
	bl sub_081167A0
	mov r0, #21
	bl sub_0809E43C
	ldr r0, _08098B8C  @ =0x0000176E
	add r1, r6, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _08098B90  @ =0x00001718
	add r0, r6, r1
	strb r5, [r0]
	bl sub_08092F78
	ldr r0, _08098B94  @ =0x0000188E
	add r4, r6, r0
	strb r5, [r4]
	ldr r1, _08098B98  @ =0x00001711
	add r0, r6, r1
	strb r5, [r0]
	add r1, r1, #91
	add r0, r6, r1
	strb r5, [r0]
	bl sub_08133644
	strb r5, [r4]
	bl sub_0809D5CC
_08098B84:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08098B8C:
	.4byte 0x0000176E
_08098B90:
	.4byte 0x00001718
_08098B94:
	.4byte 0x0000188E
_08098B98:
	.4byte 0x00001711
	THUMB_FUNC_END sub_08098B24

