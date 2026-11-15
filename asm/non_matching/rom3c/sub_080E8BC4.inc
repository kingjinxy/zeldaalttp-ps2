	THUMB_FUNC_START sub_080E8BC4
sub_080E8BC4: @ 0x080E8BC4
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E8C16
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E8C16
	ldr r2, _080E8C20  @ =gRam
	ldr r1, _080E8C24  @ =0x00000FC2
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080E8C16
	mov r0, #127
	strb r0, [r1]
	ldr r0, _080E8C28  @ =0x00000F72
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080E8C2C  @ =0x00001032
	add r1, r2, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #64
	orr r0, r0, r2
	strb r0, [r1]
_080E8C16:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E8C20:
	.4byte gRam
_080E8C24:
	.4byte 0x00000FC2
_080E8C28:
	.4byte 0x00000F72
_080E8C2C:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080E8BC4

