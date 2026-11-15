	THUMB_FUNC_START sub_08080680
sub_08080680: @ 0x08080680
	push {lr}
	sub sp, sp, #4
	ldr r1, _080806BC  @ =gRam
	ldr r2, _080806C0  @ =0x000009AC
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #26
	beq _080806B4
	add r2, r2, #252
	add r0, r1, r2
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _080806B4
	mov r1, sp
	mov r2, #246
	lsl r2, r2, #1
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080806C4  @ =gUnknown_0201A000
	ldr r2, _080806C8  @ =0x01001000
	mov r0, sp
	bl CpuSet
_080806B4:
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080806BC:
	.4byte gRam
_080806C0:
	.4byte 0x000009AC
_080806C4:
	.4byte gUnknown_0201A000
_080806C8:
	.4byte 0x01001000
	THUMB_FUNC_END sub_08080680

