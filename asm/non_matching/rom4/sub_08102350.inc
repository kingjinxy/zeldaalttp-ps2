	THUMB_FUNC_START sub_08102350
sub_08102350: @ 0x08102350
	push {lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _08102378  @ =gRam
	ldr r1, _0810237C  @ =0x00000F92
	add r0, r0, r1
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08102380
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	bl sub_080C632C
	b _08102390
	.byte 0x00
	.byte 0x00
_08102378:
	.4byte gRam
_0810237C:
	.4byte 0x00000F92
_08102380:
	ldrb r1, [r3]
	lsl r1, r1, #4
	ldr r0, _08102398  @ =gUnknown_0817B624
	add r1, r1, r0
	add r0, r2, #0
	mov r2, #2
	bl sub_080C9480
_08102390:
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102398:
	.4byte gUnknown_0817B624
	THUMB_FUNC_END sub_08102350

