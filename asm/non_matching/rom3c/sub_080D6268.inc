	THUMB_FUNC_START sub_080D6268
sub_080D6268: @ 0x080D6268
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080D62B4  @ =gUnknown_03003E74
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	ldr r4, _080D62B8  @ =gRam
	ldr r1, _080D62BC  @ =0x00000F92
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080D62C0  @ =gUnknown_0817526C
	add r1, r1, r0
	add r0, r6, #0
	mov r2, #2
	bl sub_080C9480
	ldrh r0, [r5]
	sub r0, r0, #1
	strh r0, [r5]
	ldr r0, _080D62C4  @ =0x000010D2
	add r4, r4, r0
	add r4, r6, r4
	ldrb r0, [r4]
	cmp r0, #0
	bne _080D62AC
	add r0, r6, #0
	bl sub_080D60E8
	add r0, r6, #0
	bl sub_080C6230
_080D62AC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D62B4:
	.4byte gUnknown_03003E74
_080D62B8:
	.4byte gRam
_080D62BC:
	.4byte 0x00000F92
_080D62C0:
	.4byte gUnknown_0817526C
_080D62C4:
	.4byte 0x000010D2
	THUMB_FUNC_END sub_080D6268

