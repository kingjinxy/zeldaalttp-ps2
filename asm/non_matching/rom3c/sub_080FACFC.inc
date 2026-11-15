	THUMB_FUNC_START sub_080FACFC
sub_080FACFC: @ 0x080FACFC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080FAD40  @ =gRam
	ldr r1, _080FAD44  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #7
	bls _080FAD54
	ldr r2, _080FAD48  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #4
	ldr r0, _080FAD4C  @ =gUnknown_0817A65C
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #6
	bl sub_080C9480
	ldr r3, _080FAD50  @ =0x000010D2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FAD9E
	add r0, r4, #0
	bl sub_080C6230
	b _080FAD9E
_080FAD40:
	.4byte gRam
_080FAD44:
	.4byte 0x00000FB2
_080FAD48:
	.4byte 0x00000F92
_080FAD4C:
	.4byte gUnknown_0817A65C
_080FAD50:
	.4byte 0x000010D2
_080FAD54:
	ldr r4, _080FADA4  @ =0x00000F92
	add r0, r5, r4
	add r0, r6, r0
	lsl r1, r1, #1
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #25
	lsr r1, r1, #24
	ldr r3, _080FADA8  @ =gUnknown_0817A54B
	add r0, r1, r3
	ldrb r2, [r0]
	ldr r4, _080FADAC  @ =0x00000CDE
	add r0, r5, r4
	strh r2, [r0]
	add r0, r1, #1
	add r0, r0, r3
	ldrb r2, [r0]
	mov r3, #206
	lsl r3, r3, #4
	add r0, r5, r3
	strh r2, [r0]
	lsl r1, r1, #3
	ldr r0, _080FADB0  @ =gUnknown_0817A55C
	add r1, r1, r0
	add r0, r6, #0
	mov r2, #2
	bl sub_080C9480
	ldr r4, _080FADB4  @ =0x000010D2
	add r0, r5, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FAD9E
	add r0, r6, #0
	bl sub_080C6230
_080FAD9E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080FADA4:
	.4byte 0x00000F92
_080FADA8:
	.4byte gUnknown_0817A54B
_080FADAC:
	.4byte 0x00000CDE
_080FADB0:
	.4byte gUnknown_0817A55C
_080FADB4:
	.4byte 0x000010D2
	THUMB_FUNC_END sub_080FACFC

