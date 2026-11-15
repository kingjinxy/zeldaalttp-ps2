	THUMB_FUNC_START sub_08101B7C
sub_08101B7C: @ 0x08101B7C
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _08101B9C  @ =gRam
	ldr r1, _08101BA0  @ =0x00000F92
	add r0, r0, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #7
	bne _08101BA8
	ldr r1, _08101BA4  @ =gUnknown_0817B430
	add r0, r2, #0
	mov r2, #8
	bl sub_080C9480
	b _08101BB8
_08101B9C:
	.4byte gRam
_08101BA0:
	.4byte 0x00000F92
_08101BA4:
	.4byte gUnknown_0817B430
_08101BA8:
	ldrb r1, [r1]
	lsl r1, r1, #5
	ldr r0, _08101BBC  @ =gUnknown_0817B350
	add r1, r1, r0
	add r0, r2, #0
	mov r2, #4
	bl sub_080C9480
_08101BB8:
	pop {r0}
	bx r0
_08101BBC:
	.4byte gUnknown_0817B350
	THUMB_FUNC_END sub_08101B7C

