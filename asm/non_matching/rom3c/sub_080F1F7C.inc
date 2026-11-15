	THUMB_FUNC_START sub_080F1F7C
sub_080F1F7C: @ 0x080F1F7C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r2, _080F1FB0  @ =gRam
	ldr r3, _080F1FB4  @ =0x00001142
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F1F9C
	ldr r3, _080F1FB8  @ =0x00000F52
	add r0, r2, r3
	add r0, r1, r0
	mov r1, #1
	strb r1, [r0]
_080F1F9C:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C8168
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F1FB0:
	.4byte gRam
_080F1FB4:
	.4byte 0x00001142
_080F1FB8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F1F7C

