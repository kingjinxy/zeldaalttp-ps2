	THUMB_FUNC_START sub_080EC000
sub_080EC000: @ 0x080EC000
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080EC024  @ =gRam
	ldr r1, _080EC028  @ =0x00000FE2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EC02C
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r6, #0
	bl sub_080C632C
	b _080EC0D4
_080EC024:
	.4byte gRam
_080EC028:
	.4byte 0x00000FE2
_080EC02C:
	ldr r2, _080EC0DC  @ =0x00000F92
	add r4, r7, r2
	add r4, r6, r4
	ldrb r0, [r4]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080EC0E0  @ =gUnknown_08178298
	add r1, r1, r0
	add r0, r6, #0
	mov r2, #3
	bl sub_080C9480
	ldrb r0, [r4]
	cmp r0, #7
	bhi _080EC0CE
	ldr r1, _080EC0E4  @ =0x000010D2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EC0CE
	ldr r2, _080EC0E8  @ =0x00001082
	add r0, r7, r2
	add r0, r6, r0
	ldrb r3, [r0]
	ldr r0, _080EC0EC  @ =gUnknown_03003E74
	ldrh r0, [r0]
	lsl r0, r0, #3
	mov r2, #170
	lsl r2, r2, #3
	add r1, r7, r2
	add r5, r0, r1
	ldrh r4, [r5, #4]
	lsl r0, r4, #22
	lsr r0, r0, #22
	mov r2, #128
	lsl r2, r2, #1
	and r2, r2, r0
	ldr r0, _080EC0F0  @ =gUnknown_081783B8
	add r0, r3, r0
	ldrb r1, [r0]
	orr r1, r1, r2
	ldr r0, _080EC0F4  @ =0xFFFFFC00
	and r0, r0, r4
	orr r0, r0, r1
	strh r0, [r5, #4]
	ldr r0, _080EC0F8  @ =gUnknown_081783BC
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r3, r0, #24
	lsr r1, r3, #30
	mov r0, #1
	and r1, r1, r0
	lsl r1, r1, #4
	ldrb r2, [r5, #3]
	sub r0, r0, #18
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r5, #3]
	mov r1, #176
	lsl r1, r1, #4
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080EC0CE
	lsr r0, r3, #28
	mov r4, #3
	and r0, r0, r4
	ldrb r1, [r5, #5]
	lsr r1, r1, #4
	bl sub_080C6570
	and r4, r4, r0
	lsl r4, r4, #2
	ldrb r1, [r5, #5]
	mov r0, #13
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r4
	strb r0, [r5, #5]
_080EC0CE:
	add r0, r6, #0
	bl sub_080C6230
_080EC0D4:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080EC0DC:
	.4byte 0x00000F92
_080EC0E0:
	.4byte gUnknown_08178298
_080EC0E4:
	.4byte 0x000010D2
_080EC0E8:
	.4byte 0x00001082
_080EC0EC:
	.4byte gUnknown_03003E74
_080EC0F0:
	.4byte gUnknown_081783B8
_080EC0F4:
	.4byte 0xFFFFFC00
_080EC0F8:
	.4byte gUnknown_081783BC
	THUMB_FUNC_END sub_080EC000

