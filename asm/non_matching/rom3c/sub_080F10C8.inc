	THUMB_FUNC_START sub_080F10C8
sub_080F10C8: @ 0x080F10C8
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F111C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F1108
	add r0, r4, #0
	mov r1, #168
	mov r2, sp
	bl sub_080C9164
	add r0, r4, #0
	bl sub_080C5080
	ldr r0, _080F1110  @ =gRam
	ldr r1, _080F1114  @ =0x00000F92
	add r2, r0, r1
	add r2, r4, r2
	ldr r1, _080F1118  @ =0x00000996
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
_080F1108:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080F1110:
	.4byte gRam
_080F1114:
	.4byte 0x00000F92
_080F1118:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F10C8

